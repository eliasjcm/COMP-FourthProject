
#ifndef _SEMANTIC_QUEUE_H_
#define _SEMANTIC_QUEUE_H_

typedef enum semantic_types
{
    TYPE,
    SMTYPE_ENUM,
    SMTYPE_FUNCTION,
    SMTYPE_VARIABLE,
    SMTYPE_UNION,
    SMTYPE_STRUCT,
    SMTYPE_STRUCT_ID,
    SMTYPE_UNION_ID
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


SemanticRegister* get_top_semanticStack();

SemanticRegister *retrieve(SemanticType type);

void delete_type(SemanticType type);

void update(SemanticType type, char *value);

void otras(char *loquesenecesite);

void print_semantic_stack();

SemanticStack semantic_stack;
#endif