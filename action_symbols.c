#include "action_symbols.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char* yytext;
extern char* line;
extern int yylineno;
extern int yyleng;
extern char* original_filename;
extern void resetColor();


void print_error(char* name, char *line, char* filename, char* error_msg, int line_number, int column);

void open_scope() {
    SymbolTable *symbol_table = Create_ST();
    push_symbolTable(symbol_table);
}

void close_scope() {
    pop_symbolTable();
}

void save_type() {
    // printf("SAVE TYPE: %s\n", yytext);
    SemanticRegister *semantic_register = malloc(sizeof(SemanticRegister));
    semantic_register->type = TYPE;

    semantic_register->value = malloc(strlen(yytext) + 1);
    strcpy(semantic_register->value, yytext);     
    push_semanticRegister(semantic_register);
    print_semantic_stack();
}

void save_id() {
    SemanticRegister *semantic_register = malloc(sizeof(SemanticRegister));
    semantic_register->type = SMTYPE_VARIABLE;
    semantic_register->value = malloc(strlen(yytext) + 1);
    strcpy(semantic_register->value, yytext);
    push_semanticRegister(semantic_register);
    print_semantic_stack();
}

void end_declaration() {
    SemanticRegister *type_semanticRegister = retrieve(TYPE);
    if (!type_semanticRegister) {
        // TODO: No type declared
        return;
    }
    char* type = type_semanticRegister->value;

    SemanticRegister *top; 

    while((top = get_top_semanticStack()) != NULL && top->type == SMTYPE_VARIABLE) {
        if (exists(top->value) == 1) {
            char *result = strstr(line, top->value);
            int position = result - line;   
            // printf("\n//*****//****// Error: Variable %s already declared\n", top->value);
            char* errorMsg = malloc(strlen(top->value) + 100);
            sprintf(errorMsg, "variable '%s' already declared in this scope", top->value);
            print_error(top->value, line, original_filename, errorMsg, yylineno, position);
            pop_semanticRegister();
        } else {    
            Symbol new_symbol;
            new_symbol.lexeme = malloc(strlen(top->value) + 1);
            strcpy(new_symbol.lexeme, top->value);
            new_symbol.type = malloc(strlen(type) + 1);
            strcpy(new_symbol.type, type);
            new_symbol.typeST = TYPE_IDENTIFIER;
            insert_symbol(new_symbol);
            pop_semanticRegister();
        }
    }
    printf("FIN DECLARACION\n");
    pop_semanticRegister();
    print_semantic_stack();
}

void print_error(char* name, char *line, char* filename, char* error_msg, int line_number, int column) {
    printf ("\033[1;33m%s:%d:%d\033[0m ", filename, line_number, column);
    printf("\033[1;31merror:\033[0m %s\n", error_msg);

    if (line != NULL) {
		line[strcspn(line, "\n")] = 0;
	}

    int offset = 5 + strlen(line);

    printf ("\033[1;33m%5d\033[0m | %s\n", line_number, line);

	if (column != 1 || yyleng == 1) {
		printf ("%5s | \033[1;31m%*s\033[0m", "", column + 1, "^"); // cambio	
	} else {
		printf ("%5s | \033[1;31m%*s\033[0m", "", column, "^"); // cambio
	}
    for (int i = column + offset; i < column + offset + strlen(name) - 1; i++)
		printf("\033[1;31m~");
	resetColor();
    printf("%c", '\n');

}

void check_declaration(char* name) {
    if (!exists(name)) {
        char *result = strstr(line, name);
        int position = result - line;
        char* errorMsg = malloc(strlen(name) + 50);
        sprintf(errorMsg, "'%s' undeclared (first use in this context)", name);
        print_error(name, line, original_filename, errorMsg, yylineno, position);

        Symbol new_symbol;
        new_symbol.lexeme = malloc(strlen(name) + 1);
        strcpy(new_symbol.lexeme, name);
        new_symbol.type = malloc(strlen("void") + 1);
        strcpy(new_symbol.type, "void");
        new_symbol.typeST = TYPE_IDENTIFIER;
        insert_symbol(new_symbol);
    }
}