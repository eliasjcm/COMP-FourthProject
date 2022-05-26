%{
#include <stdio.h>
#include <string.h>
#include "globals.h"
#include "action_symbols.h"
extern int yylex();
int yyerror();
extern int yylineno; // borrar
extern int column; // borrar
extern FILE* yyin;
extern int yyleng;
extern char* yytext;
void eat_to_newline();
void eat_to_whitespace();
extern char* line;
extern char* filename;
int customError(const char* str);
#define YYERROR_VERBOSE 1
%}

%code {
	static void location_print (FILE *out, YYLTYPE const * const loc);
	#define YYLOCATION_PRINT location_print
}


%token 	<name> IDENTIFIER
%token	INTEGER_CONSTANT FLOATING_CONSTANT STRING_LITERAL FUNC_NAME SIZEOF
%token	PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token	AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token	SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token	XOR_ASSIGN OR_ASSIGN
%token	TYPEDEF_NAME ENUMERATION_CONSTANT

%token	TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
%token	CONST RESTRICT VOLATILE
%token	_BOOL CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token	_COMPLEX _IMAGINARY
%token	STRUCT UNION ENUM ELLIPSIS

%token	CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token	_ALIGNAS _ALIGNOF _ATOMIC _GENERIC _NORETURN _STATIC_ASSERT _THREAD_LOCAL

%nonassoc "then"
%nonassoc ELSE

%start translation_unit
%union {char* name;}

%define parse.lac full
%define parse.error custom
%locations
// %define api.value.type union

%%

primary_expression
	: IDENTIFIER {printf("USING IDENTIFIER\n"); check_declaration($1);}
	| constant
	| string
	| '(' expression ')'
	| '(' error ')'
	| _GENERIC_selection
	;

constant
	: INTEGER_CONSTANT
	| FLOATING_CONSTANT
	| ENUMERATION_CONSTANT	
	;

enumeration_constant		
	: IDENTIFIER
	;

string
	: STRING_LITERAL
	| FUNC_NAME
	;

_GENERIC_selection
	: _GENERIC '(' assignment_expression ',' _GENERIC_assoc_list ')'
	;

_GENERIC_assoc_list
	: _GENERIC_association
	| _GENERIC_assoc_list ',' _GENERIC_association
	;

_GENERIC_association
	: type_name ':' assignment_expression
	| DEFAULT ':' assignment_expression
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	| '(' type_name ')' '{' initializer_list '}'
	| '(' type_name ')' '{' initializer_list ',' '}'
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	| error ','
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	| _ALIGNOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	| error multiplicative_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	| error '<' shift_expression
  	| error '>' shift_expression 
	| error LE_OP shift_expression 
  	| error GE_OP shift_expression 
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	| error EQ_OP relational_expression
  	| error NE_OP relational_expression
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	| error '?' error ':' conditional_expression
  	| logical_or_expression '?' error ':' conditional_expression
  	| error '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression {printf("ABIEL TODAVIA MAS MECO3\n");}
	| error ';'
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ';' // CHECK THIS
	| declaration_specifiers {/* DONE, ENTRA A TYPE_SPECIFIER */} init_declarator_list ';' {end_declaration();} 
	| _STATIC_ASSERT_declaration
	| declaration_specifiers error ';'
	;

declaration_specifiers
	: storage_class_specifier declaration_specifiers
	| storage_class_specifier
	| type_specifier declaration_specifiers 
	| type_specifier 
	| type_qualifier declaration_specifiers
	| type_qualifier
	| function_specifier declaration_specifiers
	| function_specifier
	| alignment_specifier declaration_specifiers
	| alignment_specifier
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	| error ',' init_declarator
	;

init_declarator
	: declarator '=' initializer {printf("ABIEL MECO\n");}
	| declarator
	| error '=' initializer {printf("ABIEL MECO2\n");}
	;

storage_class_specifier
	: TYPEDEF	{typedef_name_flag = 1;}
	| EXTERN
	| STATIC
	| _THREAD_LOCAL
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID {save_type();}
	| CHAR {save_type();}
	| SHORT {save_type();}
	| INT {save_type();}
	| LONG {save_type();}
	| FLOAT {save_type();}
	| DOUBLE {save_type();}
	| SIGNED {save_type();}
	| UNSIGNED {save_type();}
	| _BOOL {save_type();}
	| _COMPLEX {save_type();}
	| _IMAGINARY {save_type();}
	| struct_or_union_specifier {save_type();}
	| enum_specifier {save_type();}
	| TYPEDEF_NAME {save_type();}
	;

struct_or_union_specifier
	: struct_or_union prepare_scope '{' struct_declaration_list '}' finish_scope
	| struct_or_union IDENTIFIER prepare_scope '{' struct_declaration_list '}' finish_scope
	| struct_or_union IDENTIFIER 
	| struct_or_union IDENTIFIER prepare_scope '{' error '}' finish_scope
  	| struct_or_union prepare_scope '{' error '}' finish_scope
	;

struct_or_union
	: STRUCT {typedef_name_flag = 4;}
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list ';'
	| specifier_qualifier_list struct_declarator_list ';'
	| _STATIC_ASSERT_declaration
	| error ';'
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	| error ',' struct_declarator
	;

struct_declarator
	: ':' constant_expression
	| declarator ':' constant_expression
	| declarator
	| error ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER
	| ENUM '{' error '}'
  	| ENUM IDENTIFIER '{' error '}'
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	| error ',' enumerator
	;

enumerator
	: enumeration_constant '=' {printf("ABIEL MECO\n");} constant_expression
	| enumeration_constant
	| error '=' constant_expression  {printf("ABIEL MECO\n");}
	;
	
type_qualifier
	: CONST
	| RESTRICT
	| VOLATILE
	| _ATOMIC
	;

function_specifier
	: INLINE
	| _NORETURN
	;

alignment_specifier
	: _ALIGNAS '(' type_name ')'
	| _ALIGNAS '(' constant_expression ')'
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER {save_id();}
	| '(' declarator ')'
	| direct_declarator '[' ']' 
	| direct_declarator '[' '*' ']' 
	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	| direct_declarator '[' STATIC assignment_expression ']'
	| direct_declarator '[' type_qualifier_list '*' ']'
	| direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'
	| direct_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_declarator '[' type_qualifier_list ']'
	| direct_declarator '[' assignment_expression ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' error ')' 
  	//| error '(' error ')' // conflictos
  	| '(' error ')' 
	;

pointer
	: '*' type_qualifier_list pointer
	| '*' type_qualifier_list
	| '*' pointer
	| '*'
	| '*' error pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;

parameter_type_list
	: parameter_list ',' ELLIPSIS
	| parameter_list
	| error ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	| error ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	| error declarator
	| error abstract_declarator
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list abstract_declarator
	| specifier_qualifier_list
	;

abstract_declarator
	: pointer direct_abstract_declarator
	| pointer
	| direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' '*' ']'
	| '[' STATIC type_qualifier_list assignment_expression ']'
	| '[' STATIC assignment_expression ']'
	| '[' type_qualifier_list STATIC assignment_expression ']'
	| '[' type_qualifier_list assignment_expression ']'
	| '[' type_qualifier_list ']'
	| '[' assignment_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' '*' ']'
	| direct_abstract_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	| direct_abstract_declarator '[' STATIC assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list STATIC assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list ']'
	| direct_abstract_declarator '[' assignment_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	| '[' error ']' // revisar
	| direct_abstract_declarator '(' error ')' // revisar
  	| direct_abstract_declarator '[' error ']' // revisar
	| error ')' 
	;

initializer
	: '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	| '{' error '}'
	| assignment_expression
	;

initializer_list
	: designation initializer
	| initializer
	| initializer_list ',' designation initializer
	| initializer_list ',' initializer
	| error ',' initializer
	;

designation
	: designator_list '='  {printf("ABIEL MECO\n");}
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: '[' constant_expression ']'
	| '.' IDENTIFIER
	;

_STATIC_ASSERT_declaration
	: _STATIC_ASSERT '(' constant_expression ',' STRING_LITERAL ')' ';'
	;

statement
	: labeled_statement
	| prepare_scope compound_statement finish_scope
	| expression_statement
	| selection_statement
	| prepare_scope iteration_statement finish_scope
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement /* NOT USE, GO TO */
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

prepare_scope:
  %empty { open_scope(); }
;

finish_scope:
  %empty { print_symboltables(); close_scope(); }
;


compound_statement
	: '{' '}'
	| '{' block_item_list '}'
	| '{' error '}'
	;


block_item_list
	: block_item //{print_symboltables();}
	| block_item_list block_item //{printf("INSIDE COMPOUND\n");}
	;

block_item
	: declaration 
	| statement 
	;

expression_statement
	: ';'
	| expression ';'
	| error ';' 
	;

selection_statement
	: IF '(' expression ')' statement ELSE statement
	| IF '(' expression ')' statement %prec "then"
	| SWITCH '(' expression ')' statement
	| IF '(' error ')' statement %prec "then"
  	| SWITCH '(' error ')' statement
	| IF '(' error ')' statement ELSE statement
	;

iteration_statement
	: WHILE '(' expression ')' statement {printf("Hola1\n");}
	| DO statement WHILE '(' expression ')' ';' {printf("Hola2\n");}
	| FOR '(' expression_statement expression_statement ')' statement {printf("Hola3\n");}
	| FOR '(' expression_statement expression_statement expression ')' statement {printf("Hola4\n");}
	| FOR '(' declaration expression_statement ')' statement {printf("Hola5\n");}
	| FOR '(' declaration expression_statement expression ')' statement {printf("Hola6\n");}
	| DO error WHILE '(' expression ')' ';'  {printf("Hola7\n");}
  	| FOR '(' error ')' statement  {printf("Hola8\n");}
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	| RETURN error ';'
	;

translation_unit
	: prepare_scope external_declaration finish_scope
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
    : declaration_specifiers declarator declaration_list compound_statement
    | declaration_specifiers declarator compound_statement
    | declaration_specifiers error compound_statement
    | error declaration_list compound_statement
	| error error compound_statement
	| error compound_statement
    ;

declaration_list
	: declaration
	| declaration_list declaration
	;

%%
#include <stdio.h>
const YYLTYPE *loc;

// char* removeWhitespaces(char *str) {
// 	int i = 0;
// 	char* newString = malloc (strlen(str) + 1);
// 	while (str[i] == ' ') {
// 		i++;
// 	}
// 	while (str[i] != '\0') {
// 		strncat(newString, &str[i], 1);
// 		i++;
// 	}
// 	return newString;
// }

void red() {
	printf("\033[1;31m");
}

void yellow() {
	printf("\033[1;33m");
}

void resetColor() {
	printf("\033[0m");
}

int yyerror(const char *str) {
	yellow();
    printf("%s:%d:%d: ", original_filename, yylineno, column);
	red();
	printf("error: ");
	resetColor();
	printf("%s\n", str);
	char *newLine = NULL;

	if (!strstr(line, "\n")) {
		newLine = malloc(strlen(line) + 2);
		strcpy(newLine, line);
		strcat(newLine, "\n");
	} else {
		newLine = malloc(strlen(line) + 1);
		strcpy(newLine, line);
	}
	printf("%s", newLine);
	for(int i = 0; i < column - 1; i++)
		printf(" ");
	red();
    printf("^\n");
	resetColor();
}

int customError(const char *str) {
	fprintf(stderr, "error: %s, line %d, column %d\n", str, yylineno, column);
}

void eat_to_newline() {
    int c;
    while ((c = getchar()) != EOF && c != '\n');
}

void eat_to_whitespace() {
	int c;
	while ((c = getchar()) != EOF && c != ' ');
}

static void location_print (FILE *out, YYLTYPE const * const loc) {
  fprintf (out, "\033[1;33m%s:%d:%d\033[0m", original_filename, loc->first_line, loc->first_column);

//   int end_col = 0 != loc->last_column ? loc->last_column - 1 : 0;
//   if (loc->first_line < loc->last_line) 
//     fprintf (out, "\033[1;33m-%d:%d\033[0m", loc->last_line, end_col);
//   else if (loc->first_column < end_col)
//     fprintf (out, "\033[1;33m-%d\033[0m", end_col);
}

static const char * error_format_string (int argc, const yypcontext_t *yyctx) {
	switch (argc) {
		default:
		case 0: return ("%@: \033[1;31msyntax error\033[0m: unexpected %u");
		case 1: return ("%@: \033[1;31msyntax error\033[0m: unexpected %u");
		case 2: return ("%@: \033[1;31msyntax error\033[0m: expected %0e before %u");
		case 3: return ("%@: \033[1;31msyntax error\033[0m: expected %0e or %1e before %u");
		case 4: return ("%@: \033[1;31msyntax error\033[0m: expected %0e or %1e or %2e etc. before %u");
	}
}

int yyreport_syntax_error (const yypcontext_t *yyctx) {

	enum {ARGS_MAX = 3};
	yysymbol_kind_t arg[ARGS_MAX];

	int argsize = yypcontext_expected_tokens (yyctx, arg, ARGS_MAX);

	if (argsize < 0) {
		return argsize;
	}

	const int too_many_tokens = argsize == 0 && arg[0] != YYSYMBOL_YYEMPTY;

	if (too_many_tokens) {
		argsize = ARGS_MAX;
	}

	const char *format = error_format_string(1 + argsize + too_many_tokens, yyctx);
	const YYLTYPE *loc = yypcontext_location (yyctx);

	while (*format)
		if (format[0] == '%' && format[1] == '@') {
			YYLOCATION_PRINT (stderr, loc);
			format += 2;
		} else if (format[0] == '%' && format[1] == 'u') {
			fputs (yysymbol_name (yypcontext_token (yyctx)), stderr);
			format += 2;
		} else if (format[0] == '%' && format[2] == 'e' && (format[1] - '0') < argsize) {
			int i = format[1] - '0';
        	fputs (yysymbol_name (arg[i]), stderr);
        	format += 3;
		} else {
			fputc (*format, stderr);
			++format;
		}
	fputc ('\n', stderr);

	if (line != NULL) {
		line[strcspn(line, "\n")] = 0;
	}

    printf ("\033[1;33m%5d\033[0m | %s\n", loc->first_line, line);

	if (loc->first_column != 1 || yyleng == 1) {
		printf ("%5s | \033[1;31m%*s\033[0m", "", loc->first_column + 1, "^"); // cambio	
	} else {
		printf ("%5s | \033[1;31m%*s\033[0m", "", loc->first_column, "^"); // cambio
	}
    for (int i = loc->last_column - loc->first_column - 1; 0 < i; --i)
		printf("\033[1;31m~");
	resetColor();
    printf("%c", '\n');

	return 0;
}