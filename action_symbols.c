#include "action_symbols.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char* yytext;

extern char* yylloc;

// extern yylval;

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
        Symbol new_symbol;
        new_symbol.lexeme = malloc(strlen(top->value) + 1);
        strcpy(new_symbol.lexeme, top->value);
        new_symbol.type = malloc(strlen(type) + 1);
        strcpy(new_symbol.type, type);
        new_symbol.typeST = TYPE_IDENTIFIER;
        insert_symbol(new_symbol);
        pop_semanticRegister();
    }
    printf("FIN DECLARACION\n");
    pop_semanticRegister();
    print_semantic_stack();
}

void check_declaration() {
    char* id = malloc(strlen(yytext) + 1);
    strcpy(id, yytext);

    if (!exists(id)) {
        printf("\n\n🤬🤬🤬🤬🤬 VARIABLE %s NOT DECLARED 🤬🤬🤬🤬🤬🤬 \n\n", id);
    }
}