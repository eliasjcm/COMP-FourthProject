#ifndef _ACTION_SYMBOLS_H_
#define _ACTION_SYMBOLS_H_

#include "semantic_stack.h"
#include "symboltables.h"

void open_scope();

void close_scope();

void save_type();

void save_id();

void check_declaration(char* name);

void save_struct();

void save_union();

void save_identifier_struct_union(char* value);

void finish_struct_union();

int end_declaration();

#endif