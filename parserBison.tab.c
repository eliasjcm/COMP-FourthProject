/* A Bison parser, made by GNU Bison 3.8.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30801

/* Bison version string.  */
#define YYBISON_VERSION "3.8.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parserBison.y"

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

#line 91 "parserBison.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parserBison.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_INTEGER_CONSTANT = 4,           /* INTEGER_CONSTANT  */
  YYSYMBOL_FLOATING_CONSTANT = 5,          /* FLOATING_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 6,             /* STRING_LITERAL  */
  YYSYMBOL_FUNC_NAME = 7,                  /* FUNC_NAME  */
  YYSYMBOL_SIZEOF = 8,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 9,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 10,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 11,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 12,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 13,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 14,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 15,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 16,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 17,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 18,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 19,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 20,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 21,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 22,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 23,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 24,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 25,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 26,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 27,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 28,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 29,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPEDEF_NAME = 30,              /* TYPEDEF_NAME  */
  YYSYMBOL_ENUMERATION_CONSTANT = 31,      /* ENUMERATION_CONSTANT  */
  YYSYMBOL_TYPEDEF = 32,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 33,                    /* EXTERN  */
  YYSYMBOL_STATIC = 34,                    /* STATIC  */
  YYSYMBOL_AUTO = 35,                      /* AUTO  */
  YYSYMBOL_REGISTER = 36,                  /* REGISTER  */
  YYSYMBOL_INLINE = 37,                    /* INLINE  */
  YYSYMBOL_CONST = 38,                     /* CONST  */
  YYSYMBOL_RESTRICT = 39,                  /* RESTRICT  */
  YYSYMBOL_VOLATILE = 40,                  /* VOLATILE  */
  YYSYMBOL__BOOL = 41,                     /* _BOOL  */
  YYSYMBOL_CHAR = 42,                      /* CHAR  */
  YYSYMBOL_SHORT = 43,                     /* SHORT  */
  YYSYMBOL_INT = 44,                       /* INT  */
  YYSYMBOL_LONG = 45,                      /* LONG  */
  YYSYMBOL_SIGNED = 46,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 47,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 48,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 49,                    /* DOUBLE  */
  YYSYMBOL_VOID = 50,                      /* VOID  */
  YYSYMBOL__COMPLEX = 51,                  /* _COMPLEX  */
  YYSYMBOL__IMAGINARY = 52,                /* _IMAGINARY  */
  YYSYMBOL_STRUCT = 53,                    /* STRUCT  */
  YYSYMBOL_UNION = 54,                     /* UNION  */
  YYSYMBOL_ENUM = 55,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 56,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 57,                      /* CASE  */
  YYSYMBOL_DEFAULT = 58,                   /* DEFAULT  */
  YYSYMBOL_IF = 59,                        /* IF  */
  YYSYMBOL_ELSE = 60,                      /* ELSE  */
  YYSYMBOL_SWITCH = 61,                    /* SWITCH  */
  YYSYMBOL_WHILE = 62,                     /* WHILE  */
  YYSYMBOL_DO = 63,                        /* DO  */
  YYSYMBOL_FOR = 64,                       /* FOR  */
  YYSYMBOL_GOTO = 65,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 66,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 67,                     /* BREAK  */
  YYSYMBOL_RETURN = 68,                    /* RETURN  */
  YYSYMBOL__ALIGNAS = 69,                  /* _ALIGNAS  */
  YYSYMBOL__ALIGNOF = 70,                  /* _ALIGNOF  */
  YYSYMBOL__ATOMIC = 71,                   /* _ATOMIC  */
  YYSYMBOL__GENERIC = 72,                  /* _GENERIC  */
  YYSYMBOL__NORETURN = 73,                 /* _NORETURN  */
  YYSYMBOL__STATIC_ASSERT = 74,            /* _STATIC_ASSERT  */
  YYSYMBOL__THREAD_LOCAL = 75,             /* _THREAD_LOCAL  */
  YYSYMBOL_76_then_ = 76,                  /* "then"  */
  YYSYMBOL_77_ = 77,                       /* '('  */
  YYSYMBOL_78_ = 78,                       /* ')'  */
  YYSYMBOL_79_ = 79,                       /* ','  */
  YYSYMBOL_80_ = 80,                       /* ':'  */
  YYSYMBOL_81_ = 81,                       /* '['  */
  YYSYMBOL_82_ = 82,                       /* ']'  */
  YYSYMBOL_83_ = 83,                       /* '.'  */
  YYSYMBOL_84_ = 84,                       /* '{'  */
  YYSYMBOL_85_ = 85,                       /* '}'  */
  YYSYMBOL_86_ = 86,                       /* '&'  */
  YYSYMBOL_87_ = 87,                       /* '*'  */
  YYSYMBOL_88_ = 88,                       /* '+'  */
  YYSYMBOL_89_ = 89,                       /* '-'  */
  YYSYMBOL_90_ = 90,                       /* '~'  */
  YYSYMBOL_91_ = 91,                       /* '!'  */
  YYSYMBOL_92_ = 92,                       /* '/'  */
  YYSYMBOL_93_ = 93,                       /* '%'  */
  YYSYMBOL_94_ = 94,                       /* '<'  */
  YYSYMBOL_95_ = 95,                       /* '>'  */
  YYSYMBOL_96_ = 96,                       /* '^'  */
  YYSYMBOL_97_ = 97,                       /* '|'  */
  YYSYMBOL_98_ = 98,                       /* '?'  */
  YYSYMBOL_99_ = 99,                       /* ';'  */
  YYSYMBOL_100_ = 100,                     /* '='  */
  YYSYMBOL_YYACCEPT = 101,                 /* $accept  */
  YYSYMBOL_primary_expression = 102,       /* primary_expression  */
  YYSYMBOL_constant = 103,                 /* constant  */
  YYSYMBOL_enumeration_constant = 104,     /* enumeration_constant  */
  YYSYMBOL_string = 105,                   /* string  */
  YYSYMBOL__GENERIC_selection = 106,       /* _GENERIC_selection  */
  YYSYMBOL__GENERIC_assoc_list = 107,      /* _GENERIC_assoc_list  */
  YYSYMBOL__GENERIC_association = 108,     /* _GENERIC_association  */
  YYSYMBOL_postfix_expression = 109,       /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 110, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 111,         /* unary_expression  */
  YYSYMBOL_unary_operator = 112,           /* unary_operator  */
  YYSYMBOL_cast_expression = 113,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 114, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 115,      /* additive_expression  */
  YYSYMBOL_shift_expression = 116,         /* shift_expression  */
  YYSYMBOL_relational_expression = 117,    /* relational_expression  */
  YYSYMBOL_equality_expression = 118,      /* equality_expression  */
  YYSYMBOL_and_expression = 119,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 120,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 121,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 122,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 123,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 124,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 125,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 126,      /* assignment_operator  */
  YYSYMBOL_expression = 127,               /* expression  */
  YYSYMBOL_constant_expression = 128,      /* constant_expression  */
  YYSYMBOL_declaration = 129,              /* declaration  */
  YYSYMBOL_130_1 = 130,                    /* $@1  */
  YYSYMBOL_declaration_specifiers = 131,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 132,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 133,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 134,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 135,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 136, /* struct_or_union_specifier  */
  YYSYMBOL_137_2 = 137,                    /* $@2  */
  YYSYMBOL_138_3 = 138,                    /* $@3  */
  YYSYMBOL_struct_or_union = 139,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 140,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 141,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 142, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 143,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 144,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 145,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 146,          /* enumerator_list  */
  YYSYMBOL_enumerator = 147,               /* enumerator  */
  YYSYMBOL_148_4 = 148,                    /* $@4  */
  YYSYMBOL_type_qualifier = 149,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 150,       /* function_specifier  */
  YYSYMBOL_alignment_specifier = 151,      /* alignment_specifier  */
  YYSYMBOL_declarator = 152,               /* declarator  */
  YYSYMBOL_direct_declarator = 153,        /* direct_declarator  */
  YYSYMBOL_pointer = 154,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 155,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 156,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 157,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 158,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 159,          /* identifier_list  */
  YYSYMBOL_type_name = 160,                /* type_name  */
  YYSYMBOL_abstract_declarator = 161,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 162, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 163,              /* initializer  */
  YYSYMBOL_initializer_list = 164,         /* initializer_list  */
  YYSYMBOL_designation = 165,              /* designation  */
  YYSYMBOL_designator_list = 166,          /* designator_list  */
  YYSYMBOL_designator = 167,               /* designator  */
  YYSYMBOL__STATIC_ASSERT_declaration = 168, /* _STATIC_ASSERT_declaration  */
  YYSYMBOL_statement = 169,                /* statement  */
  YYSYMBOL_labeled_statement = 170,        /* labeled_statement  */
  YYSYMBOL_prepare_scope = 171,            /* prepare_scope  */
  YYSYMBOL_finish_scope = 172,             /* finish_scope  */
  YYSYMBOL_compound_statement = 173,       /* compound_statement  */
  YYSYMBOL_block_item_list = 174,          /* block_item_list  */
  YYSYMBOL_block_item = 175,               /* block_item  */
  YYSYMBOL_expression_statement = 176,     /* expression_statement  */
  YYSYMBOL_selection_statement = 177,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 178,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 179,           /* jump_statement  */
  YYSYMBOL_translation_unit = 180,         /* translation_unit  */
  YYSYMBOL_external_declaration = 181,     /* external_declaration  */
  YYSYMBOL_function_definition = 182,      /* function_definition  */
  YYSYMBOL_declaration_list = 183          /* declaration_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 21 "parserBison.y"

	static void location_print (FILE *out, YYLTYPE const * const loc);
	#define YYLOCATION_PRINT location_print

#line 314 "parserBison.tab.c"

#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
# define YYCOPY_NEEDED 1
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4806

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  329
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  616

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   331


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    91,     2,     2,     2,    93,    86,     2,
      77,    78,    87,    88,    79,    89,    83,    92,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    99,
      94,   100,    95,    98,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    81,     2,    82,    96,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    97,    85,    90,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    59,    59,    60,    61,    62,    63,    64,    68,    69,
      70,    74,    78,    79,    83,    87,    88,    92,    93,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   110,
     111,   112,   116,   117,   118,   119,   120,   121,   122,   126,
     127,   128,   129,   130,   131,   135,   136,   140,   141,   142,
     143,   147,   148,   149,   150,   154,   155,   156,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   172,   173,   174,
     175,   176,   180,   181,   185,   186,   190,   191,   195,   196,
     200,   201,   205,   206,   207,   208,   209,   213,   214,   215,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   233,   234,   238,   242,   243,   243,   244,   245,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   262,
     263,   264,   268,   269,   270,   274,   275,   276,   277,   278,
     279,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   301,   302,   302,   302,
     303,   304,   305,   309,   310,   314,   315,   319,   320,   321,
     322,   326,   327,   328,   329,   333,   334,   335,   339,   340,
     341,   342,   346,   347,   348,   349,   350,   351,   352,   356,
     357,   358,   362,   362,   363,   364,   368,   369,   370,   371,
     375,   376,   380,   381,   385,   386,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   406,   410,   411,   412,   413,   414,   418,   419,   423,
     424,   425,   429,   430,   431,   435,   436,   437,   438,   439,
     443,   444,   448,   449,   453,   454,   455,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   487,   488,   489,   490,   494,   495,   496,   497,
     498,   502,   506,   507,   511,   512,   516,   520,   521,   522,
     523,   524,   525,   529,   530,   531,   535,   539,   544,   545,
     546,   551,   552,   556,   557,   561,   562,   563,   567,   568,
     569,   570,   571,   572,   576,   577,   578,   579,   580,   581,
     582,   583,   587,   588,   589,   590,   591,   592,   596,   597,
     601,   602,   606,   607,   608,   609,   610,   611,   615,   616
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  static const char *const yy_sname[] =
  {
  "end of file", "error", "invalid token", "IDENTIFIER",
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "STRING_LITERAL", "FUNC_NAME",
  "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF_NAME",
  "ENUMERATION_CONSTANT", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE", "_BOOL", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "VOID",
  "_COMPLEX", "_IMAGINARY", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "_ALIGNAS", "_ALIGNOF", "_ATOMIC",
  "_GENERIC", "_NORETURN", "_STATIC_ASSERT", "_THREAD_LOCAL", "then",
  "'('", "')'", "','", "':'", "'['", "']'", "'.'", "'{'", "'}'", "'&'",
  "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'",
  "'|'", "'?'", "';'", "'='", "$accept", "primary_expression", "constant",
  "enumeration_constant", "string", "_GENERIC_selection",
  "_GENERIC_assoc_list", "_GENERIC_association", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration", "$@1",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "$@2", "$@3", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "$@4", "type_qualifier",
  "function_specifier", "alignment_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator",
  "_STATIC_ASSERT_declaration", "statement", "labeled_statement",
  "prepare_scope", "finish_scope", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-517)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-287)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -517,  4352,  4297,  4131,  -517,  -517,  -517,  -517,  -517,  -517,
    -517,  -517,  -517,  -517,  -517,  -517,  -517,  -517,  -517,  -517,
    -517,  -517,  -517,  -517,  -517,  -517,  -517,  -517,    18,   -42,
    -517,  -517,    -4,  -517,  -517,    35,  4663,  4663,  -517,   116,
    -517,  4663,  4663,  4663,  -517,  -517,  -517,  -517,  -517,  -517,
    -517,    84,    43,  -517,  4617,    91,   149,  2440,  3366,    80,
    -517,    87,   479,  -517,   189,  4617,   -33,    15,  -517,  -517,
     125,   138,  -517,  -517,  -517,  -517,  -517,    80,   815,  -517,
    -517,   218,   -20,  -517,   139,   129,  -517,  2220,  -517,  -517,
    -517,  -517,  -517,  3791,  3813,  3813,  -517,   174,   179,  2531,
    -517,  -517,  -517,  -517,  -517,  -517,  -517,  -517,  -517,  -517,
     517,  -517,  3902,  -517,   188,   -43,   185,    68,   319,   191,
     178,   212,   294,     6,  -517,   251,  4735,   108,  4735,   255,
     240,  -517,  -517,   260,   278,   286,  -517,  -517,   303,    -2,
      -3,  -517,   275,  -517,  4617,  4186,  2622,   -33,  -517,   297,
    4519,  1293,   312,  3366,   315,   321,   337,   416,   338,   341,
    1144,  -517,  -517,   630,  -517,  -517,     7,  -517,  -517,  -517,
     -31,  -517,   912,  -517,  -517,  -517,  -517,   117,   156,   243,
    -517,  3366,  -517,    38,  -517,  3388,  3388,  3410,  3410,  3388,
    3388,  3501,   188,  2531,  -517,  2531,  -517,  -517,  4735,  3523,
    1331,   127,   366,   443,  -517,  -517,  3140,  3523,   444,  -517,
    3902,  3902,  3902,  3902,  3902,  3388,  3388,  3388,  3388,  3388,
    3388,  3410,  3410,  3545,  3545,  3545,  3545,  3545,  3636,  -517,
    -517,   370,  4020,  2644,   236,  -517,    33,  -517,  -517,   446,
    -517,  -517,  -517,  -517,  -517,   223,  3231,   223,  -517,  3231,
    -517,   153,  -517,  -517,   364,   372,   378,  -517,   266,  2063,
    2961,  -517,   379,   383,  2735,   376,   473,   -45,  3897,  -517,
      48,  -517,  -517,    21,   705,   397,   705,  3658,  3680,   380,
    -517,  -517,  2093,  -517,    79,  -517,  -517,  -517,  -517,  -517,
    -517,  -517,  -517,  -517,  -517,  -517,  -517,  3523,  3523,  -517,
     409,  1106,   411,  -517,  2190,  -517,  -517,  -517,    59,  -517,
     390,  -517,  -517,  3366,  -517,  -517,  3902,   185,   185,  2345,
      68,    68,   185,   185,  1428,   271,   413,   414,   418,   419,
    -517,  -517,  -517,  3769,  -517,  1458,  -517,   274,  -517,   -32,
    -517,  -517,  -517,  -517,   188,   188,   -43,   -43,   185,   185,
     185,   185,    68,    68,  2316,   319,   191,   178,   212,   294,
    1555,   279,  -517,   377,  -517,   421,   422,  1585,  2961,  -517,
     415,   420,  2757,    33,  4241,  2848,   426,   406,  -517,  3096,
    -517,  -517,  -517,  -517,  3964,  -517,  4407,  -517,   244,  -517,
    -517,  -517,  -517,  4463,  -517,   504,   427,  2961,  -517,  -517,
    3523,  -517,   433,   434,  4574,   435,  -517,  -517,   425,  -517,
    -517,   281,  3366,  -517,   114,  -517,   441,  -517,  -517,   705,
    -517,  1682,   284,  1712,   290,  -517,    21,  -517,  -517,  -517,
    3523,  1809,   467,  1009,  -517,  -517,  -517,  -517,  3366,  3366,
     447,   447,  -517,  4701,  3118,  -517,  -517,  -517,  3523,  -517,
    3366,  3366,  -517,  -517,  -517,   450,  2961,  -517,  -517,  3523,
    -517,   452,   484,  -517,   457,  1839,  2961,  -517,   454,   458,
    2870,   448,  1196,  3366,   539,  -517,   222,  3231,   171,  -517,
     540,   123,  -517,  -517,  -517,  -517,  -517,  -517,   464,   466,
    -517,  -517,  4075,  -517,  -517,  -517,   100,  3366,  -517,   100,
    -517,  3366,  -517,   705,   705,   705,   705,   292,   472,   475,
    1936,  1241,  1241,  -517,  -517,   474,   305,  -517,   487,  1966,
     241,  -517,  -517,  -517,  -517,   471,   482,  -517,  -517,  -517,
    -517,   488,  2961,  -517,  -517,  3523,  -517,   492,  -517,  3231,
    -517,   493,  -517,  2983,  -517,  -517,  -517,  -517,  -517,  -517,
    -517,  -517,  -517,   496,  -517,  -517,  -517,  -517,   495,   518,
    -517,  -517,   705,  3523,  3523,   705,  3253,  3275,  3523,  -517,
    4701,  3523,  3005,  -517,  -517,  -517,  -517,   497,   498,  -517,
    -517,  -517,  -517,  -517,  3231,  -517,   705,   705,  -517,   322,
     332,  -517,   705,   339,   705,   344,  -517,  -517,  -517,  -517,
    -517,  -517,  -517,  -517,  -517,  -517,   486,   489,  -517,   705,
    -517,   705,  -517,  -517,  -517,  -517
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     286,     0,     0,     0,   145,   125,   126,   127,   129,   130,
     190,   186,   187,   188,   140,   132,   133,   134,   135,   138,
     139,   136,   137,   131,   141,   142,   153,   154,     0,     0,
     189,   191,     0,   128,   321,     0,   110,   112,   143,   286,
     144,   114,   116,   118,   107,   287,   320,     1,   319,   286,
     328,     0,     0,   327,   286,   176,     0,     0,     0,   286,
     196,     0,     0,   104,     0,   286,   195,     0,   109,   111,
     150,     0,   113,   115,   117,   318,   326,     0,     0,   329,
     325,     0,     0,    11,   184,     0,   179,     0,     2,     8,
       9,    12,    13,     0,     0,     0,    10,     0,     0,     0,
      39,    40,    41,    42,    43,    44,    19,     3,     4,     7,
      32,    45,     0,    47,    51,    55,    58,    67,    72,    74,
      76,    78,    80,    82,   103,     0,   162,     0,   164,     0,
       0,   108,   324,     0,     0,     0,   217,   214,   213,     0,
       0,   119,   123,   323,   286,     0,     0,   194,   286,     0,
       0,     0,     2,     0,     0,     0,     0,     0,     0,     0,
       0,   287,   295,    45,    87,   101,     0,   293,   294,   277,
       0,   278,     0,   291,   279,   280,   282,     0,     0,     0,
     177,     0,   182,     0,   172,     0,     0,     0,     0,     0,
       0,     0,    54,     0,    36,     0,    33,    34,     0,     0,
       0,     0,     0,     0,    25,    26,     0,     0,     0,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   193,
     161,     0,     0,     0,     0,   232,   236,   163,   192,     0,
     211,   197,   216,   218,   212,     0,     0,     0,   106,     0,
     322,     0,   230,   208,     0,     0,   220,   222,     0,     0,
       0,   198,    40,     0,     0,     0,     0,     0,     0,   155,
       0,   159,   287,   297,     0,     0,     0,     0,     0,     0,
     313,   314,     0,   315,     0,   288,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    90,     0,     0,   296,
       0,     0,     0,   287,     0,   287,   292,   178,     0,   174,
       0,   181,   185,     0,   173,   180,     0,    65,    66,     0,
      70,    71,    63,    64,     0,     0,     0,     0,     0,     0,
       6,    89,     5,     0,    24,     0,    21,     0,    29,     0,
      23,    48,    49,    50,    52,    53,    56,    57,    61,    62,
      59,    60,    68,    69,     0,    73,    75,    77,    79,    81,
       0,     0,   261,     0,   254,     0,     0,     0,     0,   238,
      40,     0,     0,   234,     0,     0,     0,     0,   121,     0,
     265,   124,   120,   122,     0,   210,     0,   228,     0,   229,
     225,   226,   207,     0,   209,     0,     0,     0,   199,   206,
       0,   205,    40,     0,     0,     0,   287,   160,     0,   287,
     156,     0,     0,   157,     0,   165,   170,   290,   283,     0,
     285,     0,     0,     0,     0,   312,   317,   316,    88,   102,
       0,     0,     0,     0,   281,   289,   175,   183,     0,     0,
      37,     0,    38,     0,     0,    46,    31,    22,     0,    20,
       0,     0,   255,   237,   258,     0,     0,   239,   245,     0,
     244,     0,     0,   256,     0,     0,     0,   246,    40,     0,
       0,     0,     0,     0,     0,   267,     0,     0,     0,   272,
       0,     0,   221,   224,   219,   223,   231,   201,     0,     0,
     202,   204,     0,   287,   152,   146,     0,     0,   168,     0,
     158,     0,   284,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,    86,     0,     0,    15,     0,     0,
       0,    30,    85,    83,   241,     0,     0,   243,   259,   257,
     260,     0,     0,   247,   253,     0,   252,     0,   276,     0,
     264,     0,   275,     0,   262,   266,   271,   273,   211,   200,
     203,   148,   151,     0,   167,   171,   166,   169,   301,   299,
     302,   300,     0,     0,     0,     0,     0,     0,     0,    14,
       0,     0,     0,    27,   240,   242,   249,     0,     0,   250,
     270,   274,   263,   269,     0,   287,     0,     0,   304,     0,
       0,   311,     0,     0,     0,     0,    18,    16,    17,    28,
     248,   251,   268,   149,   303,   298,     0,     0,   308,     0,
     306,     0,   310,   305,   309,   307
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -517,  -517,  -517,  -517,  -517,  -517,  -517,    13,  -517,  -517,
      72,  -517,   -95,   325,   213,   568,    28,   363,   369,   362,
     371,   368,  -517,   -35,   133,  -517,   -96,   -48,     1,  -517,
     227,  -517,    83,  -517,   -56,  -517,  -517,  -517,  -517,   186,
    -259,   -98,  -517,  -348,  -517,   515,  -159,  -517,   -57,  -517,
    -517,   -27,   -61,   -60,  -120,  -138,  -517,  -302,  -517,   -38,
    -111,  -219,  -235,   158,  -516,  -517,   126,  -137,   132,  -517,
     424,  -104,     9,  -517,   436,  -404,  -517,  -517,  -517,  -517,
     603,  -517,   541
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   106,   107,    84,   108,   109,   516,   517,   110,   337,
     163,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   164,   165,   297,   166,   125,    34,    64,
      51,   140,   141,    36,    37,    38,   148,   585,    39,   268,
     269,   127,   414,   415,    40,    85,    86,   313,    41,    42,
      43,   387,    66,    67,   138,   365,   256,   257,   258,   518,
     389,   236,   475,   476,   477,   478,   479,    44,   168,   169,
     170,    75,   171,   172,   173,   174,   175,   303,   176,     2,
      45,    46,    54
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     128,   126,   137,   201,    50,   136,   147,   255,    65,   410,
     130,   381,    53,   271,   383,   373,   235,   209,    60,   129,
     311,    55,   124,   124,   315,   227,   264,   584,   230,   512,
     237,   300,   301,   302,   134,    57,    59,   142,    60,   310,
     406,    83,   128,   126,   145,   213,   214,   298,   146,   411,
     449,    60,   270,    78,   407,    79,   584,   285,    76,   179,
     310,   202,    83,    80,   284,   180,    50,   234,   132,   128,
     126,   128,   126,    58,   143,   242,   247,   245,   244,   167,
     181,   243,   217,   218,   483,    77,   298,  -105,   133,   136,
      60,   485,    61,   128,   126,   325,   248,   201,   246,   201,
     -89,   553,    56,    60,   228,   275,   299,   566,   567,   231,
     374,   339,    61,   372,   375,   341,   342,   343,   124,    70,
     -89,   366,    62,   314,   231,    61,    60,    78,   412,   111,
     111,   271,   361,   312,    63,    62,   128,   126,   128,   126,
     397,   128,   126,   391,   436,    79,   124,   413,   554,   315,
      82,   556,    83,   250,   231,   326,    60,   327,   298,   111,
     328,  -105,   219,   220,    61,   194,   196,   197,   417,   373,
     270,  -105,   234,   167,    62,    81,   136,    61,   427,   131,
     412,   422,   424,    63,   111,   232,  -233,    62,  -233,   233,
     139,   388,    60,   499,   388,    62,   179,   215,   216,   434,
     384,   435,   307,   136,   233,   332,   298,   243,   183,  -147,
      62,   128,   126,   500,   184,   320,   321,   181,   142,   177,
     142,    83,   150,   111,   377,   111,    60,   390,    35,    35,
     384,   385,   386,   410,   233,   308,   464,   231,   445,   182,
      62,   309,   545,   416,   310,   231,    83,    60,   456,   352,
     353,   198,   473,   111,   474,   470,   199,   111,   111,   111,
     111,   111,   111,    68,    69,   437,    61,   271,    72,    73,
      74,   546,   111,   366,   224,   210,    62,   223,   124,   263,
     211,   212,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
      61,   543,   494,   388,   580,   495,   270,   544,   583,   225,
      62,   136,   226,   232,  -235,   243,  -235,   233,   136,   239,
     572,   384,  -235,  -235,   388,   233,   573,   147,   378,   229,
     382,   111,   329,   238,   507,   221,   222,   583,   240,   338,
     243,    11,    12,    13,   394,   395,   532,   128,   126,   602,
     298,   439,   447,   448,   111,   271,   241,   134,   298,   451,
     496,   497,   504,   298,   498,   231,   371,    60,   506,   298,
     562,   298,   254,    62,    30,   249,   111,   124,   231,   380,
      60,   266,   380,   569,   570,   111,   128,   126,   111,   552,
      62,   111,   274,   396,   270,   276,   111,   403,   277,   243,
     606,   298,   388,   513,   514,   111,   418,   111,   420,   136,
     607,   298,   192,   243,   278,   522,   523,   609,   298,   279,
     388,   388,   611,   298,     1,   541,   111,    52,   346,   347,
     428,   429,   111,   432,   511,   128,   126,   280,   124,   111,
     281,   384,  -227,  -227,   333,   233,   334,   340,   362,   555,
     392,    62,   376,   557,   384,   362,   386,   393,   233,   254,
     404,   398,   124,    71,    62,   399,   124,   589,   590,   416,
     593,   595,   416,    52,   405,   243,   192,   419,    52,   425,
     135,   603,  -215,    52,   111,   231,   430,    60,   433,    52,
     181,   440,   441,   111,   149,   111,   442,   457,   443,   452,
     453,   455,   458,   111,   471,   461,   246,   486,   469,   487,
     111,   111,   380,   128,   126,   490,   491,    11,    12,    13,
     493,   501,   111,   111,   407,   192,   203,   204,   205,   509,
     488,   444,   524,   489,   527,   529,   533,   111,   344,   345,
     534,   231,   542,    60,   111,   111,   549,   538,   550,   563,
      30,   502,   564,   574,   568,   586,  -215,  -215,  -215,  -215,
    -215,   384,   528,   386,   575,   233,    62,   571,    52,   111,
     576,    62,   265,   111,   579,   581,   497,   380,   587,   600,
     601,   521,   111,   597,   192,   612,   355,   357,   613,   525,
     492,   111,   526,   356,   206,   359,   178,   358,   207,   531,
     208,   254,   520,   537,   547,    48,   144,   192,   306,     0,
     380,   254,     0,   254,     0,     0,     0,   384,   548,   386,
     254,   233,     0,     0,     0,     0,     0,    62,     0,   192,
       0,     0,     0,     0,     0,   558,   559,   560,   561,     0,
       0,   192,     0,     0,   192,     0,     0,     0,     0,   192,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     192,     0,     0,     0,     0,   577,     0,     0,   578,     0,
       0,     0,   380,     0,     0,     0,   380,     0,     0,   192,
       0,     0,     0,     0,     0,   192,     0,     0,     0,     0,
       0,     0,   192,     0,   588,     0,     0,   591,     0,     0,
       0,   596,     0,     0,   598,   380,   304,     0,   152,    89,
      90,    91,    92,    93,     0,    94,    95,   380,   604,   605,
       0,     0,     0,     0,   608,     0,   610,     0,     0,     0,
     296,     0,     0,     0,     0,     0,    96,     0,     0,     0,
       0,   614,     0,   615,     0,     0,   192,     0,   192,     0,
       0,     0,     0,   317,   318,     0,   192,   322,   323,     0,
       0,     0,   153,   154,   155,     0,   156,  -286,  -286,  -286,
     157,   158,   159,   160,     0,    97,     0,    98,     0,     0,
       0,     0,    99,     0,     0,   348,   349,   350,   351,  -286,
     192,   100,   101,   102,   103,   104,   105,   192,     0,     0,
       0,     0,     0,     0,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   151,     0,   152,    89,
      90,    91,    92,    93,     0,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,   192,     0,     0,     0,     0,
       0,     0,     0,     0,   192,     4,    96,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,   153,   154,   155,     0,   156,  -286,  -286,  -286,
     157,   158,   159,   160,    29,    97,    30,    98,    31,    32,
      33,     0,    99,     0,     0,     0,     0,     0,     0,  -286,
     161,   100,   101,   102,   103,   104,   105,     0,     0,     0,
       0,     0,     0,   304,   162,   152,    89,    90,    91,    92,
      93,     0,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,    96,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,   153,
     154,   155,     0,   156,  -286,  -286,  -286,   157,   158,   159,
     160,    29,    97,    30,    98,    31,    32,    33,     0,    99,
       0,     0,     0,     0,     0,     0,  -286,   305,   100,   101,
     102,   103,   104,   105,     0,     0,     0,     0,     0,     0,
     510,   162,    88,    89,    90,    91,    92,    93,     0,    94,
      95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
      96,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,    97,
      30,    98,    31,    32,    33,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,     0,     0,     0,     0,     0,     0,   431,   162,   152,
      89,    90,    91,    92,    93,     0,    94,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,     0,     0,
       0,     0,     0,     0,     0,   282,     0,    88,    89,    90,
      91,    92,    93,     0,    94,    95,     0,     0,     0,     0,
       0,     0,     0,   153,   154,   155,     0,   156,  -286,  -286,
    -286,   157,   158,   159,   160,    96,    97,     0,    98,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,     0,
    -286,     0,   100,   101,   102,   103,   104,   105,     0,    88,
      89,    90,    91,    92,    93,   162,    94,    95,     0,     0,
     185,   186,   187,   188,    97,     0,    98,     0,     0,     0,
       0,    99,     0,     0,     0,     0,     0,    96,     0,     0,
     100,   101,   102,   103,   104,   105,     0,     0,     0,     0,
       0,     0,   304,   283,    88,    89,    90,    91,    92,    93,
       0,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,    98,     0,
       0,     0,    96,    99,     0,   539,     0,     0,     0,     0,
       0,   540,   100,   101,   102,   103,   104,   105,     0,     0,
     189,   190,     0,     0,   191,   331,    88,    89,    90,    91,
      92,    93,     0,    94,    95,     0,     0,   185,   186,   187,
     188,    97,     0,    98,     0,     0,     0,     0,    99,     0,
       0,     0,     0,     0,    96,     0,     0,   100,   101,   102,
     103,   104,   105,     0,    88,    89,    90,    91,    92,    93,
     162,    94,    95,     0,     0,   185,   186,   187,   188,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    96,    97,     0,    98,     0,     0,     0,     0,
      99,     0,     0,     0,     0,     0,     0,     0,   272,   100,
     101,   102,   103,   104,   105,     0,     0,   189,   190,     0,
       0,   191,   273,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,    98,     0,     0,     0,     0,    99,   330,
       0,     0,     0,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,     0,     0,   189,   190,     0,     0,   191,
     331,    88,    89,    90,    91,    92,    93,     0,    94,    95,
       0,     0,   185,   186,   187,   188,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
       0,    88,    89,    90,    91,    92,    93,     0,    94,    95,
       0,     0,   185,   186,   187,   188,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
      98,     0,     0,     0,     0,    99,     0,     0,   438,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
       0,     0,   189,   190,     0,     0,   191,   331,    97,     0,
      98,     0,     0,     0,     0,    99,     0,   446,     0,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
       0,     0,   189,   190,     0,     0,   191,   331,    88,    89,
      90,    91,    92,    93,     0,    94,    95,     0,     0,   185,
     186,   187,   188,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    96,     0,    88,    89,
      90,    91,    92,    93,     0,    94,    95,     0,     0,   185,
     186,   187,   188,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,    98,     0,     0,
       0,     0,    99,     0,     0,   450,     0,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,     0,     0,   189,
     190,     0,     0,   191,   331,    97,     0,    98,     0,     0,
       0,     0,    99,     0,     0,     0,     0,   454,     0,     0,
       0,   100,   101,   102,   103,   104,   105,     0,     0,   189,
     190,     0,     0,   191,   331,    88,    89,    90,    91,    92,
      93,     0,    94,    95,     0,     0,   185,   186,   187,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    96,     0,    88,    89,    90,    91,    92,
      93,     0,    94,    95,     0,     0,   185,   186,   187,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    96,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,    98,     0,     0,     0,     0,    99,
     503,     0,     0,     0,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,     0,     0,   189,   190,     0,     0,
     191,   331,    97,     0,    98,     0,     0,     0,     0,    99,
     505,     0,     0,     0,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,     0,     0,   189,   190,     0,     0,
     191,   331,    88,    89,    90,    91,    92,    93,     0,    94,
      95,     0,     0,   185,   186,   187,   188,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      96,     0,    88,    89,    90,    91,    92,    93,     0,    94,
      95,     0,     0,   185,   186,   187,   188,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      96,   508,     0,     0,     0,     0,     0,     0,     0,    97,
       0,    98,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,     0,     0,   189,   190,     0,     0,   191,   273,    97,
       0,    98,     0,     0,     0,     0,    99,     0,     0,     0,
       0,   530,     0,     0,     0,   100,   101,   102,   103,   104,
     105,     0,     0,   189,   190,     0,     0,   191,   331,    88,
      89,    90,    91,    92,    93,     0,    94,    95,     0,     0,
     185,   186,   187,   188,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,     0,    88,
      89,    90,    91,    92,    93,     0,    94,    95,     0,     0,
     185,   186,   187,   188,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,    98,     0,
       0,     0,     0,    99,   565,     0,     0,     0,     0,     0,
       0,     0,   100,   101,   102,   103,   104,   105,     0,     0,
     189,   190,     0,     0,   191,   273,    97,     0,    98,     0,
       0,     0,     0,    99,     0,   539,     0,     0,     0,     0,
       0,     0,   100,   101,   102,   103,   104,   105,     0,     0,
     189,   190,     0,     0,   191,   331,    88,    89,    90,    91,
      92,    93,     0,    94,    95,     0,     0,   185,   186,   187,
     188,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    96,     0,    88,    89,    90,    91,
      92,    93,     0,    94,    95,     0,     0,   185,   186,   187,
     188,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    96,     0,     0,     0,     0,     0,
       0,     0,     0,    97,     0,    98,     0,     0,     0,     0,
      99,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,     0,     0,   189,   190,     0,
       0,   191,   331,    97,     0,    98,     0,     0,     0,     0,
      99,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,     0,     0,   189,   190,     0,
       0,   191,   426,    88,    89,    90,    91,    92,    93,     0,
      94,    95,     0,     0,   185,   186,   187,   188,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,     0,    88,    89,    90,    91,    92,    93,     0,
      94,    95,     0,     0,   185,   186,   187,   188,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,    98,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,     0,     0,   189,   190,     0,     0,   191,   273,
      97,     0,    98,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,     0,     0,   189,   190,     0,     0,   191,    88,
      89,    90,    91,    92,    93,     0,    94,    95,     0,     0,
     185,   186,   187,   188,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,    88,    89,
      90,    91,    92,    93,     0,    94,    95,     0,     0,   185,
     186,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,    98,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   101,   102,   103,   104,   105,     0,     0,
     189,   190,     0,     0,     0,    97,     0,    98,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,     0,     0,   189,
     190,    87,     0,    88,    89,    90,    91,    92,    93,     0,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,    96,     0,     0,     0,     0,     0,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,    30,    98,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,   200,     0,    88,    89,    90,    91,    92,    93,
       0,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,    96,     0,     0,     0,     0,     0,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,    30,    98,     0,     0,     0,     0,    99,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,   259,     0,    88,    89,    90,    91,    92,
      93,     0,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   367,     0,    88,    89,    90,
      91,    92,    93,    96,    94,    95,   260,     0,     0,     0,
      11,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,     0,     0,   368,     0,
       0,     0,    11,    12,    13,     0,     0,     0,     0,     0,
       0,     0,    97,    30,    98,     0,     0,     0,     0,    99,
       0,     0,     0,     0,   261,     0,     0,     0,   100,   262,
     102,   103,   104,   105,    97,    30,    98,     0,     0,     0,
       0,    99,     0,     0,     0,     0,   369,     0,     0,     0,
     100,   370,   102,   103,   104,   105,   259,     0,    88,    89,
      90,    91,    92,    93,     0,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   259,     0,
      88,    89,    90,    91,    92,    93,    96,    94,    95,   400,
       0,     0,     0,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    96,     0,
       0,   459,     0,     0,     0,    11,    12,    13,     0,     0,
       0,     0,     0,     0,     0,    97,    30,    98,     0,     0,
       0,     0,    99,     0,     0,     0,     0,   401,     0,     0,
       0,   100,   402,   102,   103,   104,   105,    97,    30,    98,
       0,     0,     0,     0,    99,     0,     0,     0,     0,   460,
       0,     0,     0,   100,   101,   102,   103,   104,   105,   465,
       0,    88,    89,    90,    91,    92,    93,     0,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,     0,    88,    89,    90,    91,    92,    93,    96,
      94,    95,   466,     0,     0,     0,    11,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,     0,     0,   535,     0,     0,     0,    11,    12,
      13,     0,     0,     0,     0,     0,     0,     0,    97,    30,
      98,     0,     0,     0,     0,    99,     0,     0,     0,     0,
     467,     0,     0,     0,   100,   468,   102,   103,   104,   105,
      97,    30,    98,     0,     0,     0,     0,    99,     0,     0,
       0,     0,   536,     0,     0,     0,   100,   101,   102,   103,
     104,   105,   259,     0,    88,    89,    90,    91,    92,    93,
       0,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   259,     0,    88,    89,    90,    91,
      92,    93,    96,    94,    95,     0,     0,     0,     0,    11,
      12,    13,     0,     0,     0,     0,   259,     0,    88,    89,
      90,    91,    92,    93,    96,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,    30,    98,     0,     0,    96,     0,    99,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,    97,     0,    98,     0,     0,     0,     0,
      99,     0,     0,     0,   473,     0,   474,   379,   582,   100,
     101,   102,   103,   104,   105,    97,     0,    98,     0,     0,
       0,     0,    99,     0,     0,     0,   473,     0,   474,   379,
     599,   100,   101,   102,   103,   104,   105,   472,     0,    88,
      89,    90,    91,    92,    93,     0,    94,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   519,
       0,    88,    89,    90,    91,    92,    93,    96,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   335,     0,    88,    89,    90,    91,    92,    93,    96,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,    98,     0,
       0,    96,     0,    99,     0,     0,     0,   473,     0,   474,
     379,     0,   100,   101,   102,   103,   104,   105,    97,     0,
      98,     0,     0,     0,     0,    99,     0,     0,     0,   473,
       0,   474,   379,     0,   100,   101,   102,   103,   104,   105,
      97,     0,    98,     0,     0,     0,     0,    99,   336,     0,
       0,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,   259,     0,    88,    89,    90,    91,    92,    93,
       0,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   259,     0,    88,    89,    90,    91,
      92,    93,    96,    94,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   259,     0,    88,    89,
      90,    91,    92,    93,    96,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,    98,     0,     0,    96,     0,    99,     0,
       0,     0,     0,     0,     0,   379,     0,   100,   101,   102,
     103,   104,   105,    97,     0,    98,     0,     0,     0,     0,
      99,   592,     0,     0,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,    97,     0,    98,     0,     0,
       0,     0,    99,   594,     0,     0,     0,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,    87,     0,    88,
      89,    90,    91,    92,    93,     0,    94,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   316,
       0,    88,    89,    90,    91,    92,    93,    96,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   319,     0,    88,    89,    90,    91,    92,    93,    96,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,    98,     0,
       0,    96,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   101,   102,   103,   104,   105,    97,     0,
      98,     0,     0,     0,     0,    99,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
      97,     0,    98,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,   324,     0,    88,    89,    90,    91,    92,    93,
       0,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   259,     0,    88,    89,    90,    91,
      92,    93,    96,    94,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   354,     0,    88,    89,
      90,    91,    92,    93,    96,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,    98,     0,     0,    96,     0,    99,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,    97,     0,    98,     0,     0,     0,     0,
      99,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,    97,     0,    98,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,   360,     0,    88,
      89,    90,    91,    92,    93,     0,    94,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   421,
       0,    88,    89,    90,    91,    92,    93,    96,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   423,     0,    88,    89,    90,    91,    92,    93,    96,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,    98,     0,
       0,    96,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   101,   102,   103,   104,   105,    97,     0,
      98,     0,     0,     0,     0,    99,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
      97,     0,    98,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,    88,    89,    90,    91,    92,    93,     0,    94,
      95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      96,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    96,    94,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,    98,     0,     0,    96,     0,    99,     0,     0,     0,
       0,     0,     0,   444,     0,   100,   101,   102,   103,   104,
     105,    97,     0,    98,     0,     0,     0,     0,   193,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,    97,     0,    98,     0,     0,     0,     0,
     195,     0,     0,     0,     0,     0,     0,     0,   408,   100,
     101,   102,   103,   104,   105,    88,    89,    90,    91,    92,
      93,     0,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     0,    96,     0,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   480,     0,    60,    30,     0,
       0,    32,    97,     0,    98,     0,     0,     0,     0,    99,
       0,     0,   409,     0,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,     4,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,   363,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,    30,     0,    31,     0,    33,
       0,   384,   364,     0,     0,   233,     0,     0,     0,     0,
       4,    62,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,   408,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,    30,     0,    31,     0,    33,     0,   232,   364,     0,
       0,   233,     0,     0,     0,     4,     0,    62,     0,     0,
       0,     0,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     551,     4,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,   251,     0,   252,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,    30,     0,    31,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,  -286,     4,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,   462,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,    30,     0,    31,
       0,    33,     0,     0,   253,     0,     0,     0,     0,     0,
       0,     4,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    47,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,    30,     0,    31,     0,    33,     0,     0,   463,
       0,     0,     0,     0,     0,     0,     0,     4,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,    30,     0,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,   481,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,    30,     0,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,   482,   481,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,    30,     0,
      31,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,   484,
     267,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,    30,     0,    31,     0,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,   408,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,     0,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     0,     0,     0,
       0,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,     0,     4,    32,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,    30,     0,
      31,    32,    33,     4,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,    29,     0,    30,     0,    31,     0,    33,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,     0,   515,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,    30,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30
};

static const yytype_int16 yycheck[] =
{
      57,    57,    62,    99,     3,    62,    67,   145,    35,   268,
      58,   246,     3,   150,   249,   234,   127,   112,     3,    57,
     179,     3,    57,    58,   183,    19,   146,   543,   126,   433,
     128,    62,    63,    64,    61,    77,     1,    64,     3,     1,
      85,     3,    99,    99,    77,    88,    89,    79,    81,     1,
      82,     3,   150,    84,    99,    54,   572,   161,    49,    79,
       1,    99,     3,    54,   160,    85,    65,   127,    59,   126,
     126,   128,   128,    77,    65,   135,    79,    79,   138,    78,
     100,   138,    14,    15,   386,     1,    79,     3,     1,   146,
       3,   393,    77,   150,   150,   191,    99,   193,   100,   195,
      79,     1,    84,     3,    98,   153,    99,   511,   512,     1,
      77,   207,    77,   233,    81,   210,   211,   212,   153,     3,
      99,   232,    87,    85,     1,    77,     3,    84,    80,    57,
      58,   268,   228,   181,    99,    87,   193,   193,   195,   195,
     260,   198,   198,   254,    85,   144,   181,    99,   496,   308,
       1,   499,     3,   144,     1,   193,     3,   195,    79,    87,
     198,    77,    94,    95,    77,    93,    94,    95,   272,   388,
     268,    87,   232,   172,    87,    84,   233,    77,    99,    99,
      80,   277,   278,    99,   112,    77,    78,    87,    80,    81,
       1,   251,     3,    79,   254,    87,    79,    12,    13,   303,
      77,   305,    85,   260,    81,    78,    79,   264,    79,    84,
      87,   268,   268,    99,    85,   187,   188,   100,   245,     1,
     247,     3,    84,   151,     1,   153,     3,   254,     1,     2,
      77,    78,    79,   492,    81,    79,   374,     1,   333,   100,
      87,    85,   477,   270,     1,     1,     3,     3,   368,   221,
     222,    77,    81,   181,    83,   375,    77,   185,   186,   187,
     188,   189,   190,    36,    37,   313,    77,   404,    41,    42,
      43,   100,   200,   384,    96,    87,    87,    86,   313,   146,
      92,    93,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      77,    79,   406,   363,   539,   409,   404,    85,   543,    97,
      87,   368,    18,    77,    78,   372,    80,    81,   375,    79,
      79,    77,    78,    79,   384,    81,    85,   388,   245,    78,
     247,   259,   199,    78,   430,    16,    17,   572,    78,   206,
     397,    38,    39,    40,    78,    79,   466,   404,   404,   584,
      79,    80,    78,    79,   282,   492,    78,   384,    79,    80,
      79,    80,    78,    79,   412,     1,   233,     3,    78,    79,
      78,    79,   145,    87,    71,   100,   304,   412,     1,   246,
       3,    84,   249,    78,    79,   313,   443,   443,   316,   493,
      87,   319,    80,   260,   492,    80,   324,   264,    77,   456,
      78,    79,   462,   438,   439,   333,   274,   335,   276,   466,
      78,    79,    87,   470,    77,   450,   451,    78,    79,     3,
     480,   481,    78,    79,     0,   473,   354,     3,   215,   216,
     297,   298,   360,   301,   433,   492,   492,    99,   473,   367,
      99,    77,    78,    79,    78,    81,     3,     3,    78,   497,
      78,    87,     6,   501,    77,    78,    79,    79,    81,   232,
      84,    82,   497,    39,    87,    82,   501,   563,   564,   496,
     566,   567,   499,    49,     1,   532,   151,    80,    54,    99,
       1,   585,     3,    59,   412,     1,    77,     3,    77,    65,
     100,    78,    78,   421,    70,   423,    78,    82,    79,    78,
      78,   368,    82,   431,    78,   372,   100,     3,   375,    82,
     438,   439,   379,   570,   570,    82,    82,    38,    39,    40,
      85,    80,   450,   451,    99,   200,     9,    10,    11,    62,
     397,    84,    82,   400,    82,    78,    82,   465,   213,   214,
      82,     1,     3,     3,   472,   473,    82,    99,    82,    77,
      71,   419,    77,    82,    80,    60,    77,    78,    79,    80,
      81,    77,    78,    79,    82,    81,    87,    80,   144,   497,
      82,    87,   148,   501,    82,    82,    80,   444,    60,    82,
      82,   448,   510,   570,   259,    99,   223,   225,    99,   456,
     404,   519,   459,   224,    77,   227,    81,   226,    81,   466,
      83,   374,   444,   470,   478,     2,    65,   282,   172,    -1,
     477,   384,    -1,   386,    -1,    -1,    -1,    77,    78,    79,
     393,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,   304,
      -1,    -1,    -1,    -1,    -1,   503,   504,   505,   506,    -1,
      -1,   316,    -1,    -1,   319,    -1,    -1,    -1,    -1,   324,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
     335,    -1,    -1,    -1,    -1,   532,    -1,    -1,   535,    -1,
      -1,    -1,   539,    -1,    -1,    -1,   543,    -1,    -1,   354,
      -1,    -1,    -1,    -1,    -1,   360,    -1,    -1,    -1,    -1,
      -1,    -1,   367,    -1,   562,    -1,    -1,   565,    -1,    -1,
      -1,   568,    -1,    -1,   571,   572,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,   584,   586,   587,
      -1,    -1,    -1,    -1,   592,    -1,   594,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,   609,    -1,   611,    -1,    -1,   421,    -1,   423,    -1,
      -1,    -1,    -1,   185,   186,    -1,   431,   189,   190,    -1,
      -1,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,   217,   218,   219,   220,    84,
     465,    86,    87,    88,    89,    90,    91,   472,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   510,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   519,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    99,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    99,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,     1,    99,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    31,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,    -1,     3,
       4,     5,     6,     7,     8,    99,    10,    11,    -1,    -1,
      14,    15,    16,    17,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    99,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    31,    77,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    91,    -1,    -1,
      94,    95,    -1,    -1,    98,    99,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    14,    15,    16,
      17,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,     3,     4,     5,     6,     7,     8,
      99,    10,    11,    -1,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    91,    -1,    -1,    94,    95,    -1,
      -1,    98,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    -1,    94,    95,    -1,    -1,    98,
      99,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    94,    95,    -1,    -1,    98,    99,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    94,    95,    -1,    -1,    98,    99,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    94,
      95,    -1,    -1,    98,    99,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    94,
      95,    -1,    -1,    98,    99,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    94,    95,    -1,    -1,
      98,    99,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    94,    95,    -1,    -1,
      98,    99,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,    94,    95,    -1,    -1,    98,    99,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,    94,    95,    -1,    -1,    98,    99,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      94,    95,    -1,    -1,    98,    99,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      94,    95,    -1,    -1,    98,    99,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    94,    95,    -1,
      -1,    98,    99,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    94,    95,    -1,
      -1,    98,    99,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    94,    95,    -1,    -1,    98,    99,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    94,    95,    -1,    -1,    98,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      94,    95,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    94,
      95,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    34,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    70,    71,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    34,    -1,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    31,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    81,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    91,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    31,    -1,    77,    -1,    -1,    -1,    81,    -1,    83,
      84,    -1,    86,    87,    88,    89,    90,    91,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    81,
      -1,    83,    84,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    31,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    31,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    31,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    31,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    31,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    86,    87,    88,    89,    90,
      91,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    86,
      87,    88,    89,    90,    91,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,    71,    -1,
      -1,    74,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      30,    87,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    77,    78,    -1,
      -1,    81,    -1,    -1,    -1,    30,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    30,    74,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    74,    75,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    69,    -1,    71,    -1,    73,    -1,    75,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   171,   180,     1,    30,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    69,
      71,    73,    74,    75,   129,   131,   134,   135,   136,   139,
     145,   149,   150,   151,   168,   181,   182,     0,   181,     1,
     129,   131,   171,   173,   183,     3,    84,    77,    77,     1,
       3,    77,    87,    99,   130,   152,   153,   154,   131,   131,
       3,   171,   131,   131,   131,   172,   173,     1,    84,   129,
     173,    84,     1,     3,   104,   146,   147,     1,     3,     4,
       5,     6,     7,     8,    10,    11,    31,    70,    72,    77,
      86,    87,    88,    89,    90,    91,   102,   103,   105,   106,
     109,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   128,   135,   142,   149,   160,
     128,    99,   173,     1,   152,     1,   149,   154,   155,     1,
     132,   133,   152,   173,   183,    77,    81,   153,   137,   171,
      84,     1,     3,    57,    58,    59,    61,    65,    66,    67,
      68,    85,    99,   111,   124,   125,   127,   129,   169,   170,
     171,   173,   174,   175,   176,   177,   179,     1,   146,    79,
      85,   100,   100,    79,    85,    14,    15,    16,    17,    94,
      95,    98,   114,    77,   111,    77,   111,   111,    77,    77,
       1,   127,   160,     9,    10,    11,    77,    81,    83,   113,
      87,    92,    93,    88,    89,    12,    13,    14,    15,    94,
      95,    16,    17,    86,    96,    97,    18,    19,    98,    78,
     142,     1,    77,    81,   154,   161,   162,   142,    78,    79,
      78,    78,   154,   149,   154,    79,   100,    79,    99,   100,
     173,     1,     3,    78,   131,   156,   157,   158,   159,     1,
      34,    82,    87,   125,   155,   171,    84,     1,   140,   141,
     142,   168,    85,    99,    80,   128,    80,    77,    77,     3,
      99,    99,     1,    99,   127,   172,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,   100,   126,    79,    99,
      62,    63,    64,   178,     1,    85,   175,    85,    79,    85,
       1,   147,   128,   148,    85,   147,     1,   116,   116,     1,
     117,   117,   116,   116,     1,   127,   160,   160,   160,   125,
      78,    99,    78,    78,     3,     1,    78,   110,   125,   127,
       3,   113,   113,   113,   114,   114,   115,   115,   116,   116,
     116,   116,   117,   117,     1,   118,   119,   120,   121,   122,
       1,   127,    78,     1,    78,   156,   161,     1,    34,    82,
      87,   125,   155,   162,    77,    81,     6,     1,   133,    84,
     125,   163,   133,   163,    77,    78,    79,   152,   154,   161,
     152,   161,    78,    79,    78,    79,   125,   155,    82,    82,
      34,    82,    87,   125,    84,     1,    85,    99,     1,    85,
     141,     1,    80,    99,   143,   144,   152,   172,   169,    80,
     169,     1,   127,     1,   127,    99,    99,    99,   125,   125,
      77,     1,   169,    77,   172,   172,    85,   128,    80,    80,
      78,    78,    78,    79,    84,   113,    79,    78,    79,    82,
      80,    80,    78,    78,    82,   125,   155,    82,    82,    34,
      82,   125,     1,    78,   156,     1,    34,    82,    87,   125,
     155,    78,     1,    81,    83,   163,   164,   165,   166,   167,
       1,     1,    56,   158,    56,   158,     3,    82,   125,   125,
      82,    82,   140,    85,   172,   172,    79,    80,   128,    79,
      99,    80,   169,    78,    78,    78,    78,   127,    62,    62,
       1,   129,   176,   124,   124,    58,   107,   108,   160,     1,
     164,   125,   124,   124,    82,   125,   125,    82,    78,    78,
      82,   125,   155,    82,    82,    34,    82,   125,    99,    79,
      85,   128,     3,    79,    85,   163,   100,   167,    78,    82,
      82,    85,   172,     1,   144,   128,   144,   128,   169,   169,
     169,   169,    78,    77,    77,    78,   176,   176,    80,    78,
      79,    80,    79,    85,    82,    82,    82,   125,   125,    82,
     163,    82,    85,   163,   165,   138,    60,    60,   169,   127,
     127,   169,    78,   127,    78,   127,   125,   108,   125,    85,
      82,    82,   163,   172,   169,   169,    78,    78,   169,    78,
     169,    78,    99,    99,   169,   169
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   102,   102,   102,   102,   102,   103,   103,
     103,   104,   105,   105,   106,   107,   107,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   110,
     110,   110,   111,   111,   111,   111,   111,   111,   111,   112,
     112,   112,   112,   112,   112,   113,   113,   114,   114,   114,
     114,   115,   115,   115,   115,   116,   116,   116,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   118,   118,   118,
     118,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     123,   123,   124,   124,   124,   124,   124,   125,   125,   125,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   127,   127,   128,   129,   130,   129,   129,   129,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   132,
     132,   132,   133,   133,   133,   134,   134,   134,   134,   134,
     134,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   136,   137,   138,   136,
     136,   136,   136,   139,   139,   140,   140,   141,   141,   141,
     141,   142,   142,   142,   142,   143,   143,   143,   144,   144,
     144,   144,   145,   145,   145,   145,   145,   145,   145,   146,
     146,   146,   148,   147,   147,   147,   149,   149,   149,   149,
     150,   150,   151,   151,   152,   152,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   154,   154,   154,   154,   154,   155,   155,   156,
     156,   156,   157,   157,   157,   158,   158,   158,   158,   158,
     159,   159,   160,   160,   161,   161,   161,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   163,   163,   163,   163,   164,   164,   164,   164,
     164,   165,   166,   166,   167,   167,   168,   169,   169,   169,
     169,   169,   169,   170,   170,   170,   171,   172,   173,   173,
     173,   174,   174,   175,   175,   176,   176,   176,   177,   177,
     177,   177,   177,   177,   178,   178,   178,   178,   178,   178,
     178,   178,   179,   179,   179,   179,   179,   179,   180,   180,
     181,   181,   182,   182,   182,   182,   182,   182,   183,   183
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     6,     1,     3,     3,     3,     1,
       4,     3,     4,     3,     3,     2,     2,     6,     7,     1,
       3,     2,     1,     2,     2,     2,     2,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     2,     1,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     5,     5,     5,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     2,     0,     4,     1,     3,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     1,
       3,     3,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     6,     0,     0,     9,
       2,     7,     6,     1,     1,     1,     2,     2,     3,     1,
       2,     2,     1,     2,     1,     1,     3,     3,     2,     3,
       1,     3,     4,     5,     5,     6,     2,     4,     5,     1,
       3,     3,     0,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     4,     4,     2,     1,     1,     3,     3,     4,
       6,     5,     5,     6,     5,     4,     4,     4,     3,     4,
       4,     3,     3,     2,     2,     1,     3,     1,     2,     3,
       1,     3,     1,     3,     3,     2,     2,     1,     2,     2,
       1,     3,     2,     1,     2,     1,     1,     3,     2,     3,
       5,     4,     5,     4,     3,     3,     3,     4,     6,     5,
       5,     6,     4,     4,     2,     3,     3,     4,     3,     4,
       4,     2,     3,     4,     3,     1,     2,     1,     4,     3,
       3,     2,     1,     2,     3,     2,     7,     1,     1,     1,
       1,     3,     1,     3,     4,     3,     0,     0,     4,     5,
       5,     1,     2,     1,     1,     1,     2,     2,     7,     5,
       5,     5,     5,     7,     5,     7,     6,     7,     6,     7,
       7,     5,     3,     2,     2,     2,     3,     3,     3,     2,
       1,     1,     4,     3,     3,     3,     3,     2,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        YY_LAC_DISCARD ("YYBACKUP");                              \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return YYENOMEM if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYPTRDIFF_T *yycapacity, YYPTRDIFF_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yy_state_t **yybottom,
                      yy_state_t *yybottom_no_free,
                      yy_state_t **yytop, yy_state_t *yytop_empty)
{
  YYPTRDIFF_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYPTRDIFF_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYPTRDIFF_T yyalloc = 2 * yysize_new;
      yy_state_t *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        YY_CAST (yy_state_t *,
                 YYSTACK_ALLOC (YY_CAST (YYSIZE_T,
                                         yyalloc * YYSIZEOF (*yybottom_new))));
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                                \
do {                                                                    \
  if (!yy_lac_established)                                              \
    {                                                                   \
      YYDPRINTF ((stderr,                                               \
                  "LAC: initial context established for %s\n",          \
                  yysymbol_name (yytoken)));                            \
      yy_lac_established = 1;                                           \
      switch (yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken))    \
        {                                                               \
        case YYENOMEM:                                                  \
          YYNOMEM;                                                      \
        case 1:                                                         \
          goto yyerrlab;                                                \
        }                                                               \
    }                                                                   \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      YYDPRINTF ((stderr, "LAC: initial context discarded due to "       \
                  Event "\n"));                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return YYENOMEM if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, yysymbol_kind_t yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  /* Reduce until we encounter a shift and thereby accept the token.  */
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yysymbol_name (yytoken)));
  if (yytoken == YYSYMBOL_YYUNDEF)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[+*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          /* Use the default action.  */
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          /* Use the action from yytable.  */
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      /* By now we know we have to simulate a reduce.  */
      YYDPRINTF ((stderr, " R%d", yyrule - 1));
      {
        /* Pop the corresponding number of values from the stack.  */
        YYPTRDIFF_T yylen = yyr2[yyrule];
        /* First pop from the LAC stack as many tokens as possible.  */
        if (yyesp != yyes_prev)
          {
            YYPTRDIFF_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yyesp = yyes_prev;
                yylen -= yysize;
              }
          }
        /* Only afterwards look at the main stack.  */
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      /* Push the resulting state of the reduction.  */
      {
        yy_state_fast_t yystate;
        {
          const int yylhs = yyr1[yyrule] - YYNTOKENS;
          const int yyi = yypgoto[yylhs] + *yyesp;
          yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                     ? yytable[yyi]
                     : yydefgoto[yylhs]);
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            YY_IGNORE_USELESS_CAST_BEGIN
            *yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return YYENOMEM;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}

/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yy_state_t *yyesa;
  yy_state_t **yyes;
  YYPTRDIFF_T *yyes_capacity;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;

  int yyx;
  for (yyx = 0; yyx < YYNTOKENS; ++yyx)
    {
      yysymbol_kind_t yysym = YY_CAST (yysymbol_kind_t, yyx);
      if (yysym != YYSYMBOL_YYerror && yysym != YYSYMBOL_YYUNDEF)
        switch (yy_lac (yyctx->yyesa, yyctx->yyes, yyctx->yyes_capacity, yyctx->yyssp, yysym))
          {
          case YYENOMEM:
            return YYENOMEM;
          case 1:
            continue;
          default:
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = yysym;
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




/* The kind of the lookahead of this context.  */
static yysymbol_kind_t
yypcontext_token (const yypcontext_t *yyctx) YY_ATTRIBUTE_UNUSED;

static yysymbol_kind_t
yypcontext_token (const yypcontext_t *yyctx)
{
  return yyctx->yytoken;
}

/* The location of the lookahead of this context.  */
static YYLTYPE *
yypcontext_location (const yypcontext_t *yyctx) YY_ATTRIBUTE_UNUSED;

static YYLTYPE *
yypcontext_location (const yypcontext_t *yyctx)
{
  return yyctx->yylloc;
}

/* User defined function to report a syntax error.  */
static int
yyreport_syntax_error (const yypcontext_t *yyctx);

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

    yy_state_t yyesa[20];
    yy_state_t *yyes = yyesa;
    YYPTRDIFF_T yyes_capacity = 20 < YYMAXDEPTH ? 20 : YYMAXDEPTH;

  /* Whether LAC context is established.  A Boolean.  */
  int yy_lac_established = 0;
  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      YY_LAC_ESTABLISH;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  YY_LAC_DISCARD ("shift");
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
  case 2: /* primary_expression: IDENTIFIER  */
#line 59 "parserBison.y"
                     {printf("USING IDENTIFIER\n"); check_declaration((yyvsp[0].name));}
#line 2976 "parserBison.tab.c"
    break;

  case 88: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 214 "parserBison.y"
                                                                     {printf("ABIEL TODAVIA MAS MECO3\n");}
#line 2982 "parserBison.tab.c"
    break;

  case 105: /* $@1: %empty  */
#line 243 "parserBison.y"
                                 {/* DONE, ENTRA A TYPE_SPECIFIER */}
#line 2988 "parserBison.tab.c"
    break;

  case 106: /* declaration: declaration_specifiers $@1 init_declarator_list ';'  */
#line 243 "parserBison.y"
                                                                                               {end_declaration();}
#line 2994 "parserBison.tab.c"
    break;

  case 122: /* init_declarator: declarator '=' initializer  */
#line 268 "parserBison.y"
                                     {printf("ABIEL MECO\n");}
#line 3000 "parserBison.tab.c"
    break;

  case 124: /* init_declarator: error '=' initializer  */
#line 270 "parserBison.y"
                                {printf("ABIEL MECO2\n");}
#line 3006 "parserBison.tab.c"
    break;

  case 125: /* storage_class_specifier: TYPEDEF  */
#line 274 "parserBison.y"
                        {typedef_name_flag = 1;}
#line 3012 "parserBison.tab.c"
    break;

  case 131: /* type_specifier: VOID  */
#line 283 "parserBison.y"
               {save_type();}
#line 3018 "parserBison.tab.c"
    break;

  case 132: /* type_specifier: CHAR  */
#line 284 "parserBison.y"
               {save_type();}
#line 3024 "parserBison.tab.c"
    break;

  case 133: /* type_specifier: SHORT  */
#line 285 "parserBison.y"
                {save_type();}
#line 3030 "parserBison.tab.c"
    break;

  case 134: /* type_specifier: INT  */
#line 286 "parserBison.y"
              {save_type();}
#line 3036 "parserBison.tab.c"
    break;

  case 135: /* type_specifier: LONG  */
#line 287 "parserBison.y"
               {save_type();}
#line 3042 "parserBison.tab.c"
    break;

  case 136: /* type_specifier: FLOAT  */
#line 288 "parserBison.y"
                {save_type();}
#line 3048 "parserBison.tab.c"
    break;

  case 137: /* type_specifier: DOUBLE  */
#line 289 "parserBison.y"
                 {save_type();}
#line 3054 "parserBison.tab.c"
    break;

  case 138: /* type_specifier: SIGNED  */
#line 290 "parserBison.y"
                 {save_type();}
#line 3060 "parserBison.tab.c"
    break;

  case 139: /* type_specifier: UNSIGNED  */
#line 291 "parserBison.y"
                   {save_type();}
#line 3066 "parserBison.tab.c"
    break;

  case 140: /* type_specifier: _BOOL  */
#line 292 "parserBison.y"
                {save_type();}
#line 3072 "parserBison.tab.c"
    break;

  case 141: /* type_specifier: _COMPLEX  */
#line 293 "parserBison.y"
                   {save_type();}
#line 3078 "parserBison.tab.c"
    break;

  case 142: /* type_specifier: _IMAGINARY  */
#line 294 "parserBison.y"
                     {save_type();}
#line 3084 "parserBison.tab.c"
    break;

  case 144: /* type_specifier: enum_specifier  */
#line 296 "parserBison.y"
                         {save_type();}
#line 3090 "parserBison.tab.c"
    break;

  case 145: /* type_specifier: TYPEDEF_NAME  */
#line 297 "parserBison.y"
                       {save_type();}
#line 3096 "parserBison.tab.c"
    break;

  case 147: /* $@2: %empty  */
#line 302 "parserBison.y"
                                     {save_identifier_struct_union((yyvsp[0].name));}
#line 3102 "parserBison.tab.c"
    break;

  case 148: /* $@3: %empty  */
#line 302 "parserBison.y"
                                                                                                                       {finish_struct_union();}
#line 3108 "parserBison.tab.c"
    break;

  case 150: /* struct_or_union_specifier: struct_or_union IDENTIFIER  */
#line 303 "parserBison.y"
                                     {save_type();}
#line 3114 "parserBison.tab.c"
    break;

  case 153: /* struct_or_union: STRUCT  */
#line 309 "parserBison.y"
                 {save_struct();}
#line 3120 "parserBison.tab.c"
    break;

  case 154: /* struct_or_union: UNION  */
#line 310 "parserBison.y"
                {save_union();}
#line 3126 "parserBison.tab.c"
    break;

  case 158: /* struct_declaration: specifier_qualifier_list struct_declarator_list ';'  */
#line 320 "parserBison.y"
                                                              {end_declaration();}
#line 3132 "parserBison.tab.c"
    break;

  case 182: /* $@4: %empty  */
#line 362 "parserBison.y"
                                   {printf("ABIEL MECO\n");}
#line 3138 "parserBison.tab.c"
    break;

  case 185: /* enumerator: error '=' constant_expression  */
#line 364 "parserBison.y"
                                         {printf("ABIEL MECO\n");}
#line 3144 "parserBison.tab.c"
    break;

  case 196: /* direct_declarator: IDENTIFIER  */
#line 390 "parserBison.y"
                     {save_id();}
#line 3150 "parserBison.tab.c"
    break;

  case 271: /* designation: designator_list '='  */
#line 502 "parserBison.y"
                               {printf("ABIEL MECO\n");}
#line 3156 "parserBison.tab.c"
    break;

  case 286: /* prepare_scope: %empty  */
#line 535 "parserBison.y"
         { open_scope(); }
#line 3162 "parserBison.tab.c"
    break;

  case 287: /* finish_scope: %empty  */
#line 539 "parserBison.y"
         { print_symboltables(); close_scope(); }
#line 3168 "parserBison.tab.c"
    break;

  case 304: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 576 "parserBison.y"
                                             {printf("Hola1\n");}
#line 3174 "parserBison.tab.c"
    break;

  case 305: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 577 "parserBison.y"
                                                    {printf("Hola2\n");}
#line 3180 "parserBison.tab.c"
    break;

  case 306: /* iteration_statement: FOR '(' expression_statement expression_statement ')' statement  */
#line 578 "parserBison.y"
                                                                          {printf("Hola3\n");}
#line 3186 "parserBison.tab.c"
    break;

  case 307: /* iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement  */
#line 579 "parserBison.y"
                                                                                     {printf("Hola4\n");}
#line 3192 "parserBison.tab.c"
    break;

  case 308: /* iteration_statement: FOR '(' declaration expression_statement ')' statement  */
#line 580 "parserBison.y"
                                                                 {printf("Hola5\n");}
#line 3198 "parserBison.tab.c"
    break;

  case 309: /* iteration_statement: FOR '(' declaration expression_statement expression ')' statement  */
#line 581 "parserBison.y"
                                                                            {printf("Hola6\n");}
#line 3204 "parserBison.tab.c"
    break;

  case 310: /* iteration_statement: DO error WHILE '(' expression ')' ';'  */
#line 582 "parserBison.y"
                                                 {printf("Hola7\n");}
#line 3210 "parserBison.tab.c"
    break;

  case 311: /* iteration_statement: FOR '(' error ')' statement  */
#line 583 "parserBison.y"
                                       {printf("Hola8\n");}
#line 3216 "parserBison.tab.c"
    break;


#line 3220 "parserBison.tab.c"

        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
  }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yyesa, &yyes, &yyes_capacity, yytoken, &yylloc};
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        if (yyreport_syntax_error (&yyctx) == 2)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);

  return yyresult;
}

#line 619 "parserBison.y"

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
