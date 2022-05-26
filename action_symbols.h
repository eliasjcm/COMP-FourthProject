#ifndef _ACTION_SYMBOLS_H_
#define _ACTION_SYMBOLS_H_

#include "semantic_stack.h"
#include "symboltables.h"

void open_scope();

void close_scope();

void save_type();

void save_id();
#endif