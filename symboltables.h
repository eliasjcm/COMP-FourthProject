#ifndef _SYMBOLTABLES_H_
#define _SYMBOLTABLES_H_

typedef enum symbol_type
{
    TYPE_IDENTIFIER,
    TYPE_ENUM,
    TYPE_STRUCT
} SymbolType;

typedef struct symbol
{
    char* type;
    SymbolType typeST;
    char *lexeme;
} Symbol;

struct symbolstable
{
    int nullsym;
    int size;
    Symbol *symbols;
    struct symbolstable *next;
};

typedef struct symbolstable SymbolTable;


// Create a dynamic stack of SemanticRegister
typedef struct symbolTables_stack
{
    int size;
    SymbolTable *top;
} SymbolTablesStack;

void insert_symbol(Symbol symbol);

SymbolTable *Create_ST();

int exists(char* name);

void symboltables_stack_init();

void print_symboltables();

void push_symbolTable(SymbolTable *symbol_table);

void pop_symbolTable();

int look_up_ST(char *name);


SymbolTablesStack symboltables_stack;

#endif