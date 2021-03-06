#include "semantic_actions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char* yytext;
extern char* line;
extern int yylineno;
extern int yyleng;
extern char* original_filename;
extern void resetColor();
int depth = 1;


void print_error(char* name, char *line, char* filename, char* error_msg, int line_number, int column);

void open_scope() {
    depth++;
    SymbolTable *symbol_table = Create_ST();
    push_symbolTable(symbol_table);
}

void close_scope() {
    depth--;
    pop_symbolTable();
}

void save_type() {
    // printf("SAVE TYPE: %s\n", yytext);
    SemanticRegister *semantic_register = malloc(sizeof(SemanticRegister));
    semantic_register->type = TYPE;

    semantic_register->value = malloc(strlen(yytext) + 1);
    strcpy(semantic_register->value, yytext);     
    push_semanticRegister(semantic_register);
    // print_semantic_stack();
}

void save_id() {
    SemanticRegister *semantic_register = malloc(sizeof(SemanticRegister));
    semantic_register->type = SMTYPE_VARIABLE;
    semantic_register->value = malloc(strlen(yytext) + 1);
    strcpy(semantic_register->value, yytext);
    push_semanticRegister(semantic_register);
    // print_semantic_stack();
}

void save_struct() {
    SemanticRegister *semantic_register = malloc(sizeof(SemanticRegister));
    semantic_register->type = SMTYPE_STRUCT;
    semantic_register->value = "struct";

    push_semanticRegister(semantic_register);
}
void save_union() {
    SemanticRegister *semantic_register = malloc(sizeof(SemanticRegister));
    semantic_register->type = SMTYPE_UNION;
    semantic_register->value = "union";

    push_semanticRegister(semantic_register);
}

int end_declaration() {
    int is_struct_union = 0; // 0 for other types, 1 for struct, 2 for union
    SemanticRegister *type_semanticRegister;
    // if (!type_semanticRegister) {
    //     // TODO: No type declared
    //     return 0;
    // }
    char* type;

    SemanticRegister *top; 
    top = get_top_semanticStack();

    while(top != NULL && top->type == SMTYPE_VARIABLE) {
        if (top->next) {
            top = top->next;
        }
    }
    if (top) {
        // printf("TOP DESPUES DE LAS VARIABLES: %s\n", top->value);
    } else {
        return 0;
    }

    if (top->type == SMTYPE_STRUCT_ID) {
        type = malloc(strlen(top->value) + 15);
        sprintf(type, "struct %s", top->value);
        is_struct_union = 1;
    } else if (top->type == SMTYPE_UNION_ID) {
        type = malloc(strlen(top->value) + 15);
        sprintf(type, "union %s", top->value);
        is_struct_union = 2;
    } else {
        type = top->value;
    }
    // if ((type_semanticRegister = retrieve(SMTYPE_STRUCT_ID)) != NULL) {
    //     type = malloc(strlen(type_semanticRegister->value) + 15);
    //     sprintf(type, "struct %s", type_semanticRegister->value);
    //     is_struct_union = 1;
    // } else if ((type_semanticRegister = retrieve(SMTYPE_UNION_ID)) != NULL) {
    //     SemanticRegister *union_semanticRegister = retrieve(SMTYPE_UNION);
    //     type = malloc(strlen(type_semanticRegister->value) + 15);
    //     sprintf(type, "union %s", type_semanticRegister->value);
    //     is_struct_union = 2;
    // } else if ((type_semanticRegister = retrieve(TYPE)) != NULL) {
    //     type = type_semanticRegister->value;
    // } else {
    //     return 0;
    // }

    while((top = get_top_semanticStack()) != NULL && top->type == SMTYPE_VARIABLE) {
        if (exists(top->value) == 1) {
            char *result = strstr(line, top->value);
            int position = result - line;   
            // printf("\n//*****//****// Error: Variable %s already declared\n", top->value);
            char* errorMsg = malloc(strlen(top->value) + 100);
            sprintf(errorMsg, "variable '%s' already declared in this context", top->value);
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
    // printf("FIN DECLARACION\n");
    if (is_struct_union == 1) {
        pop_semanticRegister();
    } else if (is_struct_union == 2) {
        pop_semanticRegister();
    }
    pop_semanticRegister();
    // print_semantic_stack();
    return 1;
}

void print_error(char* name, char *line, char* filename, char* error_msg, int line_number, int column) {
    printf("\033[1;33m%s:%d:%d\033[0m ", filename, line_number, column);
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
    // printf("NAME: %s\n", name);
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

void save_identifier_struct_union(char* value) {
    // printf("******************** save_identifier_struct_union: %s ****************\n", value);
    SemanticRegister *semantic_register = malloc(sizeof(SemanticRegister));
    if (get_top_semanticStack()->type == SMTYPE_STRUCT) {
        semantic_register->type = SMTYPE_STRUCT_ID;
    } else {
        semantic_register->type = SMTYPE_UNION_ID;
    }
    semantic_register->value = malloc(strlen(value) + 1);
    strcpy(semantic_register->value, value);
    push_semanticRegister(semantic_register);
}



void finish_struct_union() {
    SemanticRegister *id_semanticRegister = get_top_semanticStack();
    Symbol new_symbol;
    if (id_semanticRegister->type == SMTYPE_STRUCT_ID) {
        new_symbol.lexeme = malloc(strlen(id_semanticRegister->value) + 1);
        strcpy(new_symbol.lexeme, id_semanticRegister->value);
        new_symbol.type = malloc(strlen("struct") + 1);
        strcpy(new_symbol.type, "struct");
        new_symbol.typeST = TYPE_STRUCT;
        insert_symbol(new_symbol);
        pop_semanticRegister();
        pop_semanticRegister();
    } else {
        // SMTYPE_UNION_ID
        new_symbol.lexeme = malloc(strlen(id_semanticRegister->value) + 1);
        strcpy(new_symbol.lexeme, id_semanticRegister->value);
        new_symbol.type = malloc(strlen("union") + 1);
        strcpy(new_symbol.type, "union");
        new_symbol.typeST = TYPE_UNION;
        pop_semanticRegister();
        pop_semanticRegister();
    }
    pop_symbolTable();
    insert_symbol(new_symbol);
}