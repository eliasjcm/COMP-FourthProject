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
  YYSYMBOL_STRUCT_ID = 4,                  /* STRUCT_ID  */
  YYSYMBOL_INTEGER_CONSTANT = 5,           /* INTEGER_CONSTANT  */
  YYSYMBOL_FLOATING_CONSTANT = 6,          /* FLOATING_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 7,             /* STRING_LITERAL  */
  YYSYMBOL_FUNC_NAME = 8,                  /* FUNC_NAME  */
  YYSYMBOL_SIZEOF = 9,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 10,                    /* PTR_OP  */
  YYSYMBOL_INC_OP = 11,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 12,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 13,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 14,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 15,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 16,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 17,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 18,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 19,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 20,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 21,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 22,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 23,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 24,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 25,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 26,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 27,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 28,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 29,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 30,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPEDEF_NAME = 31,              /* TYPEDEF_NAME  */
  YYSYMBOL_ENUMERATION_CONSTANT = 32,      /* ENUMERATION_CONSTANT  */
  YYSYMBOL_TYPEDEF = 33,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 34,                    /* EXTERN  */
  YYSYMBOL_STATIC = 35,                    /* STATIC  */
  YYSYMBOL_AUTO = 36,                      /* AUTO  */
  YYSYMBOL_REGISTER = 37,                  /* REGISTER  */
  YYSYMBOL_INLINE = 38,                    /* INLINE  */
  YYSYMBOL_CONST = 39,                     /* CONST  */
  YYSYMBOL_RESTRICT = 40,                  /* RESTRICT  */
  YYSYMBOL_VOLATILE = 41,                  /* VOLATILE  */
  YYSYMBOL__BOOL = 42,                     /* _BOOL  */
  YYSYMBOL_CHAR = 43,                      /* CHAR  */
  YYSYMBOL_SHORT = 44,                     /* SHORT  */
  YYSYMBOL_INT = 45,                       /* INT  */
  YYSYMBOL_LONG = 46,                      /* LONG  */
  YYSYMBOL_SIGNED = 47,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 48,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 49,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 50,                    /* DOUBLE  */
  YYSYMBOL_VOID = 51,                      /* VOID  */
  YYSYMBOL__COMPLEX = 52,                  /* _COMPLEX  */
  YYSYMBOL__IMAGINARY = 53,                /* _IMAGINARY  */
  YYSYMBOL_STRUCT = 54,                    /* STRUCT  */
  YYSYMBOL_UNION = 55,                     /* UNION  */
  YYSYMBOL_ENUM = 56,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 57,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 58,                      /* CASE  */
  YYSYMBOL_DEFAULT = 59,                   /* DEFAULT  */
  YYSYMBOL_IF = 60,                        /* IF  */
  YYSYMBOL_ELSE = 61,                      /* ELSE  */
  YYSYMBOL_SWITCH = 62,                    /* SWITCH  */
  YYSYMBOL_WHILE = 63,                     /* WHILE  */
  YYSYMBOL_DO = 64,                        /* DO  */
  YYSYMBOL_FOR = 65,                       /* FOR  */
  YYSYMBOL_GOTO = 66,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 67,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 68,                     /* BREAK  */
  YYSYMBOL_RETURN = 69,                    /* RETURN  */
  YYSYMBOL__ALIGNAS = 70,                  /* _ALIGNAS  */
  YYSYMBOL__ALIGNOF = 71,                  /* _ALIGNOF  */
  YYSYMBOL__ATOMIC = 72,                   /* _ATOMIC  */
  YYSYMBOL__GENERIC = 73,                  /* _GENERIC  */
  YYSYMBOL__NORETURN = 74,                 /* _NORETURN  */
  YYSYMBOL__STATIC_ASSERT = 75,            /* _STATIC_ASSERT  */
  YYSYMBOL__THREAD_LOCAL = 76,             /* _THREAD_LOCAL  */
  YYSYMBOL_77_then_ = 77,                  /* "then"  */
  YYSYMBOL_78_ = 78,                       /* '('  */
  YYSYMBOL_79_ = 79,                       /* ')'  */
  YYSYMBOL_80_ = 80,                       /* ','  */
  YYSYMBOL_81_ = 81,                       /* ':'  */
  YYSYMBOL_82_ = 82,                       /* '['  */
  YYSYMBOL_83_ = 83,                       /* ']'  */
  YYSYMBOL_84_ = 84,                       /* '.'  */
  YYSYMBOL_85_ = 85,                       /* '{'  */
  YYSYMBOL_86_ = 86,                       /* '}'  */
  YYSYMBOL_87_ = 87,                       /* '&'  */
  YYSYMBOL_88_ = 88,                       /* '*'  */
  YYSYMBOL_89_ = 89,                       /* '+'  */
  YYSYMBOL_90_ = 90,                       /* '-'  */
  YYSYMBOL_91_ = 91,                       /* '~'  */
  YYSYMBOL_92_ = 92,                       /* '!'  */
  YYSYMBOL_93_ = 93,                       /* '/'  */
  YYSYMBOL_94_ = 94,                       /* '%'  */
  YYSYMBOL_95_ = 95,                       /* '<'  */
  YYSYMBOL_96_ = 96,                       /* '>'  */
  YYSYMBOL_97_ = 97,                       /* '^'  */
  YYSYMBOL_98_ = 98,                       /* '|'  */
  YYSYMBOL_99_ = 99,                       /* '?'  */
  YYSYMBOL_100_ = 100,                     /* ';'  */
  YYSYMBOL_101_ = 101,                     /* '='  */
  YYSYMBOL_YYACCEPT = 102,                 /* $accept  */
  YYSYMBOL_primary_expression = 103,       /* primary_expression  */
  YYSYMBOL_constant = 104,                 /* constant  */
  YYSYMBOL_enumeration_constant = 105,     /* enumeration_constant  */
  YYSYMBOL_string = 106,                   /* string  */
  YYSYMBOL__GENERIC_selection = 107,       /* _GENERIC_selection  */
  YYSYMBOL__GENERIC_assoc_list = 108,      /* _GENERIC_assoc_list  */
  YYSYMBOL__GENERIC_association = 109,     /* _GENERIC_association  */
  YYSYMBOL_postfix_expression = 110,       /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 111, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 112,         /* unary_expression  */
  YYSYMBOL_unary_operator = 113,           /* unary_operator  */
  YYSYMBOL_cast_expression = 114,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 115, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 116,      /* additive_expression  */
  YYSYMBOL_shift_expression = 117,         /* shift_expression  */
  YYSYMBOL_relational_expression = 118,    /* relational_expression  */
  YYSYMBOL_equality_expression = 119,      /* equality_expression  */
  YYSYMBOL_and_expression = 120,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 121,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 122,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 123,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 124,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 125,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 126,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 127,      /* assignment_operator  */
  YYSYMBOL_expression = 128,               /* expression  */
  YYSYMBOL_constant_expression = 129,      /* constant_expression  */
  YYSYMBOL_declaration = 130,              /* declaration  */
  YYSYMBOL_131_1 = 131,                    /* $@1  */
  YYSYMBOL_declaration_specifiers = 132,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 133,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 134,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 135,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 136,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 137, /* struct_or_union_specifier  */
  YYSYMBOL_138_2 = 138,                    /* $@2  */
  YYSYMBOL_struct_or_union = 139,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 140,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 141,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 142, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 143,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 144,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 145,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 146,          /* enumerator_list  */
  YYSYMBOL_enumerator = 147,               /* enumerator  */
  YYSYMBOL_148_3 = 148,                    /* $@3  */
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
#define YYLAST   4591

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  328
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  615

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   332


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
       2,     2,     2,    92,     2,     2,     2,    94,    87,     2,
      78,    79,    88,    89,    80,    90,    84,    93,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,   100,
      95,   101,    96,    99,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    82,     2,    83,    97,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,    98,    86,    91,     2,     2,     2,
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
      75,    76,    77
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
     292,   293,   294,   295,   296,   297,   301,   302,   302,   303,
     304,   305,   309,   310,   314,   315,   319,   320,   321,   322,
     326,   327,   328,   329,   333,   334,   335,   339,   340,   341,
     342,   346,   347,   348,   349,   350,   351,   352,   356,   357,
     358,   362,   362,   363,   364,   368,   369,   370,   371,   375,
     376,   380,   381,   385,   386,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     406,   410,   411,   412,   413,   414,   418,   419,   423,   424,
     425,   429,   430,   431,   435,   436,   437,   438,   439,   443,
     444,   448,   449,   453,   454,   455,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   487,   488,   489,   490,   494,   495,   496,   497,   498,
     502,   506,   507,   511,   512,   516,   520,   521,   522,   523,
     524,   525,   529,   530,   531,   535,   539,   544,   545,   546,
     551,   552,   556,   557,   561,   562,   563,   567,   568,   569,
     570,   571,   572,   576,   577,   578,   579,   580,   581,   582,
     583,   587,   588,   589,   590,   591,   592,   596,   597,   601,
     602,   606,   607,   608,   609,   610,   611,   615,   616
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
  "end of file", "error", "invalid token", "IDENTIFIER", "STRUCT_ID",
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
  "$@2", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "$@3", "type_qualifier",
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

#define YYPACT_NINF (-526)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-286)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -526,  4185,  4129,  3960,  -526,  -526,  -526,  -526,  -526,  -526,
    -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,
    -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,    26,   -58,
    -526,  -526,    -1,  -526,  -526,    48,  4481,  4481,  -526,   230,
    -526,  4481,  4481,  4481,  -526,  -526,  -526,  -526,  -526,  -526,
    -526,    53,   -40,  -526,  4435,     1,   114,  2528,  3334,    -9,
    -526,    84,   566,  -526,   101,  4435,     6,    36,  -526,  -526,
    -526,    31,    50,  -526,  -526,  -526,  -526,  -526,    -9,   761,
    -526,  -526,   168,   134,  -526,    45,   -33,  -526,  2330,  -526,
    -526,  -526,  -526,  -526,  3600,  3630,  3630,  -526,    81,    86,
    2602,  -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,
    -526,   413,  -526,  3674,  -526,   108,   192,   295,    92,   319,
      63,    97,   107,   162,    46,  -526,   139,  4519,   447,  4519,
     188,   161,  -526,  -526,   222,   239,   235,  -526,  -526,   159,
     -20,   -17,  -526,   225,  -526,  4435,  4016,  2404,     6,   245,
    -526,  4355,  1336,   258,  3334,   273,   279,   283,   348,   276,
     285,  1188,  -526,  -526,   849,  -526,  -526,   127,  -526,  -526,
    -526,   -23,  -526,   857,  -526,  -526,  -526,  -526,   241,   -25,
     250,  -526,  3334,  -526,    23,  -526,  3356,  3356,  3408,  3408,
    3356,  3356,  3430,   108,  2602,  -526,  2602,  -526,  -526,  4519,
    3452,  1434,   267,   317,   390,  -526,  -526,  3176,  3452,   398,
    -526,  3674,  3674,  3674,  3674,  3674,  3356,  3356,  3356,  3356,
    3356,  3356,  3408,  3408,  3482,  3482,  3482,  3482,  3482,  3504,
    -526,  -526,   336,  3792,  2676,   224,  -526,    11,  -526,  -526,
     422,  -526,  -526,  -526,  -526,  -526,   102,  3198,   102,  -526,
    3198,  -526,   160,  -526,  -526,   190,   341,   356,  -526,   280,
    2104,  2926,  -526,   361,   366,  2698,   445,   375,   -54,  3848,
    -526,    32,  -526,  -526,   129,  1049,   381,  1049,  3526,  3556,
     358,  -526,  -526,  2202,  -526,   150,  -526,  -526,  -526,  -526,
    -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,  3452,  3452,
    -526,   400,  1092,   406,  -526,  2232,  -526,  -526,  -526,    35,
    -526,   392,  -526,  -526,  3334,  -526,  -526,  3674,   295,   295,
    2454,    92,    92,   295,   295,  1464,   289,   420,   421,   424,
     425,  -526,  -526,  -526,  3578,  -526,  1562,  -526,   292,  -526,
     123,  -526,  -526,  -526,  -526,   108,   108,   192,   192,   295,
     295,   295,   295,    92,    92,  2360,   319,    63,    97,   107,
     162,  1592,   294,  -526,   363,  -526,   428,   429,  1690,  2926,
    -526,   418,   427,  2790,    11,  4072,  2812,   437,   416,  -526,
    3062,  -526,  -526,  -526,  -526,  3736,  -526,  4241,  -526,   538,
    -526,  -526,  -526,  -526,  4298,  -526,   515,   436,  2926,  -526,
    -526,  3452,  -526,   438,   439,   441,  4392,  -526,  -526,   430,
    -526,  -526,   301,  3334,  -526,   165,  -526,   451,  -526,  -526,
    1049,  -526,  1720,   311,  1818,   339,  -526,   129,  -526,  -526,
    -526,  3452,  1848,   470,   953,  -526,  -526,  -526,  -526,  3334,
    3334,   452,   452,  -526,  2458,  3084,  -526,  -526,  -526,  3452,
    -526,  3334,  3334,  -526,  -526,  -526,   453,  2926,  -526,  -526,
    3452,  -526,   457,   410,  -526,   463,  1946,  2926,  -526,   461,
     464,  2904,   448,  1306,  3334,   547,  -526,    -6,  3198,   261,
    -526,   476,    96,  -526,  -526,  -526,  -526,  -526,  -526,   468,
     469,  -526,  -526,  -526,  3904,  -526,  -526,   321,  3334,  -526,
     321,  -526,  3334,  -526,  1049,  1049,  1049,  1049,   355,   475,
     479,  1976,  1216,  1216,  -526,  -526,   481,   373,  -526,   482,
    2074,   191,  -526,  -526,  -526,  -526,   477,   483,  -526,  -526,
    -526,  -526,   488,  2926,  -526,  -526,  3452,  -526,   489,  -526,
    3198,  -526,   492,  -526,  2948,  -526,  -526,  -526,  -526,  -526,
    -526,  -526,  -526,  -526,   495,  -526,  -526,  -526,  -526,   518,
     520,  -526,  -526,  1049,  3452,  3452,  1049,  3220,  3312,  3452,
    -526,  2458,  3452,  3040,  -526,  -526,  -526,  -526,   501,   503,
    -526,  -526,  -526,  -526,  -526,  3198,  1049,  1049,  -526,   377,
     386,  -526,  1049,   401,  1049,   403,  -526,  -526,  -526,  -526,
    -526,  -526,  -526,  -526,  -526,   487,   491,  -526,  1049,  -526,
    1049,  -526,  -526,  -526,  -526
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     285,     0,     0,     0,   145,   125,   126,   127,   129,   130,
     189,   185,   186,   187,   140,   132,   133,   134,   135,   138,
     139,   136,   137,   131,   141,   142,   152,   153,     0,     0,
     188,   190,     0,   128,   320,     0,   110,   112,   143,   285,
     144,   114,   116,   118,   107,   286,   319,     1,   318,   285,
     327,     0,     0,   326,   285,   175,     0,     0,     0,   285,
     195,     0,     0,   104,     0,   285,   194,     0,   109,   111,
     285,   149,     0,   113,   115,   117,   317,   325,     0,     0,
     328,   324,     0,     0,    11,   183,     0,   178,     0,     2,
       8,     9,    12,    13,     0,     0,     0,    10,     0,     0,
       0,    39,    40,    41,    42,    43,    44,    19,     3,     4,
       7,    32,    45,     0,    47,    51,    55,    58,    67,    72,
      74,    76,    78,    80,    82,   103,     0,   161,     0,   163,
       0,     0,   108,   323,     0,     0,     0,   216,   213,   212,
       0,     0,   119,   123,   322,   285,     0,     0,   193,     0,
     285,     0,     0,     2,     0,     0,     0,     0,     0,     0,
       0,     0,   286,   294,    45,    87,   101,     0,   292,   293,
     276,     0,   277,     0,   290,   278,   279,   281,     0,     0,
       0,   176,     0,   181,     0,   171,     0,     0,     0,     0,
       0,     0,     0,    54,     0,    36,     0,    33,    34,     0,
       0,     0,     0,     0,     0,    25,    26,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     192,   160,     0,     0,     0,     0,   231,   235,   162,   191,
       0,   210,   196,   215,   217,   211,     0,     0,     0,   106,
       0,   321,     0,   229,   207,     0,     0,   219,   221,     0,
       0,     0,   197,    40,     0,     0,     0,     0,     0,     0,
     154,     0,   158,   286,   296,     0,     0,     0,     0,     0,
       0,   312,   313,     0,   314,     0,   287,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    90,     0,     0,
     295,     0,     0,     0,   286,     0,   286,   291,   177,     0,
     173,     0,   180,   184,     0,   172,   179,     0,    65,    66,
       0,    70,    71,    63,    64,     0,     0,     0,     0,     0,
       0,     6,    89,     5,     0,    24,     0,    21,     0,    29,
       0,    23,    48,    49,    50,    52,    53,    56,    57,    61,
      62,    59,    60,    68,    69,     0,    73,    75,    77,    79,
      81,     0,     0,   260,     0,   253,     0,     0,     0,     0,
     237,    40,     0,     0,   233,     0,     0,     0,     0,   121,
       0,   264,   124,   120,   122,     0,   209,     0,   227,     0,
     228,   224,   225,   206,     0,   208,     0,     0,     0,   198,
     205,     0,   204,    40,     0,     0,     0,   286,   159,     0,
     286,   155,     0,     0,   156,     0,   164,   169,   289,   282,
       0,   284,     0,     0,     0,     0,   311,   316,   315,    88,
     102,     0,     0,     0,     0,   280,   288,   174,   182,     0,
       0,    37,     0,    38,     0,     0,    46,    31,    22,     0,
      20,     0,     0,   254,   236,   257,     0,     0,   238,   244,
       0,   243,     0,     0,   255,     0,     0,     0,   245,    40,
       0,     0,     0,     0,     0,     0,   266,     0,     0,     0,
     271,     0,     0,   220,   223,   218,   222,   230,   200,     0,
       0,   201,   203,   286,     0,   151,   146,     0,     0,   167,
       0,   157,     0,   283,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,    86,     0,     0,    15,     0,
       0,     0,    30,    85,    83,   240,     0,     0,   242,   258,
     256,   259,     0,     0,   246,   252,     0,   251,     0,   275,
       0,   263,     0,   274,     0,   261,   265,   270,   272,   210,
     199,   202,   150,   148,     0,   166,   170,   165,   168,   300,
     298,   301,   299,     0,     0,     0,     0,     0,     0,     0,
      14,     0,     0,     0,    27,   239,   241,   248,     0,     0,
     249,   269,   273,   262,   268,     0,     0,     0,   303,     0,
       0,   310,     0,     0,     0,     0,    18,    16,    17,    28,
     247,   250,   267,   302,   297,     0,     0,   307,     0,   305,
       0,   309,   304,   308,   306
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -526,  -526,  -526,  -526,  -526,  -526,  -526,    17,  -526,  -526,
      72,  -526,   -88,   260,   270,   411,    34,   365,   369,   382,
     368,   371,  -526,   -35,   133,  -526,   -96,   -48,    13,  -526,
     174,  -526,    83,  -526,   -56,  -526,  -526,  -526,   197,  -257,
     -99,  -526,  -187,  -526,   527,  -153,  -526,   -57,  -526,  -526,
     -27,   -61,   -60,  -133,  -143,  -526,  -337,  -526,   -42,  -111,
    -224,  -229,   167,  -525,  -526,   131,  -142,   153,  -526,   314,
    -155,    10,  -526,   440,  -237,  -526,  -526,  -526,  -526,   612,
    -526,   554
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   107,   108,    85,   109,   110,   517,   518,   111,   338,
     164,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   165,   166,   298,   167,   126,    34,    64,
      51,   141,   142,    36,    37,    38,   150,    39,   269,   270,
     128,   415,   416,    40,    86,    87,   314,    41,    42,    43,
     388,    66,    67,   139,   366,   257,   258,   259,   519,   390,
     237,   476,   477,   478,   479,   480,    44,   169,   170,   171,
      76,   172,   173,   174,   175,   176,   304,   177,     2,    45,
      46,    54
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     129,   127,   138,   256,   202,   137,   148,   286,    65,   272,
     131,   374,   411,    53,   265,   130,    50,   236,   382,   585,
      57,   384,   125,   125,   311,   210,    84,   312,   231,    55,
     238,   316,   407,   412,   135,    60,   311,   143,    84,    60,
     301,   302,   303,   129,   127,    79,   408,   184,   585,    59,
     484,    60,   271,   185,    78,   309,  -105,   486,   203,    77,
     246,   310,    79,   248,    81,   285,   228,    80,   235,   133,
     129,   127,   129,   127,   544,   144,   243,    58,    50,   245,
     545,   247,   244,   249,   146,   134,    82,    60,   147,   375,
     137,   132,   168,   376,   129,   127,   326,   232,   202,    60,
     202,   373,   140,   378,    60,    60,   276,   218,   219,   315,
      61,    56,   340,   413,    61,    83,  -147,    84,   418,   125,
      62,   437,   367,   342,   343,   344,    61,   272,   398,   112,
     112,  -105,   414,   362,   313,   151,    62,   129,   127,   129,
     127,  -105,   129,   127,   392,   229,   183,   125,    63,   435,
     224,   436,   327,    63,   328,   251,   316,   329,    80,   199,
     112,   232,    61,    60,   200,   374,   195,   197,   198,   178,
     271,    84,    62,   235,   385,    35,    35,   137,   234,    61,
      61,   227,   423,   425,    62,   112,   168,   220,   221,    62,
      62,   232,   389,    60,   225,   389,   211,   513,    11,    12,
      13,   212,   213,   299,   137,   226,   450,   299,   244,   -89,
      68,    69,   129,   127,   180,    73,    74,    75,   230,   143,
     181,   143,   321,   322,   112,   232,   112,   300,   391,   -89,
     299,    30,   465,    70,    71,   182,   457,   411,   385,   386,
     387,   240,   234,   471,   417,   500,   446,    62,    62,   546,
     428,   311,   495,    84,   112,   496,   353,   354,   112,   112,
     112,   112,   112,   112,   272,   501,   438,   239,   385,  -226,
    -226,   573,   234,   112,   367,   567,   568,   574,    62,   125,
     264,   214,   215,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   241,   233,  -234,   389,  -234,   234,   271,   216,   217,
     555,   581,   137,   557,     1,   584,   244,    52,   242,   137,
     255,   180,   554,    62,    60,   389,   250,   308,   148,   379,
     266,   383,   112,   330,   533,   508,   222,   223,   552,   275,
     339,   244,   182,   474,   584,   475,   333,   299,   193,   129,
     127,   280,   272,    72,   277,   112,   602,   278,   135,   395,
     396,   279,   547,    52,   232,   499,    60,   372,    52,   299,
     440,   448,   449,    52,   299,   452,   281,   112,   125,    52,
     381,   497,   498,   381,   149,   282,   112,   129,   127,   112,
     505,   299,   112,   335,   397,   271,   334,   112,   404,    61,
     244,   341,   413,   389,   514,   515,   112,   255,   112,    62,
     137,   232,   193,    60,   244,   363,   523,   524,   507,   299,
     393,   389,   389,   204,   205,   206,   542,   112,   419,   377,
     421,   429,   430,   112,   563,   299,   394,   129,   127,   125,
     112,   385,   363,   387,   399,   234,   405,   512,   232,   400,
     556,    62,   570,   571,   558,   433,   605,   299,   426,    52,
     406,   193,   420,   125,   267,   606,   299,   125,   589,   590,
     417,   593,   595,   417,   345,   346,   244,   232,   431,    60,
     608,   299,   610,   299,   434,   112,   347,   348,   385,   529,
     387,   207,   234,   182,   112,   208,   112,   209,    62,   441,
     442,   458,   456,   443,   112,   444,   462,   453,   454,   470,
     459,   112,   112,   381,   129,   127,   472,   247,   487,   488,
     193,   491,   492,   112,   112,   233,  -232,   493,  -232,   234,
     408,   489,   502,   510,   490,    62,   525,   445,   112,   232,
     528,    60,   530,   193,   534,   112,   112,   535,   539,   255,
     543,   550,   551,   564,   385,   549,   387,   565,   234,   255,
     575,   255,   569,   572,    62,   193,   576,   136,   255,  -214,
     112,   577,   580,   503,   112,   582,   498,   193,   381,   586,
     193,   587,   522,   112,   600,   193,   601,   611,   597,   356,
     526,   612,   112,   527,   357,   359,   193,   318,   319,   360,
     532,   323,   324,   494,   538,    11,    12,    13,   358,   179,
     548,   381,   521,   307,    48,   193,   385,  -234,  -234,   145,
     234,   193,     0,     0,     0,     0,     0,     0,   193,   349,
     350,   351,   352,     0,     0,     0,     0,     0,    30,     0,
       0,     0,     0,     0,  -214,  -214,  -214,  -214,  -214,     0,
       0,     0,     0,     0,    62,     0,     0,   559,   560,   561,
     562,     0,     0,     0,     0,     0,   578,     0,     0,   579,
       0,     0,     0,   381,     0,     0,     0,   381,     0,     0,
       0,     0,   193,     0,   193,     0,     0,     0,     0,     0,
       0,     0,   193,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   596,     0,     0,   598,   381,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   588,     0,   381,   591,
       0,     0,     0,     0,     0,     0,   193,     0,     0,     0,
       0,     0,     0,   193,     0,     0,     0,     0,     0,   603,
     604,     0,     0,     0,     0,   607,     0,   609,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   613,   152,   614,   153,     0,    90,    91,    92,    93,
      94,   193,    95,    96,     0,     0,     0,     0,     0,     0,
     193,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,    97,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,   154,
     155,   156,     0,   157,  -285,  -285,  -285,   158,   159,   160,
     161,    29,    98,    30,    99,    31,    32,    33,     0,   100,
       0,     0,     0,     0,     0,     0,  -285,   162,   101,   102,
     103,   104,   105,   106,     0,     0,     0,     0,   305,     0,
     153,   163,    90,    91,    92,    93,    94,     0,    95,    96,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
       0,     0,     0,     0,     0,     0,     0,     0,     4,    97,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,   154,   155,   156,     0,   157,
    -285,  -285,  -285,   158,   159,   160,   161,    29,    98,    30,
      99,    31,    32,    33,     0,   100,     0,     0,     0,     0,
       0,     0,  -285,   306,   101,   102,   103,   104,   105,   106,
     297,     0,     0,     0,   511,     0,    89,   163,    90,    91,
      92,    93,    94,     0,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,    97,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    98,    30,    99,    31,    32,    33,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
     101,   102,   103,   104,   105,   106,     0,     0,     0,     0,
     305,     0,   153,   163,    90,    91,    92,    93,    94,     0,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   432,     0,   153,     0,    90,    91,    92,
      93,    94,     0,    95,    96,     0,     0,   154,   155,   156,
       0,   157,  -285,  -285,  -285,   158,   159,   160,   161,     0,
      98,     0,    99,     0,    97,     0,     0,   100,     0,     0,
       0,     0,     0,     0,  -285,     0,   101,   102,   103,   104,
     105,   106,     0,     0,     0,     0,     0,     0,     0,   163,
     154,   155,   156,     0,   157,  -285,  -285,  -285,   158,   159,
     160,   161,     0,    98,     0,    99,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,  -285,     0,   101,
     102,   103,   104,   105,   106,     0,     0,     0,     0,   283,
       0,    89,   163,    90,    91,    92,    93,    94,     0,    95,
      96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   305,     0,    89,
      97,    90,    91,    92,    93,    94,     0,    95,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,    99,     0,     0,     0,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,   101,   102,   103,   104,   105,
     106,     0,     0,     0,     0,     0,     0,    98,   284,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,    89,
       0,    90,    91,    92,    93,    94,   163,    95,    96,     0,
       0,   186,   187,   188,   189,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,    89,
       0,    90,    91,    92,    93,    94,     0,    95,    96,     0,
       0,   186,   187,   188,   189,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,    99,
       0,     0,     0,     0,   100,     0,   540,     0,     0,     0,
       0,     0,   541,   101,   102,   103,   104,   105,   106,     0,
       0,   190,   191,     0,     0,   192,   332,    98,     0,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,   273,   101,   102,   103,   104,   105,   106,     0,
       0,   190,   191,     0,     0,   192,   274,    89,     0,    90,
      91,    92,    93,    94,     0,    95,    96,     0,     0,   186,
     187,   188,   189,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,    89,     0,    90,
      91,    92,    93,    94,     0,    95,    96,     0,     0,   186,
     187,   188,   189,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     0,    99,     0,     0,
       0,     0,   100,   331,     0,     0,     0,     0,     0,     0,
       0,   101,   102,   103,   104,   105,   106,     0,     0,   190,
     191,     0,     0,   192,   332,    98,     0,    99,     0,     0,
       0,     0,   100,     0,     0,   439,     0,     0,     0,     0,
       0,   101,   102,   103,   104,   105,   106,     0,     0,   190,
     191,     0,     0,   192,   332,    89,     0,    90,    91,    92,
      93,    94,     0,    95,    96,     0,     0,   186,   187,   188,
     189,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,    89,     0,    90,    91,    92,
      93,    94,     0,    95,    96,     0,     0,   186,   187,   188,
     189,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,    99,     0,     0,     0,     0,
     100,     0,   447,     0,     0,     0,     0,     0,     0,   101,
     102,   103,   104,   105,   106,     0,     0,   190,   191,     0,
       0,   192,   332,    98,     0,    99,     0,     0,     0,     0,
     100,     0,     0,   451,     0,     0,     0,     0,     0,   101,
     102,   103,   104,   105,   106,     0,     0,   190,   191,     0,
       0,   192,   332,    89,     0,    90,    91,    92,    93,    94,
       0,    95,    96,     0,     0,   186,   187,   188,   189,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,    89,     0,    90,    91,    92,    93,    94,
       0,    95,    96,     0,     0,   186,   187,   188,   189,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,    99,     0,     0,     0,     0,   100,     0,
       0,     0,     0,   455,     0,     0,     0,   101,   102,   103,
     104,   105,   106,     0,     0,   190,   191,     0,     0,   192,
     332,    98,     0,    99,     0,     0,     0,     0,   100,   504,
       0,     0,     0,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,     0,     0,   190,   191,     0,     0,   192,
     332,    89,     0,    90,    91,    92,    93,    94,     0,    95,
      96,     0,     0,   186,   187,   188,   189,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,    89,     0,    90,    91,    92,    93,    94,     0,    95,
      96,     0,     0,   186,   187,   188,   189,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,    99,     0,     0,     0,     0,   100,   506,     0,     0,
       0,     0,     0,     0,     0,   101,   102,   103,   104,   105,
     106,   509,     0,   190,   191,     0,     0,   192,   332,    98,
       0,    99,     0,     0,     0,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,   101,   102,   103,   104,   105,
     106,     0,     0,   190,   191,     0,     0,   192,   274,    89,
       0,    90,    91,    92,    93,    94,     0,    95,    96,     0,
       0,   186,   187,   188,   189,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,    89,
       0,    90,    91,    92,    93,    94,     0,    95,    96,     0,
       0,   186,   187,   188,   189,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,   531,
       0,     0,     0,   101,   102,   103,   104,   105,   106,     0,
       0,   190,   191,     0,     0,   192,   332,    98,     0,    99,
       0,     0,     0,     0,   100,   566,     0,     0,     0,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,     0,
       0,   190,   191,     0,     0,   192,   274,    89,     0,    90,
      91,    92,    93,    94,     0,    95,    96,     0,     0,   186,
     187,   188,   189,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,    89,     0,    90,
      91,    92,    93,    94,     0,    95,    96,     0,     0,   186,
     187,   188,   189,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     0,    99,     0,     0,
       0,     0,   100,     0,   540,     0,     0,     0,     0,     0,
       0,   101,   102,   103,   104,   105,   106,     0,     0,   190,
     191,     0,     0,   192,   332,    98,     0,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,   102,   103,   104,   105,   106,     0,     0,   190,
     191,     0,     0,   192,   332,    89,     0,    90,    91,    92,
      93,    94,     0,    95,    96,     0,     0,   186,   187,   188,
     189,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,    89,     0,    90,    91,    92,
      93,    94,     0,    95,    96,     0,     0,   186,   187,   188,
     189,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,    99,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,   101,
     102,   103,   104,   105,   106,     0,     0,   190,   191,     0,
       0,   192,   427,    98,     0,    99,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,   101,
     102,   103,   104,   105,   106,     0,     0,   190,   191,     0,
       0,   192,   274,    89,     0,    90,    91,    92,    93,    94,
       0,    95,    96,     0,     0,   186,   187,   188,   189,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,    89,     0,    90,    91,    92,    93,    94,
       0,    95,    96,     0,     0,   186,   187,   188,   189,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,    99,     0,   260,     0,    89,   100,    90,
      91,    92,    93,    94,     0,    95,    96,   101,   102,   103,
     104,   105,   106,     0,     0,   190,   191,     0,     0,   192,
       0,    98,     0,    99,     0,     0,    97,     0,   100,   261,
       0,     0,     0,    11,    12,    13,     0,   101,   102,   103,
     104,   105,   106,     0,     0,   190,   191,    89,     0,    90,
      91,    92,    93,    94,     0,    95,    96,     0,     0,   186,
     187,     0,     0,     0,     0,    98,    30,    99,     0,     0,
       0,     0,   100,     0,     0,     0,    97,   262,     0,     4,
       0,   101,   263,   103,   104,   105,   106,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,   516,     0,     0,
       0,     0,     0,     0,     0,    98,     0,    99,     0,    88,
      30,    89,   100,    90,    91,    92,    93,    94,     0,    95,
      96,   101,   102,   103,   104,   105,   106,     0,     0,   190,
     191,     0,     0,     0,     0,     0,     0,     0,     0,     4,
      97,     0,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
      30,    99,     0,   201,     0,    89,   100,    90,    91,    92,
      93,    94,     0,    95,    96,   101,   102,   103,   104,   105,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,    97,     0,     0,     0,     0,     0,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,    30,    99,     0,   368,     0,    89,
     100,    90,    91,    92,    93,    94,     0,    95,    96,   101,
     102,   103,   104,   105,   106,     0,     0,     0,     0,   260,
       0,    89,     0,    90,    91,    92,    93,    94,    97,    95,
      96,   369,     0,     0,     0,    11,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,   401,     0,     0,     0,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,    98,    30,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,   370,
       0,     0,     0,   101,   371,   103,   104,   105,   106,    98,
      30,    99,     0,     0,     0,     0,   100,     0,     0,     0,
       0,   402,     0,     0,     0,   101,   403,   103,   104,   105,
     106,   260,     0,    89,     0,    90,    91,    92,    93,    94,
       0,    95,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   466,     0,    89,     0,    90,    91,    92,
      93,    94,    97,    95,    96,   460,     0,     0,     0,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,     0,   467,     0,     0,
       0,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,    98,    30,    99,     0,     0,     0,     0,   100,     0,
       0,     0,     0,   461,     0,     0,     0,   101,   102,   103,
     104,   105,   106,    98,    30,    99,     0,     0,     0,     0,
     100,     0,     0,     0,     0,   468,     0,     0,     0,   101,
     469,   103,   104,   105,   106,   260,     0,    89,     0,    90,
      91,    92,    93,    94,     0,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   260,     0,    89,
       0,    90,    91,    92,    93,    94,    97,    95,    96,   536,
       0,     0,     0,    11,    12,    13,     0,     0,     0,   260,
       0,    89,     0,    90,    91,    92,    93,    94,    97,    95,
      96,     0,     0,     0,     0,    11,    12,    13,     0,     0,
       0,     0,     0,     0,     0,    98,    30,    99,     0,     0,
      97,     0,   100,     0,     0,     0,     0,   537,     0,     0,
       0,   101,   102,   103,   104,   105,   106,    98,    30,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,    98,
       0,    99,     0,     0,     0,     0,   100,     0,     0,     0,
     474,     0,   475,   380,   583,   101,   102,   103,   104,   105,
     106,   260,     0,    89,     0,    90,    91,    92,    93,    94,
       0,    95,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   473,     0,    89,     0,    90,    91,    92,
      93,    94,    97,    95,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   520,     0,    89,     0,    90,
      91,    92,    93,    94,    97,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,    99,     0,     0,    97,     0,   100,     0,
       0,     0,   474,     0,   475,   380,   599,   101,   102,   103,
     104,   105,   106,    98,     0,    99,     0,     0,     0,     0,
     100,     0,     0,     0,   474,     0,   475,   380,     0,   101,
     102,   103,   104,   105,   106,    98,     0,    99,     0,     0,
       0,     0,   100,     0,     0,     0,   474,     0,   475,   380,
       0,   101,   102,   103,   104,   105,   106,   336,     0,    89,
       0,    90,    91,    92,    93,    94,     0,    95,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   260,
       0,    89,     0,    90,    91,    92,    93,    94,    97,    95,
      96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   260,     0,    89,     0,    90,    91,    92,    93,    94,
      97,    95,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,    99,
       0,     0,    97,     0,   100,   337,     0,     0,     0,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,    98,
       0,    99,     0,     0,     0,     0,   100,     0,     0,     0,
       0,     0,     0,   380,     0,   101,   102,   103,   104,   105,
     106,    98,     0,    99,     0,     0,     0,     0,   100,   592,
       0,     0,     0,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,   260,     0,    89,     0,    90,    91,    92,
      93,    94,     0,    95,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,    89,     0,    90,
      91,    92,    93,    94,    97,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   317,     0,    89,
       0,    90,    91,    92,    93,    94,    97,    95,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,    99,     0,     0,    97,     0,
     100,   594,     0,     0,     0,     0,     0,     0,     0,   101,
     102,   103,   104,   105,   106,    98,     0,    99,     0,   320,
       0,    89,   100,    90,    91,    92,    93,    94,     0,    95,
      96,   101,   102,   103,   104,   105,   106,    98,     0,    99,
       0,   325,     0,    89,   100,    90,    91,    92,    93,    94,
      97,    95,    96,   101,   102,   103,   104,   105,   106,     0,
       0,     0,     0,   260,     0,    89,     0,    90,    91,    92,
      93,    94,    97,    95,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,    99,     0,   355,    97,    89,   100,    90,    91,    92,
      93,    94,     0,    95,    96,   101,   102,   103,   104,   105,
     106,    98,     0,    99,     0,   361,     0,    89,   100,    90,
      91,    92,    93,    94,    97,    95,    96,   101,   102,   103,
     104,   105,   106,    98,     0,    99,     0,   422,     0,    89,
     100,    90,    91,    92,    93,    94,    97,    95,    96,   101,
     102,   103,   104,   105,   106,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,    99,     0,   424,    97,    89,
     100,    90,    91,    92,    93,    94,     0,    95,    96,   101,
     102,   103,   104,   105,   106,    98,     0,    99,     0,     0,
       0,    89,   100,    90,    91,    92,    93,    94,    97,    95,
      96,   101,   102,   103,   104,   105,   106,    98,     0,    99,
       0,     0,     0,    89,   100,    90,    91,    92,    93,    94,
      97,    95,    96,   101,   102,   103,   104,   105,   106,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,    99,
       0,     0,    97,    89,   100,    90,    91,    92,    93,    94,
       0,    95,    96,   101,   102,   103,   104,   105,   106,    98,
       0,    99,     0,     0,     0,     0,   100,     0,     0,     0,
       0,     0,    97,   445,     0,   101,   102,   103,   104,   105,
     106,    98,     0,    99,     0,     0,     0,    89,   194,    90,
      91,    92,    93,    94,     0,    95,    96,   101,   102,   103,
     104,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,    99,     0,     0,    97,     0,   196,     0,
       0,     0,     0,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   481,     0,    60,
       0,     0,     0,     0,     0,    98,     0,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,   102,   103,   104,   105,   106,     4,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,   364,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,    30,     0,
      31,     0,    33,     0,   385,   365,     0,     0,   234,     0,
       0,     0,     0,     4,    62,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,   409,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,    30,     0,    31,     0,    33,     0,
     233,   365,     0,     0,   234,     0,     0,     0,     0,     4,
      62,     0,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,   409,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,     0,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   410,     4,     0,     0,     0,     0,
       0,     0,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     553,     4,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,   252,     0,   253,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,    30,     0,    31,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,  -285,     0,     4,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,   463,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,    30,     0,
      31,     0,    33,     0,     0,   254,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    47,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,    30,     0,    31,     0,    33,     0,
       0,   464,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     0,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,    30,     0,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,   482,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,    30,     0,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,   483,   482,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,    30,     0,    31,     0,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,   485,   268,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
      30,     0,    31,     0,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     0,     0,   409,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     0,    30,     0,     0,
      32,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,     4,    32,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,    30,     0,    31,
      32,    33,     4,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,    29,     0,    30,     0,    31,     0,    33,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30
};

static const yytype_int16 yycheck[] =
{
      57,    57,    62,   146,   100,    62,    67,   162,    35,   151,
      58,   235,   269,     3,   147,    57,     3,   128,   247,   544,
      78,   250,    57,    58,     1,   113,     3,   180,   127,     3,
     129,   184,    86,     1,    61,     3,     1,    64,     3,     3,
      63,    64,    65,   100,   100,    85,   100,    80,   573,     1,
     387,     3,   151,    86,     1,    80,     3,   394,   100,    49,
      80,    86,    85,    80,    54,   161,    20,    54,   128,    59,
     127,   127,   129,   129,    80,    65,   136,    78,    65,   139,
      86,   101,   139,   100,    78,     1,    85,     3,    82,    78,
     147,   100,    79,    82,   151,   151,   192,     1,   194,     3,
     196,   234,     1,     1,     3,     3,   154,    15,    16,    86,
      78,    85,   208,    81,    78,     1,    85,     3,   273,   154,
      88,    86,   233,   211,   212,   213,    78,   269,   261,    57,
      58,    78,   100,   229,   182,    85,    88,   194,   194,   196,
     196,    88,   199,   199,   255,    99,   101,   182,   100,   304,
      87,   306,   194,   100,   196,   145,   309,   199,   145,    78,
      88,     1,    78,     3,    78,   389,    94,    95,    96,     1,
     269,     3,    88,   233,    78,     1,     2,   234,    82,    78,
      78,    19,   278,   279,    88,   113,   173,    95,    96,    88,
      88,     1,   252,     3,    97,   255,    88,   434,    39,    40,
      41,    93,    94,    80,   261,    98,    83,    80,   265,    80,
      36,    37,   269,   269,    80,    41,    42,    43,    79,   246,
      86,   248,   188,   189,   152,     1,   154,   100,   255,   100,
      80,    72,   375,     3,     4,   101,   369,   494,    78,    79,
      80,    80,    82,   376,   271,    80,   334,    88,    88,   478,
     100,     1,   407,     3,   182,   410,   222,   223,   186,   187,
     188,   189,   190,   191,   406,   100,   314,    79,    78,    79,
      80,    80,    82,   201,   385,   512,   513,    86,    88,   314,
     147,    89,    90,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,    79,    78,    79,   364,    81,    82,   406,    13,    14,
     497,   540,   369,   500,     0,   544,   373,     3,    79,   376,
     146,    80,     1,    88,     3,   385,   101,    86,   389,   246,
      85,   248,   260,   200,   467,   431,    17,    18,   493,    81,
     207,   398,   101,    82,   573,    84,    79,    80,    88,   406,
     406,     3,   494,    39,    81,   283,   585,    78,   385,    79,
      80,    78,   101,    49,     1,   413,     3,   234,    54,    80,
      81,    79,    80,    59,    80,    81,   100,   305,   413,    65,
     247,    80,    81,   250,    70,   100,   314,   444,   444,   317,
      79,    80,   320,     3,   261,   494,    79,   325,   265,    78,
     457,     3,    81,   463,   439,   440,   334,   233,   336,    88,
     467,     1,   152,     3,   471,    79,   451,   452,    79,    80,
      79,   481,   482,    10,    11,    12,   474,   355,   275,     7,
     277,   298,   299,   361,    79,    80,    80,   494,   494,   474,
     368,    78,    79,    80,    83,    82,     1,   434,     1,    83,
     498,    88,    79,    80,   502,   302,    79,    80,   100,   145,
      85,   201,    81,   498,   150,    79,    80,   502,   564,   565,
     497,   567,   568,   500,   214,   215,   533,     1,    78,     3,
      79,    80,    79,    80,    78,   413,   216,   217,    78,    79,
      80,    78,    82,   101,   422,    82,   424,    84,    88,    79,
      79,    83,   369,    79,   432,    80,   373,    79,    79,   376,
      83,   439,   440,   380,   571,   571,    79,   101,     3,    83,
     260,    83,    83,   451,   452,    78,    79,    86,    81,    82,
     100,   398,    81,    63,   401,    88,    83,    85,   466,     1,
      83,     3,    79,   283,    83,   473,   474,    83,   100,   375,
       3,    83,    83,    78,    78,    79,    80,    78,    82,   385,
      83,   387,    81,    81,    88,   305,    83,     1,   394,     3,
     498,    83,    83,   420,   502,    83,    81,   317,   445,    61,
     320,    61,   449,   511,    83,   325,    83,   100,   571,   224,
     457,   100,   520,   460,   225,   227,   336,   186,   187,   228,
     467,   190,   191,   406,   471,    39,    40,    41,   226,    82,
     479,   478,   445,   173,     2,   355,    78,    79,    80,    65,
      82,   361,    -1,    -1,    -1,    -1,    -1,    -1,   368,   218,
     219,   220,   221,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    -1,   504,   505,   506,
     507,    -1,    -1,    -1,    -1,    -1,   533,    -1,    -1,   536,
      -1,    -1,    -1,   540,    -1,    -1,    -1,   544,    -1,    -1,
      -1,    -1,   422,    -1,   424,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   569,    -1,    -1,   572,   573,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   563,    -1,   585,   566,
      -1,    -1,    -1,    -1,    -1,    -1,   466,    -1,    -1,    -1,
      -1,    -1,    -1,   473,    -1,    -1,    -1,    -1,    -1,   586,
     587,    -1,    -1,    -1,    -1,   592,    -1,   594,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   608,     1,   610,     3,    -1,     5,     6,     7,     8,
       9,   511,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
     520,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    91,    92,    -1,    -1,    -1,    -1,     1,    -1,
       3,   100,     5,     6,     7,     8,     9,    -1,    11,    12,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    92,
     101,    -1,    -1,    -1,     1,    -1,     3,   100,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
       1,    -1,     3,   100,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,    -1,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    58,    59,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      71,    -1,    73,    -1,    32,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    -1,    71,    -1,    73,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,     1,
      -1,     3,   100,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
      32,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    71,   100,    73,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,     3,
      -1,     5,     6,     7,     8,     9,   100,    11,    12,    -1,
      -1,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,     3,
      -1,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,
      -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    92,    -1,
      -1,    95,    96,    -1,    -1,    99,   100,    71,    -1,    73,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    92,    -1,
      -1,    95,    96,    -1,    -1,    99,   100,     3,    -1,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,     3,    -1,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    -1,
      -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    92,    -1,    -1,    95,
      96,    -1,    -1,    99,   100,    71,    -1,    73,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    92,    -1,    -1,    95,
      96,    -1,    -1,    99,   100,     3,    -1,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,     3,    -1,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    73,    -1,    -1,    -1,    -1,
      78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    -1,    -1,    95,    96,    -1,
      -1,    99,   100,    71,    -1,    73,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    -1,    -1,    95,    96,    -1,
      -1,    99,   100,     3,    -1,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,     3,    -1,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    73,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,    -1,    -1,    95,    96,    -1,    -1,    99,
     100,    71,    -1,    73,    -1,    -1,    -1,    -1,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,    -1,    -1,    95,    96,    -1,    -1,    99,
     100,     3,    -1,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,     3,    -1,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    73,    -1,    -1,    -1,    -1,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      92,    63,    -1,    95,    96,    -1,    -1,    99,   100,    71,
      -1,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      92,    -1,    -1,    95,    96,    -1,    -1,    99,   100,     3,
      -1,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,     3,
      -1,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    -1,
      -1,    95,    96,    -1,    -1,    99,   100,    71,    -1,    73,
      -1,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    -1,
      -1,    95,    96,    -1,    -1,    99,   100,     3,    -1,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,     3,    -1,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    -1,
      -1,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    92,    -1,    -1,    95,
      96,    -1,    -1,    99,   100,    71,    -1,    73,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    92,    -1,    -1,    95,
      96,    -1,    -1,    99,   100,     3,    -1,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,     3,    -1,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    73,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    -1,    -1,    95,    96,    -1,
      -1,    99,   100,    71,    -1,    73,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    -1,    -1,    95,    96,    -1,
      -1,    99,   100,     3,    -1,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,     3,    -1,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    73,    -1,     1,    -1,     3,    78,     5,
       6,     7,     8,     9,    -1,    11,    12,    87,    88,    89,
      90,    91,    92,    -1,    -1,    95,    96,    -1,    -1,    99,
      -1,    71,    -1,    73,    -1,    -1,    32,    -1,    78,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    87,    88,    89,
      90,    91,    92,    -1,    -1,    95,    96,     3,    -1,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    32,    83,    -1,    31,
      -1,    87,    88,    89,    90,    91,    92,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,     1,
      72,     3,    78,     5,     6,     7,     8,     9,    -1,    11,
      12,    87,    88,    89,    90,    91,    92,    -1,    -1,    95,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    73,    -1,     1,    -1,     3,    78,     5,     6,     7,
       8,     9,    -1,    11,    12,    87,    88,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    -1,     1,    -1,     3,
      78,     5,     6,     7,     8,     9,    -1,    11,    12,    87,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,     1,
      -1,     3,    -1,     5,     6,     7,     8,     9,    32,    11,
      12,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    71,
      72,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      92,     1,    -1,     3,    -1,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,    -1,     5,     6,     7,
       8,     9,    32,    11,    12,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    72,    73,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,    71,    72,    73,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,     1,    -1,     3,    -1,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
      -1,     5,     6,     7,     8,     9,    32,    11,    12,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,     1,
      -1,     3,    -1,     5,     6,     7,     8,     9,    32,    11,
      12,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,    -1,
      32,    -1,    78,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    92,    71,    72,    73,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    71,
      -1,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      82,    -1,    84,    85,    86,    87,    88,    89,    90,    91,
      92,     1,    -1,     3,    -1,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,    -1,     5,     6,     7,
       8,     9,    32,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,
       6,     7,     8,     9,    32,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    73,    -1,    -1,    32,    -1,    78,    -1,
      -1,    -1,    82,    -1,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    71,    -1,    73,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    82,    -1,    84,    85,    -1,    87,
      88,    89,    90,    91,    92,    71,    -1,    73,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    82,    -1,    84,    85,
      -1,    87,    88,    89,    90,    91,    92,     1,    -1,     3,
      -1,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,    -1,     5,     6,     7,     8,     9,    32,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,    -1,     5,     6,     7,     8,     9,
      32,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,
      -1,    -1,    32,    -1,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    71,
      -1,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,    91,
      92,    71,    -1,    73,    -1,    -1,    -1,    -1,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,     1,    -1,     3,    -1,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,
       6,     7,     8,     9,    32,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
      -1,     5,     6,     7,     8,     9,    32,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    73,    -1,    -1,    32,    -1,
      78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    71,    -1,    73,    -1,     1,
      -1,     3,    78,     5,     6,     7,     8,     9,    -1,    11,
      12,    87,    88,    89,    90,    91,    92,    71,    -1,    73,
      -1,     1,    -1,     3,    78,     5,     6,     7,     8,     9,
      32,    11,    12,    87,    88,    89,    90,    91,    92,    -1,
      -1,    -1,    -1,     1,    -1,     3,    -1,     5,     6,     7,
       8,     9,    32,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    73,    -1,     1,    32,     3,    78,     5,     6,     7,
       8,     9,    -1,    11,    12,    87,    88,    89,    90,    91,
      92,    71,    -1,    73,    -1,     1,    -1,     3,    78,     5,
       6,     7,     8,     9,    32,    11,    12,    87,    88,    89,
      90,    91,    92,    71,    -1,    73,    -1,     1,    -1,     3,
      78,     5,     6,     7,     8,     9,    32,    11,    12,    87,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    73,    -1,     1,    32,     3,
      78,     5,     6,     7,     8,     9,    -1,    11,    12,    87,
      88,    89,    90,    91,    92,    71,    -1,    73,    -1,    -1,
      -1,     3,    78,     5,     6,     7,     8,     9,    32,    11,
      12,    87,    88,    89,    90,    91,    92,    71,    -1,    73,
      -1,    -1,    -1,     3,    78,     5,     6,     7,     8,     9,
      32,    11,    12,    87,    88,    89,    90,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,
      -1,    -1,    32,     3,    78,     5,     6,     7,     8,     9,
      -1,    11,    12,    87,    88,    89,    90,    91,    92,    71,
      -1,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    32,    85,    -1,    87,    88,    89,    90,    91,
      92,    71,    -1,    73,    -1,    -1,    -1,     3,    78,     5,
       6,     7,     8,     9,    -1,    11,    12,    87,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    73,    -1,    -1,    32,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    92,    31,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      74,    -1,    76,    -1,    78,    79,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    31,    88,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    74,    -1,    76,    -1,
      78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,    31,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    31,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    74,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    31,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     0,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    74,    -1,    76,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    72,    -1,    -1,
      75,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    31,    75,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      75,    76,    31,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    70,    -1,    72,    -1,    74,    -1,    76,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   171,   180,     1,    31,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    70,
      72,    74,    75,    76,   130,   132,   135,   136,   137,   139,
     145,   149,   150,   151,   168,   181,   182,     0,   181,     1,
     130,   132,   171,   173,   183,     3,    85,    78,    78,     1,
       3,    78,    88,   100,   131,   152,   153,   154,   132,   132,
       3,     4,   171,   132,   132,   132,   172,   173,     1,    85,
     130,   173,    85,     1,     3,   105,   146,   147,     1,     3,
       5,     6,     7,     8,     9,    11,    12,    32,    71,    73,
      78,    87,    88,    89,    90,    91,    92,   103,   104,   106,
     107,   110,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   129,   136,   142,   149,
     160,   129,   100,   173,     1,   152,     1,   149,   154,   155,
       1,   133,   134,   152,   173,   183,    78,    82,   153,   171,
     138,    85,     1,     3,    58,    59,    60,    62,    66,    67,
      68,    69,    86,   100,   112,   125,   126,   128,   130,   169,
     170,   171,   173,   174,   175,   176,   177,   179,     1,   146,
      80,    86,   101,   101,    80,    86,    15,    16,    17,    18,
      95,    96,    99,   115,    78,   112,    78,   112,   112,    78,
      78,     1,   128,   160,    10,    11,    12,    78,    82,    84,
     114,    88,    93,    94,    89,    90,    13,    14,    15,    16,
      95,    96,    17,    18,    87,    97,    98,    19,    20,    99,
      79,   142,     1,    78,    82,   154,   161,   162,   142,    79,
      80,    79,    79,   154,   149,   154,    80,   101,    80,   100,
     101,   173,     1,     3,    79,   132,   156,   157,   158,   159,
       1,    35,    83,    88,   126,   155,    85,   171,     1,   140,
     141,   142,   168,    86,   100,    81,   129,    81,    78,    78,
       3,   100,   100,     1,   100,   128,   172,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   101,   127,    80,
     100,    63,    64,    65,   178,     1,    86,   175,    86,    80,
      86,     1,   147,   129,   148,    86,   147,     1,   117,   117,
       1,   118,   118,   117,   117,     1,   128,   160,   160,   160,
     126,    79,   100,    79,    79,     3,     1,    79,   111,   126,
     128,     3,   114,   114,   114,   115,   115,   116,   116,   117,
     117,   117,   117,   118,   118,     1,   119,   120,   121,   122,
     123,     1,   128,    79,     1,    79,   156,   161,     1,    35,
      83,    88,   126,   155,   162,    78,    82,     7,     1,   134,
      85,   126,   163,   134,   163,    78,    79,    80,   152,   154,
     161,   152,   161,    79,    80,    79,    80,   126,   155,    83,
      83,    35,    83,    88,   126,     1,    85,    86,   100,     1,
      86,   141,     1,    81,   100,   143,   144,   152,   172,   169,
      81,   169,     1,   128,     1,   128,   100,   100,   100,   126,
     126,    78,     1,   169,    78,   172,   172,    86,   129,    81,
      81,    79,    79,    79,    80,    85,   114,    80,    79,    80,
      83,    81,    81,    79,    79,    83,   126,   155,    83,    83,
      35,    83,   126,     1,    79,   156,     1,    35,    83,    88,
     126,   155,    79,     1,    82,    84,   163,   164,   165,   166,
     167,     1,     1,    57,   158,    57,   158,     3,    83,   126,
     126,    83,    83,    86,   140,   172,   172,    80,    81,   129,
      80,   100,    81,   169,    79,    79,    79,    79,   128,    63,
      63,     1,   130,   176,   125,   125,    59,   108,   109,   160,
       1,   164,   126,   125,   125,    83,   126,   126,    83,    79,
      79,    83,   126,   155,    83,    83,    35,    83,   126,   100,
      80,    86,   129,     3,    80,    86,   163,   101,   167,    79,
      83,    83,   172,    86,     1,   144,   129,   144,   129,   169,
     169,   169,   169,    79,    78,    78,    79,   176,   176,    81,
      79,    80,    81,    80,    86,    83,    83,    83,   126,   126,
      83,   163,    83,    86,   163,   165,    61,    61,   169,   128,
     128,   169,    79,   128,    79,   128,   126,   109,   126,    86,
      83,    83,   163,   169,   169,    79,    79,   169,    79,   169,
      79,   100,   100,   169,   169
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   102,   103,   103,   103,   103,   103,   103,   104,   104,
     104,   105,   106,   106,   107,   108,   108,   109,   109,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   111,
     111,   111,   112,   112,   112,   112,   112,   112,   112,   113,
     113,   113,   113,   113,   113,   114,   114,   115,   115,   115,
     115,   116,   116,   116,   116,   117,   117,   117,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   119,   119,   119,
     119,   119,   120,   120,   121,   121,   122,   122,   123,   123,
     124,   124,   125,   125,   125,   125,   125,   126,   126,   126,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   128,   128,   129,   130,   131,   130,   130,   130,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   133,
     133,   133,   134,   134,   134,   135,   135,   135,   135,   135,
     135,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   137,   138,   137,   137,
     137,   137,   139,   139,   140,   140,   141,   141,   141,   141,
     142,   142,   142,   142,   143,   143,   143,   144,   144,   144,
     144,   145,   145,   145,   145,   145,   145,   145,   146,   146,
     146,   148,   147,   147,   147,   149,   149,   149,   149,   150,
     150,   151,   151,   152,   152,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   154,   154,   154,   154,   154,   155,   155,   156,   156,
     156,   157,   157,   157,   158,   158,   158,   158,   158,   159,
     159,   160,   160,   161,   161,   161,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   163,   163,   163,   163,   164,   164,   164,   164,   164,
     165,   166,   166,   167,   167,   168,   169,   169,   169,   169,
     169,   169,   170,   170,   170,   171,   172,   173,   173,   173,
     174,   174,   175,   175,   176,   176,   176,   177,   177,   177,
     177,   177,   177,   178,   178,   178,   178,   178,   178,   178,
     178,   179,   179,   179,   179,   179,   179,   180,   180,   181,
     181,   182,   182,   182,   182,   182,   182,   183,   183
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
       1,     1,     1,     1,     1,     1,     6,     0,     7,     2,
       7,     6,     1,     1,     1,     2,     2,     3,     1,     2,
       2,     1,     2,     1,     1,     3,     3,     2,     3,     1,
       3,     4,     5,     5,     6,     2,     4,     5,     1,     3,
       3,     0,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     4,     4,     2,     1,     1,     3,     3,     4,     6,
       5,     5,     6,     5,     4,     4,     4,     3,     4,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     3,     1,
       3,     1,     3,     3,     2,     2,     1,     2,     2,     1,
       3,     2,     1,     2,     1,     1,     3,     2,     3,     5,
       4,     5,     4,     3,     3,     3,     4,     6,     5,     5,
       6,     4,     4,     2,     3,     3,     4,     3,     4,     4,
       2,     3,     4,     3,     1,     2,     1,     4,     3,     3,
       2,     1,     2,     3,     2,     7,     1,     1,     1,     1,
       3,     1,     3,     4,     3,     0,     0,     4,     5,     5,
       1,     2,     1,     1,     1,     2,     2,     7,     5,     5,
       5,     5,     7,     5,     7,     6,     7,     6,     7,     7,
       5,     3,     2,     2,     2,     3,     3,     3,     2,     1,
       1,     4,     3,     3,     3,     3,     2,     1,     2
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
#line 2934 "parserBison.tab.c"
    break;

  case 88: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 214 "parserBison.y"
                                                                     {printf("ABIEL TODAVIA MAS MECO3\n");}
#line 2940 "parserBison.tab.c"
    break;

  case 105: /* $@1: %empty  */
#line 243 "parserBison.y"
                                 {/* DONE, ENTRA A TYPE_SPECIFIER */}
#line 2946 "parserBison.tab.c"
    break;

  case 106: /* declaration: declaration_specifiers $@1 init_declarator_list ';'  */
#line 243 "parserBison.y"
                                                                                               {end_declaration();}
#line 2952 "parserBison.tab.c"
    break;

  case 122: /* init_declarator: declarator '=' initializer  */
#line 268 "parserBison.y"
                                     {printf("ABIEL MECO\n");}
#line 2958 "parserBison.tab.c"
    break;

  case 124: /* init_declarator: error '=' initializer  */
#line 270 "parserBison.y"
                                {printf("ABIEL MECO2\n");}
#line 2964 "parserBison.tab.c"
    break;

  case 125: /* storage_class_specifier: TYPEDEF  */
#line 274 "parserBison.y"
                        {typedef_name_flag = 1;}
#line 2970 "parserBison.tab.c"
    break;

  case 131: /* type_specifier: VOID  */
#line 283 "parserBison.y"
               {save_type();}
#line 2976 "parserBison.tab.c"
    break;

  case 132: /* type_specifier: CHAR  */
#line 284 "parserBison.y"
               {save_type();}
#line 2982 "parserBison.tab.c"
    break;

  case 133: /* type_specifier: SHORT  */
#line 285 "parserBison.y"
                {save_type();}
#line 2988 "parserBison.tab.c"
    break;

  case 134: /* type_specifier: INT  */
#line 286 "parserBison.y"
              {save_type();}
#line 2994 "parserBison.tab.c"
    break;

  case 135: /* type_specifier: LONG  */
#line 287 "parserBison.y"
               {save_type();}
#line 3000 "parserBison.tab.c"
    break;

  case 136: /* type_specifier: FLOAT  */
#line 288 "parserBison.y"
                {save_type();}
#line 3006 "parserBison.tab.c"
    break;

  case 137: /* type_specifier: DOUBLE  */
#line 289 "parserBison.y"
                 {save_type();}
#line 3012 "parserBison.tab.c"
    break;

  case 138: /* type_specifier: SIGNED  */
#line 290 "parserBison.y"
                 {save_type();}
#line 3018 "parserBison.tab.c"
    break;

  case 139: /* type_specifier: UNSIGNED  */
#line 291 "parserBison.y"
                   {save_type();}
#line 3024 "parserBison.tab.c"
    break;

  case 140: /* type_specifier: _BOOL  */
#line 292 "parserBison.y"
                {save_type();}
#line 3030 "parserBison.tab.c"
    break;

  case 141: /* type_specifier: _COMPLEX  */
#line 293 "parserBison.y"
                   {save_type();}
#line 3036 "parserBison.tab.c"
    break;

  case 142: /* type_specifier: _IMAGINARY  */
#line 294 "parserBison.y"
                     {save_type();}
#line 3042 "parserBison.tab.c"
    break;

  case 144: /* type_specifier: enum_specifier  */
#line 296 "parserBison.y"
                         {save_type();}
#line 3048 "parserBison.tab.c"
    break;

  case 145: /* type_specifier: TYPEDEF_NAME  */
#line 297 "parserBison.y"
                       {save_type();}
#line 3054 "parserBison.tab.c"
    break;

  case 147: /* $@2: %empty  */
#line 302 "parserBison.y"
                                    {save_identifier_struct_union((yyvsp[0].struct_union_name));}
#line 3060 "parserBison.tab.c"
    break;

  case 148: /* struct_or_union_specifier: struct_or_union STRUCT_ID $@2 prepare_scope '{' struct_declaration_list '}'  */
#line 302 "parserBison.y"
                                                                                                                      {finish_struct_union();}
#line 3066 "parserBison.tab.c"
    break;

  case 149: /* struct_or_union_specifier: struct_or_union STRUCT_ID  */
#line 303 "parserBison.y"
                                    {save_identifier_struct_union((yyvsp[0].struct_union_name));}
#line 3072 "parserBison.tab.c"
    break;

  case 152: /* struct_or_union: STRUCT  */
#line 309 "parserBison.y"
                 {save_struct(); typedef_name_flag = 1;}
#line 3078 "parserBison.tab.c"
    break;

  case 153: /* struct_or_union: UNION  */
#line 310 "parserBison.y"
                {save_union();}
#line 3084 "parserBison.tab.c"
    break;

  case 157: /* struct_declaration: specifier_qualifier_list struct_declarator_list ';'  */
#line 320 "parserBison.y"
                                                              {end_declaration();}
#line 3090 "parserBison.tab.c"
    break;

  case 181: /* $@3: %empty  */
#line 362 "parserBison.y"
                                   {printf("ABIEL MECO\n");}
#line 3096 "parserBison.tab.c"
    break;

  case 184: /* enumerator: error '=' constant_expression  */
#line 364 "parserBison.y"
                                         {printf("ABIEL MECO\n");}
#line 3102 "parserBison.tab.c"
    break;

  case 195: /* direct_declarator: IDENTIFIER  */
#line 390 "parserBison.y"
                     {save_id();}
#line 3108 "parserBison.tab.c"
    break;

  case 270: /* designation: designator_list '='  */
#line 502 "parserBison.y"
                               {printf("ABIEL MECO\n");}
#line 3114 "parserBison.tab.c"
    break;

  case 285: /* prepare_scope: %empty  */
#line 535 "parserBison.y"
         { open_scope(); }
#line 3120 "parserBison.tab.c"
    break;

  case 286: /* finish_scope: %empty  */
#line 539 "parserBison.y"
         { print_symboltables(); close_scope(); }
#line 3126 "parserBison.tab.c"
    break;

  case 303: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 576 "parserBison.y"
                                             {printf("Hola1\n");}
#line 3132 "parserBison.tab.c"
    break;

  case 304: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 577 "parserBison.y"
                                                    {printf("Hola2\n");}
#line 3138 "parserBison.tab.c"
    break;

  case 305: /* iteration_statement: FOR '(' expression_statement expression_statement ')' statement  */
#line 578 "parserBison.y"
                                                                          {printf("Hola3\n");}
#line 3144 "parserBison.tab.c"
    break;

  case 306: /* iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement  */
#line 579 "parserBison.y"
                                                                                     {printf("Hola4\n");}
#line 3150 "parserBison.tab.c"
    break;

  case 307: /* iteration_statement: FOR '(' declaration expression_statement ')' statement  */
#line 580 "parserBison.y"
                                                                 {printf("Hola5\n");}
#line 3156 "parserBison.tab.c"
    break;

  case 308: /* iteration_statement: FOR '(' declaration expression_statement expression ')' statement  */
#line 581 "parserBison.y"
                                                                            {printf("Hola6\n");}
#line 3162 "parserBison.tab.c"
    break;

  case 309: /* iteration_statement: DO error WHILE '(' expression ')' ';'  */
#line 582 "parserBison.y"
                                                 {printf("Hola7\n");}
#line 3168 "parserBison.tab.c"
    break;

  case 310: /* iteration_statement: FOR '(' error ')' statement  */
#line 583 "parserBison.y"
                                       {printf("Hola8\n");}
#line 3174 "parserBison.tab.c"
    break;


#line 3178 "parserBison.tab.c"

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
