#include "semantic_stack.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void semantic_stack_init() {
    semantic_stack.size = 0;
    semantic_stack.top = NULL;
}

void push_semanticRegister(SemanticRegister* semantic_register) {
    semantic_register->next = semantic_stack.top;
    semantic_stack.top = semantic_register;
    semantic_stack.size++;
}

void pop_semanticRegister() {
    SemanticRegister *aux = semantic_stack.top;
    if (aux) {    
        semantic_stack.top = semantic_stack.top->next;
        semantic_stack.size--;
        free(aux);    
    }
}

SemanticRegister *retrieve(SemanticType type) {
    SemanticRegister *aux = semantic_stack.top;
    while (aux) {
        if (aux->type == type) {
            return aux;
        }
        aux = aux->next;
    }
    return NULL;
}

void delete_type(SemanticType type) {
    SemanticRegister *aux = semantic_stack.top;
    SemanticRegister *prev = NULL;
    while (aux) {
        if (aux->type == type) {
            if (prev) {
                prev->next = aux->next;
            } else {
                semantic_stack.top = aux->next;
            }
            semantic_stack.size--;
            free(aux);
            return;
        }
        prev = aux;
        aux = aux->next;
    }
}

void print_semantic_stack() {
    printf("\nSemantic Stack\n");
    printf("================================\n");
    SemanticRegister *aux = semantic_stack.top;
    while (aux) {
        printf("%s -> %d\n", aux->value, aux->type);
        aux = aux->next;
    }
    printf("================================\n\n");
}

void update(SemanticType type, char *value) {
    SemanticRegister *aux = semantic_stack.top;
    while (aux) {
        if (aux->type == type) {
            aux->value = value;
            return;
        }
        aux = aux->next;
    }
}

SemanticRegister* get_top_semanticStack() {
    return semantic_stack.top;
}

// int main() {
//     semantic_stack_init(semantic_stack);
//     SemanticRegister *semantic_register;
//     semantic_register = (SemanticRegister*) malloc(sizeof(SemanticRegister));
//     semantic_register->type = TYPE;
//     semantic_register->value = "int";
//     push_semanticRegister(semantic_register);
//     semantic_register = (SemanticRegister*) malloc(sizeof(SemanticRegister));
//     semantic_register->type = SMTYPE_VARIABLE;
//     semantic_register->value = "a";
//     push_semanticRegister(semantic_register);

//     pop_semanticRegister();

//     semantic_register = (SemanticRegister*) malloc(sizeof(SemanticRegister));
//     semantic_register->type = SMTYPE_VARIABLE;
//     semantic_register->value = "ALEJANDRO";
//     push(semantic_register);

//     semantic_register = retrieve(TYPE);

//     delete_type(TYPE);

//     update(SMTYPE_VARIABLE, "ABIEL");
    
// }


