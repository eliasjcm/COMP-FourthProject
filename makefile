# part of the makefile
parserC:  scanner.l parserBison.y preprocessor.l parserMain.c preprocessor.c symboltables.c semantic_stack.c action_symbols.c
	flex scanner.l
	bison -d -t parserBison.y
	flex preprocessor.l
	gcc -g parserBison.tab.c lex.yy.c preprocessor.c preprocessor.yy.c parserMain.c symboltables.c action_symbols.c semantic_stack.c -o parserC
	rm parserBison.tab.c parserBison.tab.h lex.yy.c preprocessor.yy.c