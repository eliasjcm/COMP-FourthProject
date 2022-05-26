
#ifndef _SEMANTIC_QUEUE_H_
#define _SEMANTIC_QUEUE_H_

typedef enum semantic_types
{
    TYPE,
    SMTYPE_ENUM,
    SMTYPE_FUNCTION,
    SMTYPE_VARIABLE
} SemanticType;

struct semantic_register
{
    SemanticType type;
    char *value; // yytext()
    struct semantic_register* next;
};

typedef struct semantic_register SemanticRegister;

// Create a dynamic stack of SemanticRegister
typedef struct SymbolTables_stack
{
    int size;
    SemanticRegister *top;
} SemanticStack;

void semantic_stack_init();

void push_semanticRegister(SemanticRegister* semantic_register);

void pop_semanticRegister();

void end_declaration();

SemanticRegister* get_top_semanticStack();

SemanticRegister *retrieve(SemanticType type);

void delete_type(SemanticType type);

void update(SemanticType type, char *value);

void otras(char *loquesenecesite);

void print_semantic_stack();

SemanticStack semantic_stack;
#endif