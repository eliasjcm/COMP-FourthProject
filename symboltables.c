#include "symboltables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// void semantic_stack_init() {
//     semantic_stack.size = 0;
//     semantic_stack.top = NULL;
// }

// void push_symbolTable(SemanticRegister* semantic_register) {
//     semantic_register->next = semantic_stack.top;
//     semantic_stack.top = semantic_register;
//     semantic_stack.size++;
// }

// void pop_symbolTable() {
//     SemanticRegister *aux = semantic_stack.top;
//     if (aux) {    
//         semantic_stack.top = semantic_stack.top->next;
//         semantic_stack.size--;
//         free(aux);    
//     }
// }

// SemanticRegister *retrieve(SemanticType typeST) {
//     SemanticRegister *aux = semantic_stack.top;
//     while (aux) {
//         if (aux->typeST == typeST) {
//             return aux;
//         }
//         aux = aux->next;
//     }
//     return NULL;
// }

// void delete_type(SemanticType typeST) {
//     SemanticRegister *aux = semantic_stack.top;
//     SemanticRegister *prev = NULL;
//     while (aux) {
//         if (aux->typeST == typeST) {
//             if (prev) {
//                 prev->next = aux->next;
//             } else {
//                 semantic_stack.top = aux->next;
//             }
//             semantic_stack.size--;
//             free(aux);
//             return;
//         }
//         prev = aux;
//         aux = aux->next;
//     }
// }

// void update(SemanticType typeST, char *value) {
//     SemanticRegister *aux = semantic_stack.top;
//     while (aux) {
//         if (aux->typeST == typeST) {
//             aux->value = value;
//             return;
//         }
//         aux = aux->next;
//     }
// }

void insert_symbol(Symbol symbol) {
    // if(symbolPPTable.nullsym >= 200 ) {     
    // } 
    SymbolTable* symbolTable = symboltables_stack.top;
    if (symbolTable == NULL) {
        return;
    }
    if (symbolTable->nullsym >= symbolTable->size ) {   
        symbolTable->size *= 2;
        Symbol* new_symbolTable = realloc(symbolTable->symbols, symbolTable->size * sizeof(Symbol));
        if (new_symbolTable == NULL) {
            // new_error_nofile();
            // print_error_type("Unable to allocate enough memory for symbol table", "");
            printf("Unable to allocate enough memory for symbol table\n");
            exit(-1);
        } else {
            symbolTable->symbols = new_symbolTable;
        }
    }   
    // int ppid_idx = get_ppid_idx(pp_id.name);
    // if (ppid_idx == -1) {
    //     symbolPPTable.pp_ids[symbolPPTable.nullsym++] = pp_id;
    // } else {
    //     symbolPPTable.pp_ids[ppid_idx].lexeme = pp_id.lexeme;
    // }
    symbolTable->symbols[symbolTable->nullsym++] = symbol;
}


int exists(char* name) {
    SymbolTable* symbolTable = symboltables_stack.top;
    if (symbolTable == NULL) {
        return 0;
    }
    while (symbolTable) {
        for (int i = 0; i < symbolTable->nullsym; i++) {
            if (strcmp(symbolTable->symbols[i].lexeme, name) == 0) {
                return 1;
            }
        }
        symbolTable = symbolTable->next;
    }
    return 0;
    // for (int i = 0 ; i < symbolTable->nullsym; i++){
    //     if (strcmp(symbolTable->symbols[i].lexeme, name) == 0)
    //         return i;
    // }
    // return -1;
}

void symboltables_stack_init() {
    symboltables_stack.size = 0;
    symboltables_stack.top = NULL;
}

SymbolTable *Create_ST() {
    SymbolTable *ST = (SymbolTable *) malloc(sizeof(SymbolTable));
    ST->size = 64;
    ST->nullsym = 0;
    ST->next = NULL;
    ST->symbols = malloc(64 * sizeof(Symbol));

    return ST;
}

void push_symbolTable(SymbolTable *symbol_table) {
    symbol_table->next = symboltables_stack.top;
    symboltables_stack.top = symbol_table;
    symboltables_stack.size++;
}

void pop_symbolTable() {
    SymbolTable *aux = symboltables_stack.top;
    if (aux) {    
        symboltables_stack.top = symboltables_stack.top->next;
        symboltables_stack.size--;
        free(aux);    
    }
}

void print_symboltables() {
    SymbolTable *aux = symboltables_stack.top;
    int count = 1;
    printf("\n\t\tSymbol Tables Stack\n----------------------------------------------\n\n");
    while (aux) {
        // printf("Symbol Table #%d\n", count);
        printf("\n********** Symbol Table #%d **********\n\n", count);
        for (int i = 0; i < aux->nullsym; i++) {
            // printf("%s -> %d\n", aux->symbols[i].lexeme, aux->symbols[i].typeST);
            printf("%s -> %s\n", aux->symbols[i].lexeme, aux->symbols[i].type);
        }
        printf("\n**************************************\n");
        // printf("Length: %d. Max size: %d \n", aux->nullsym, aux->size);   
        aux = aux->next;
        count++;
    }
    printf("\n----------------------------------------------\n");
}


// int main() {
//     // semantic_stack_init(semantic_stack);
//     // SemanticRegister *semantic_register;
//     // semantic_register = (SemanticRegister*) malloc(sizeof(SemanticRegister));
//     // semantic_register->typeST = TYPE;
//     // semantic_register->value = "int";
//     // push_symbolTable(semantic_register);
//     // semantic_register = (SemanticRegister*) malloc(sizeof(SemanticRegister));
//     // semantic_register->typeST = VARIABLE;
//     // semantic_register->value = "a";
//     // push_symbolTable(semantic_register);

//     // pop_symbolTable();

//     // semantic_register = (SemanticRegister*) malloc(sizeof(SemanticRegister));
//     // semantic_register->typeST = VARIABLE;
//     // semantic_register->value = "ALEJANDRO";
//     // push_symbolTable(semantic_register);

//     // semantic_register = retrieve(TYPE);

//     // delete_type(TYPE);

//     // update(VARIABLE, "ABIEL");
    

//     symboltables_stack_init();

//     SymbolTable *ST = Create_ST();
    
//     push_symbolTable(ST);

//     Symbol symbol;

//     symbol.lexeme = "SYMBOL 1 DE ALEJANDRO1";
//     symbol.typeST = TYPE_IDENTIFIER;
//     insert_symbol(symbol);
//     print_symboltables();

//     ST = Create_ST();

//     push_symbolTable(ST);

//     symbol.lexeme = "SYMBOL 2 DE ABIEL";

//     insert_symbol(symbol);

//     print_symboltables();

//     printf("ALEJANDRO EXISTE: %d\n", exists("SYMBOL 1 DE ALEJANDRO"));



// }


