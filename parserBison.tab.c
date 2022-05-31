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
  YYSYMBOL_132_2 = 132,                    /* $@2  */
  YYSYMBOL_declaration_specifiers = 133,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 134,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 135,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 136,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 137,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 138, /* struct_or_union_specifier  */
  YYSYMBOL_139_3 = 139,                    /* $@3  */
  YYSYMBOL_struct_or_union = 140,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 141,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 142,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 143, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 144,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 145,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 146,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 147,          /* enumerator_list  */
  YYSYMBOL_enumerator = 148,               /* enumerator  */
  YYSYMBOL_149_4 = 149,                    /* $@4  */
  YYSYMBOL_type_qualifier = 150,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 151,       /* function_specifier  */
  YYSYMBOL_alignment_specifier = 152,      /* alignment_specifier  */
  YYSYMBOL_declarator = 153,               /* declarator  */
  YYSYMBOL_direct_declarator = 154,        /* direct_declarator  */
  YYSYMBOL_pointer = 155,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 156,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 157,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 158,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 159,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 160,          /* identifier_list  */
  YYSYMBOL_type_name = 161,                /* type_name  */
  YYSYMBOL_abstract_declarator = 162,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 163, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 164,              /* initializer  */
  YYSYMBOL_initializer_list = 165,         /* initializer_list  */
  YYSYMBOL_designation = 166,              /* designation  */
  YYSYMBOL_designator_list = 167,          /* designator_list  */
  YYSYMBOL_designator = 168,               /* designator  */
  YYSYMBOL__STATIC_ASSERT_declaration = 169, /* _STATIC_ASSERT_declaration  */
  YYSYMBOL_statement = 170,                /* statement  */
  YYSYMBOL_labeled_statement = 171,        /* labeled_statement  */
  YYSYMBOL_prepare_scope = 172,            /* prepare_scope  */
  YYSYMBOL_finish_scope = 173,             /* finish_scope  */
  YYSYMBOL_compound_statement = 174,       /* compound_statement  */
  YYSYMBOL_block_item_list = 175,          /* block_item_list  */
  YYSYMBOL_block_item = 176,               /* block_item  */
  YYSYMBOL_expression_statement = 177,     /* expression_statement  */
  YYSYMBOL_selection_statement = 178,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 179,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 180,           /* jump_statement  */
  YYSYMBOL_translation_unit_before = 181,  /* translation_unit_before  */
  YYSYMBOL_translation_unit = 182,         /* translation_unit  */
  YYSYMBOL_external_declaration = 183,     /* external_declaration  */
  YYSYMBOL_function_definition = 184,      /* function_definition  */
  YYSYMBOL_declaration_list = 185          /* declaration_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 21 "parserBison.y"

	static void location_print (FILE *out, YYLTYPE const * const loc);
	#define YYLOCATION_PRINT location_print

#line 316 "parserBison.tab.c"

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
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4593

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  330
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  617

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
     229,   233,   234,   238,   242,   242,   243,   243,   244,   245,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     262,   263,   264,   268,   269,   270,   274,   275,   276,   277,
     278,   279,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   301,   302,   302,
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
     582,   583,   587,   588,   589,   590,   591,   592,   596,   601,
     602,   606,   607,   611,   612,   613,   614,   615,   616,   620,
     621
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
  "expression", "constant_expression", "declaration", "$@1", "$@2",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "$@3", "struct_or_union", "struct_declaration_list",
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
  "iteration_statement", "jump_statement", "translation_unit_before",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-519)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-288)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -519,  4187,    64,  3962,  -519,  -519,  -519,  -519,  -519,  -519,
    -519,  -519,  -519,  -519,  -519,  -519,  -519,  -519,  -519,  -519,
    -519,  -519,  -519,  -519,  -519,  -519,  -519,  -519,    13,    57,
    -519,  -519,    65,  -519,  -519,   117,  4483,  4483,  -519,   264,
    -519,  4483,  4483,  4483,  -519,  4131,  -519,  -519,  -519,  -519,
    -519,   169,    71,  -519,  4437,   127,   199,  2460,  3358,     8,
    -519,   221,   225,    96,   242,  4437,     4,    32,  -519,  -519,
    -519,   149,   154,  -519,  -519,  -519,  -519,  -519,  -519,     8,
     784,  -519,  -519,   220,   -38,  -519,   143,   -33,  -519,  2263,
    -519,  -519,  -519,  -519,  -519,  3602,  3624,  3624,  -519,   174,
     182,  2534,  -519,  -519,  -519,  -519,  -519,  -519,  -519,  -519,
    -519,  -519,   551,  -519,  3676,  -519,    90,   184,   280,    36,
     260,   211,   189,   173,   298,    14,  -519,   244,  4521,    45,
    4521,   249,   262,  -519,  -519,   269,   275,   282,  -519,  -519,
     261,  -519,   -58,   -39,  -519,   265,  -519,  4437,  4018,  2608,
       4,   300,  -519,  4357,  1337,   297,  3358,   306,   315,   319,
     408,   313,   317,   631,  -519,  -519,   596,  -519,  -519,   -22,
    -519,  -519,  -519,   -26,  -519,   880,  -519,  -519,  -519,  -519,
       5,   -30,   247,  -519,  3358,  -519,    16,  -519,  3380,  3380,
    3402,  3402,  3380,  3380,  3432,    90,  2534,  -519,  2534,  -519,
    -519,  4521,  3454,  1367,   216,   359,   439,  -519,  -519,  3130,
    3454,   458,  -519,  3676,  3676,  3676,  3676,  3676,  3380,  3380,
    3380,  3380,  3380,  3380,  3402,  3402,  3476,  3476,  3476,  3476,
    3476,  3506,  -519,  -519,   385,  3794,  2630,   278,  -519,   109,
    -519,  -519,   459,  -519,  -519,  -519,  -519,  -519,   258,  3222,
     258,  -519,  3222,  -519,   289,  -519,  -519,   321,   389,   393,
    -519,   231,  2105,  2950,  -519,   394,   397,  2722,   480,   401,
     -46,  3850,  -519,   111,  -519,  -519,    80,  1072,   410,  1072,
    3528,  3550,   395,  -519,  -519,  2135,  -519,   101,  -519,  -519,
    -519,  -519,  -519,  -519,  -519,  -519,  -519,  -519,  -519,  -519,
    3454,  3454,  -519,   424,  1115,   426,  -519,  2233,  -519,  -519,
    -519,    23,  -519,   406,  -519,  -519,  3358,  -519,  -519,  3676,
     280,   280,  2386,    36,    36,   280,   280,  1465,   235,   429,
     435,   441,   430,  -519,  -519,  -519,  3580,  -519,  1495,  -519,
     255,  -519,   147,  -519,  -519,  -519,  -519,    90,    90,   184,
     184,   280,   280,   280,   280,    36,    36,  2358,   260,   211,
     189,   173,   298,  1593,   281,  -519,   495,  -519,   445,   451,
    1623,  2950,  -519,   449,   450,  2744,   109,  4074,  2836,   455,
     417,  -519,  3086,  -519,  -519,  -519,  -519,  3738,  -519,  4243,
    -519,   328,  -519,  -519,  -519,  -519,  4300,  -519,   532,   453,
    2950,  -519,  -519,  3454,  -519,   456,   457,   452,  4394,  -519,
    -519,   442,  -519,  -519,   284,  3358,  -519,   129,  -519,   462,
    -519,  -519,  1072,  -519,  1721,   293,  1751,   295,  -519,    80,
    -519,  -519,  -519,  3454,  1849,   482,   976,  -519,  -519,  -519,
    -519,  3358,  3358,   463,   463,  -519,  3678,  3108,  -519,  -519,
    -519,  3454,  -519,  3358,  3358,  -519,  -519,  -519,   467,  2950,
    -519,  -519,  3454,  -519,   475,   502,  -519,   481,  1879,  2950,
    -519,   476,   484,  2858,   469,  1239,  3358,   568,  -519,    42,
    3222,    -7,  -519,   528,   431,  -519,  -519,  -519,  -519,  -519,
    -519,   493,   496,  -519,  -519,  -519,  3906,  -519,  -519,   116,
    3358,  -519,   116,  -519,  3358,  -519,  1072,  1072,  1072,  1072,
     303,   500,   507,  1977,  1211,  1211,  -519,  -519,   508,   312,
    -519,   510,  2007,   133,  -519,  -519,  -519,  -519,   509,   511,
    -519,  -519,  -519,  -519,   512,  2950,  -519,  -519,  3454,  -519,
     513,  -519,  3222,  -519,   514,  -519,  2972,  -519,  -519,  -519,
    -519,  -519,  -519,  -519,  -519,  -519,   518,  -519,  -519,  -519,
    -519,   540,   542,  -519,  -519,  1072,  3454,  3454,  1072,  3244,
    3266,  3454,  -519,  3678,  3454,  2994,  -519,  -519,  -519,  -519,
     521,   529,  -519,  -519,  -519,  -519,  -519,  3222,  1072,  1072,
    -519,   316,   325,  -519,  1072,   345,  1072,   348,  -519,  -519,
    -519,  -519,  -519,  -519,  -519,  -519,  -519,   515,   531,  -519,
    1072,  -519,  1072,  -519,  -519,  -519,  -519
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     286,     0,     0,     0,   146,   126,   127,   128,   130,   131,
     190,   186,   187,   188,   141,   133,   134,   135,   136,   139,
     140,   137,   138,   132,   142,   143,   153,   154,     0,     0,
     189,   191,     0,   129,   322,     0,   111,   112,   144,   286,
     145,   115,   117,   119,   108,     0,   319,   321,     1,   286,
     329,     0,     0,   328,   286,   176,     0,     0,     0,   286,
     196,     0,     0,     0,     0,   286,   195,     0,   110,   113,
     286,   150,     0,   114,   116,   118,   318,   320,   327,     0,
       0,   330,   326,     0,     0,    11,   184,     0,   179,     0,
       2,     8,     9,    12,    13,     0,     0,     0,    10,     0,
       0,     0,    39,    40,    41,    42,    43,    44,    19,     3,
       4,     7,    32,    45,     0,    47,    51,    55,    58,    67,
      72,    74,    76,    78,    80,    82,   103,     0,   162,     0,
     164,     0,     0,   109,   325,     0,     0,     0,   217,   214,
     213,   105,     0,     0,   120,   124,   324,   286,     0,     0,
     194,     0,   286,     0,     0,     2,     0,     0,     0,     0,
       0,     0,     0,     0,   287,   295,    45,    87,   101,     0,
     293,   294,   277,     0,   278,     0,   291,   279,   280,   282,
       0,     0,     0,   177,     0,   182,     0,   172,     0,     0,
       0,     0,     0,     0,     0,    54,     0,    36,     0,    33,
      34,     0,     0,     0,     0,     0,     0,    25,    26,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   193,   161,     0,     0,     0,     0,   232,   236,
     163,   192,     0,   211,   197,   216,   218,   212,     0,     0,
       0,   107,     0,   323,     0,   230,   208,     0,     0,   220,
     222,     0,     0,     0,   198,    40,     0,     0,     0,     0,
       0,     0,   155,     0,   159,   287,   297,     0,     0,     0,
       0,     0,     0,   313,   314,     0,   315,     0,   288,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    90,
       0,     0,   296,     0,     0,     0,   287,     0,   287,   292,
     178,     0,   174,     0,   181,   185,     0,   173,   180,     0,
      65,    66,     0,    70,    71,    63,    64,     0,     0,     0,
       0,     0,     0,     6,    89,     5,     0,    24,     0,    21,
       0,    29,     0,    23,    48,    49,    50,    52,    53,    56,
      57,    61,    62,    59,    60,    68,    69,     0,    73,    75,
      77,    79,    81,     0,     0,   261,     0,   254,     0,     0,
       0,     0,   238,    40,     0,     0,   234,     0,     0,     0,
       0,   122,     0,   265,   125,   121,   123,     0,   210,     0,
     228,     0,   229,   225,   226,   207,     0,   209,     0,     0,
       0,   199,   206,     0,   205,    40,     0,     0,     0,   287,
     160,     0,   287,   156,     0,     0,   157,     0,   165,   170,
     290,   283,     0,   285,     0,     0,     0,     0,   312,   317,
     316,    88,   102,     0,     0,     0,     0,   281,   289,   175,
     183,     0,     0,    37,     0,    38,     0,     0,    46,    31,
      22,     0,    20,     0,     0,   255,   237,   258,     0,     0,
     239,   245,     0,   244,     0,     0,   256,     0,     0,     0,
     246,    40,     0,     0,     0,     0,     0,     0,   267,     0,
       0,     0,   272,     0,     0,   221,   224,   219,   223,   231,
     201,     0,     0,   202,   204,   287,     0,   152,   147,     0,
       0,   168,     0,   158,     0,   284,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,    86,     0,     0,
      15,     0,     0,     0,    30,    85,    83,   241,     0,     0,
     243,   259,   257,   260,     0,     0,   247,   253,     0,   252,
       0,   276,     0,   264,     0,   275,     0,   262,   266,   271,
     273,   211,   200,   203,   151,   149,     0,   167,   171,   166,
     169,   301,   299,   302,   300,     0,     0,     0,     0,     0,
       0,     0,    14,     0,     0,     0,    27,   240,   242,   249,
       0,     0,   250,   270,   274,   263,   269,     0,     0,     0,
     304,     0,     0,   311,     0,     0,     0,     0,    18,    16,
      17,    28,   248,   251,   268,   303,   298,     0,     0,   308,
       0,   306,     0,   310,   305,   309,   307
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -519,  -519,  -519,  -519,  -519,  -519,  -519,    38,  -519,  -519,
     230,  -519,   -52,   -87,   212,   333,   -17,   387,   414,   386,
     399,   416,  -519,    47,   227,  -519,   -95,   -35,     1,  -519,
    -519,   110,  -519,     6,  -519,   -56,  -519,  -519,  -519,   236,
    -259,  -117,  -519,  -266,  -519,   564,  -161,  -519,   -57,  -519,
    -519,   -32,   -59,    28,  -129,  -139,  -519,  -309,  -519,    -8,
     -98,  -227,  -234,   201,  -518,  -519,   168,  -146,   -24,  -519,
      30,  -137,    11,  -519,   477,  -348,  -519,  -519,  -519,  -519,
    -519,   605,  -519,   586
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   108,   109,    86,   110,   111,   519,   520,   112,   340,
     166,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   167,   168,   300,   169,   127,    34,    63,
      64,    51,   143,   144,    36,    37,    38,   152,    39,   271,
     272,   129,   417,   418,    40,    87,    88,   316,    41,    42,
      43,   390,    66,    67,   140,   368,   259,   260,   261,   521,
     392,   239,   478,   479,   480,   481,   482,    44,   171,   172,
     173,    76,   174,   175,   176,   177,   178,   306,   179,     2,
      45,    46,    47,    54
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     130,   128,   195,    65,    50,   138,   204,   274,   150,   258,
     376,   233,   413,   240,    53,   384,    55,   313,   386,    85,
     267,   314,   248,   132,   313,   318,    85,   288,   587,   136,
       1,   238,   145,    52,   230,    60,   273,   303,   304,   305,
     409,   250,   182,   249,   130,   128,   234,   186,   183,   131,
     311,   220,   221,   187,   410,    81,   312,   587,   301,    80,
      78,   251,   212,   184,    48,    82,    50,   195,   287,    72,
     134,   130,   128,   130,   128,   476,   146,   477,   302,    52,
     486,   170,   148,   246,    52,   182,   149,   488,   515,    52,
     139,   310,   138,   205,   549,    52,   130,   128,    56,   328,
     151,   204,   317,   204,   126,   126,   184,   375,   133,   439,
      61,    35,   414,   231,    60,   342,   195,   556,    59,    60,
      60,   278,   546,   235,  -233,   274,  -233,   236,   547,   347,
     348,   222,   223,    62,   400,    57,   364,   369,   420,   130,
     128,   130,   128,    58,   130,   128,    68,    69,    81,   315,
     318,    73,    74,    75,   273,    35,    80,   237,   253,   394,
     -89,   344,   345,   346,   376,   245,   569,   570,   247,   437,
      79,   438,  -106,   323,   324,   195,   170,    52,   213,   138,
     -89,   301,   269,   214,   215,   425,   427,   377,   329,    61,
     330,   378,   415,   331,    61,    61,   141,   415,   195,    62,
      84,   430,    85,   126,    62,    62,   138,   355,   356,   502,
     246,   416,    83,   575,   130,   128,   145,  -104,   145,   576,
     195,   180,   135,    85,    60,   393,   137,   301,  -215,   503,
     452,   126,   195,   557,  -148,   195,   559,   413,   467,   153,
     195,   419,   459,   142,   185,    60,   548,  -106,   313,   473,
      85,   195,   201,   421,   381,   423,   385,  -106,   257,   380,
     202,    60,   274,   237,    11,    12,    13,    70,    71,  -104,
     195,   228,   497,   216,   217,   498,   195,   224,   225,   234,
     435,   440,   391,   195,   448,   391,   227,   113,   113,   369,
     234,   273,    60,   218,   219,   335,   301,    30,   226,    61,
      11,    12,    13,  -215,  -215,  -215,  -215,  -215,   583,    62,
     397,   398,   586,    62,   138,   301,   442,   229,   246,   113,
      61,   138,   234,   232,    60,   197,   199,   200,   241,   234,
      62,    60,   150,    30,   450,   451,    61,   195,   510,   195,
     535,   586,   242,   246,   113,   257,    62,   195,   243,    62,
     274,   130,   128,   604,   244,   136,   235,  -235,   554,  -235,
     236,   301,   454,   126,   499,   500,   252,   387,   388,   389,
      62,   236,   507,   301,   509,   301,   266,    62,   277,   273,
     501,   195,   565,   301,   113,   268,   113,   279,   195,   130,
     128,   572,   573,   280,   391,   607,   301,   281,   505,   387,
    -227,  -227,   246,   236,   608,   301,   387,  -235,  -235,    62,
     236,   282,   138,   283,   113,   391,   246,   284,   113,   113,
     113,   113,   113,   113,   610,   301,   195,   612,   301,   332,
     349,   350,   234,   113,    60,   195,   341,   514,   336,   130,
     128,   544,   337,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   343,   126,   374,   365,   558,   379,   419,   395,   560,
     419,   591,   592,   396,   595,   597,   383,   401,   246,   383,
     402,   407,   561,   562,   563,   564,   408,   257,   516,   517,
     399,   422,   113,   391,   406,   428,   234,   257,    60,   257,
     525,   526,   433,   234,   436,    60,   257,   184,   443,   387,
     446,   391,   391,   236,   444,   113,   130,   128,   249,    62,
     445,   320,   321,   126,   455,   325,   326,   431,   432,   234,
     456,    60,   460,   461,   474,   489,   490,   113,   495,   493,
     494,   590,   410,   504,   593,   512,   113,   126,   447,   113,
     527,   126,   113,   351,   352,   353,   354,   113,   530,   536,
     532,   206,   207,   208,   605,   606,   113,   537,   113,   541,
     609,   545,   611,   387,   365,   389,   552,   236,   566,   553,
     387,   531,   389,    62,   236,   567,   615,   113,   616,   571,
      62,   574,   577,   113,   578,   579,   582,   584,   458,   500,
     113,   588,   464,   589,   602,   472,   387,   551,   389,   383,
     236,   599,   603,   358,   360,   613,    62,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   491,   361,   209,
     492,   614,   285,   210,    90,   211,    91,    92,    93,    94,
      95,   359,    96,    97,   496,   113,   362,   181,   523,   550,
      77,   147,   309,     0,   113,     0,   113,     0,     0,     0,
       0,     0,     0,    98,   113,     0,     0,     0,     0,     0,
       0,   113,   113,     0,   383,     0,     0,     0,   524,     0,
       0,     0,     0,   113,   113,     0,   528,     0,     0,   529,
       0,     0,     0,     0,     0,     0,   534,   299,   113,     0,
     540,     0,    99,     0,   100,   113,   113,   383,     0,   101,
       0,     0,     0,     0,     0,     0,     0,     0,   102,   103,
     104,   105,   106,   107,     0,     0,     0,     0,     0,     0,
     113,   286,     0,     0,   113,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,     0,     0,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   580,     0,     0,   581,     0,     0,     0,   383,
       0,     0,     0,   383,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   154,     0,   155,     0,    91,
      92,    93,    94,    95,     0,    96,    97,     0,   598,     0,
       0,   600,   383,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   383,     4,    98,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,   156,   157,   158,     0,   159,  -286,  -286,  -286,
     160,   161,   162,   163,    29,    99,    30,   100,    31,    32,
      33,     0,   101,     0,     0,     0,     0,     0,     0,  -286,
     164,   102,   103,   104,   105,   106,   107,     0,     0,     0,
       0,   307,     0,   155,   165,    91,    92,    93,    94,    95,
       0,    96,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,    98,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,   156,   157,
     158,     0,   159,  -286,  -286,  -286,   160,   161,   162,   163,
      29,    99,    30,   100,    31,    32,    33,     0,   101,     0,
       0,     0,     0,     0,     0,  -286,   308,   102,   103,   104,
     105,   106,   107,     0,     0,     0,     0,   513,     0,    90,
     165,    91,    92,    93,    94,    95,     0,    96,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,    98,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,    99,    30,   100,
      31,    32,    33,     0,   101,     0,     0,     0,     0,     0,
       0,     0,     0,   102,   103,   104,   105,   106,   107,     0,
       0,     0,     0,   307,     0,   155,   165,    91,    92,    93,
      94,    95,     0,    96,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   434,     0,   155,     0,
      91,    92,    93,    94,    95,     0,    96,    97,     0,     0,
     156,   157,   158,     0,   159,  -286,  -286,  -286,   160,   161,
     162,   163,     0,    99,     0,   100,     0,    98,     0,     0,
     101,     0,     0,     0,     0,     0,     0,  -286,     0,   102,
     103,   104,   105,   106,   107,     0,     0,     0,     0,     0,
       0,     0,   165,   156,   157,   158,     0,   159,  -286,  -286,
    -286,   160,   161,   162,   163,     0,    99,     0,   100,     0,
       0,     0,     0,   101,     0,     0,     0,     0,     0,     0,
    -286,     0,   102,   103,   104,   105,   106,   107,     0,     0,
       0,     0,   307,     0,    90,   165,    91,    92,    93,    94,
      95,     0,    96,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    98,    91,    92,    93,    94,    95,     0,
      96,    97,     0,     0,   188,   189,   190,   191,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    99,     0,   100,     0,     0,     0,     0,   101,
       0,     0,     0,     0,     0,     0,     0,     0,   102,   103,
     104,   105,   106,   107,     0,     0,     0,     0,     0,     0,
      99,   165,   100,     0,     0,     0,     0,   101,     0,   542,
       0,     0,     0,     0,     0,   543,   102,   103,   104,   105,
     106,   107,     0,     0,   192,   193,     0,     0,   194,   334,
      90,     0,    91,    92,    93,    94,    95,     0,    96,    97,
       0,     0,   188,   189,   190,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
      90,     0,    91,    92,    93,    94,    95,     0,    96,    97,
       0,     0,   188,   189,   190,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,     0,     0,     0,     0,     0,     0,    99,     0,
     100,     0,     0,     0,     0,   101,     0,     0,     0,     0,
       0,     0,     0,   275,   102,   103,   104,   105,   106,   107,
       0,     0,   192,   193,     0,     0,   194,   276,    99,     0,
     100,     0,     0,     0,     0,   101,   333,     0,     0,     0,
       0,     0,     0,     0,   102,   103,   104,   105,   106,   107,
       0,     0,   192,   193,     0,     0,   194,   334,    90,     0,
      91,    92,    93,    94,    95,     0,    96,    97,     0,     0,
     188,   189,   190,   191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,    90,     0,
      91,    92,    93,    94,    95,     0,    96,    97,     0,     0,
     188,   189,   190,   191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
       0,     0,     0,     0,     0,     0,    99,     0,   100,     0,
       0,     0,     0,   101,     0,     0,   441,     0,     0,     0,
       0,     0,   102,   103,   104,   105,   106,   107,     0,     0,
     192,   193,     0,     0,   194,   334,    99,     0,   100,     0,
       0,     0,     0,   101,     0,   449,     0,     0,     0,     0,
       0,     0,   102,   103,   104,   105,   106,   107,     0,     0,
     192,   193,     0,     0,   194,   334,    90,     0,    91,    92,
      93,    94,    95,     0,    96,    97,     0,     0,   188,   189,
     190,   191,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    90,     0,    91,    92,
      93,    94,    95,     0,    96,    97,     0,     0,   188,   189,
     190,   191,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,   100,     0,     0,     0,
       0,   101,     0,     0,   453,     0,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,     0,     0,   192,   193,
       0,     0,   194,   334,    99,     0,   100,     0,     0,     0,
       0,   101,     0,     0,     0,     0,   457,     0,     0,     0,
     102,   103,   104,   105,   106,   107,     0,     0,   192,   193,
       0,     0,   194,   334,    90,     0,    91,    92,    93,    94,
      95,     0,    96,    97,     0,     0,   188,   189,   190,   191,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,    90,     0,    91,    92,    93,    94,
      95,     0,    96,    97,     0,     0,   188,   189,   190,   191,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,     0,     0,     0,     0,
       0,     0,    99,     0,   100,     0,     0,     0,     0,   101,
     506,     0,     0,     0,     0,     0,     0,     0,   102,   103,
     104,   105,   106,   107,     0,     0,   192,   193,     0,     0,
     194,   334,    99,     0,   100,     0,     0,     0,     0,   101,
     508,     0,     0,     0,     0,     0,     0,     0,   102,   103,
     104,   105,   106,   107,     0,     0,   192,   193,     0,     0,
     194,   334,    90,     0,    91,    92,    93,    94,    95,     0,
      96,    97,     0,     0,   188,   189,   190,   191,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,    90,     0,    91,    92,    93,    94,    95,     0,
      96,    97,     0,     0,   188,   189,   190,   191,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,   511,     0,     0,     0,     0,     0,     0,     0,
      99,     0,   100,     0,     0,     0,     0,   101,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   105,
     106,   107,     0,     0,   192,   193,     0,     0,   194,   276,
      99,     0,   100,     0,     0,     0,     0,   101,     0,     0,
       0,     0,   533,     0,     0,     0,   102,   103,   104,   105,
     106,   107,     0,     0,   192,   193,     0,     0,   194,   334,
      90,     0,    91,    92,    93,    94,    95,     0,    96,    97,
       0,     0,   188,   189,   190,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
      90,     0,    91,    92,    93,    94,    95,     0,    96,    97,
       0,     0,   188,   189,   190,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,     0,     0,     0,     0,     0,     0,    99,     0,
     100,     0,     0,     0,     0,   101,   568,     0,     0,     0,
       0,     0,     0,     0,   102,   103,   104,   105,   106,   107,
       0,     0,   192,   193,     0,     0,   194,   276,    99,     0,
     100,     0,     0,     0,     0,   101,     0,   542,     0,     0,
       0,     0,     0,     0,   102,   103,   104,   105,   106,   107,
       0,     0,   192,   193,     0,     0,   194,   334,    90,     0,
      91,    92,    93,    94,    95,     0,    96,    97,     0,     0,
     188,   189,   190,   191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,    90,     0,
      91,    92,    93,    94,    95,     0,    96,    97,     0,     0,
     188,   189,   190,   191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
       0,     0,     0,     0,     0,     0,    99,     0,   100,     0,
       0,     0,     0,   101,     0,     0,     0,     0,     0,     0,
       0,     0,   102,   103,   104,   105,   106,   107,     0,     0,
     192,   193,     0,     0,   194,   334,    99,     0,   100,     0,
       0,     0,     0,   101,     0,     0,     0,     0,     0,     0,
       0,     0,   102,   103,   104,   105,   106,   107,     0,     0,
     192,   193,     0,     0,   194,   429,    90,     0,    91,    92,
      93,    94,    95,     0,    96,    97,     0,     0,   188,   189,
     190,   191,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    90,     0,    91,    92,
      93,    94,    95,     0,    96,    97,     0,     0,   188,   189,
     190,   191,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,   100,     0,     0,     0,
       0,   101,     0,     0,     0,     0,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,     0,     0,   192,   193,
       0,     0,   194,   276,    99,     0,   100,     0,     0,     0,
       0,   101,     0,     0,     0,     0,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,     0,     0,   192,   193,
       0,    90,   194,    91,    92,    93,    94,    95,     0,    96,
      97,     0,     0,   188,   189,   190,   191,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      98,    91,    92,    93,    94,    95,     0,    96,    97,     0,
       0,   188,   189,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    99,
       0,   100,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,     0,     0,   192,   193,     0,     0,    99,     0,   100,
       0,    89,     0,    90,   101,    91,    92,    93,    94,    95,
       0,    96,    97,   102,   103,   104,   105,   106,   107,     0,
       0,   192,   193,     0,     0,     0,     0,     0,     0,     0,
       0,     4,    98,     0,     0,     0,     0,     0,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    99,    30,   100,     0,   203,     0,    90,   101,    91,
      92,    93,    94,    95,     0,    96,    97,   102,   103,   104,
     105,   106,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,    98,     0,     0,     0,
       0,     0,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,    30,   100,     0,   262,
       0,    90,   101,    91,    92,    93,    94,    95,     0,    96,
      97,   102,   103,   104,   105,   106,   107,     0,     0,     0,
       0,   370,     0,    90,     0,    91,    92,    93,    94,    95,
      98,    96,    97,   263,     0,     0,     0,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,   371,     0,     0,     0,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     0,    99,
      30,   100,     0,     0,     0,     0,   101,     0,     0,     0,
       0,   264,     0,     0,     0,   102,   265,   104,   105,   106,
     107,    99,    30,   100,     0,     0,     0,     0,   101,     0,
       0,     0,     0,   372,     0,     0,     0,   102,   373,   104,
     105,   106,   107,   262,     0,    90,     0,    91,    92,    93,
      94,    95,     0,    96,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   262,     0,    90,     0,    91,
      92,    93,    94,    95,    98,    96,    97,   403,     0,     0,
       0,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,   462,
       0,     0,     0,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,    99,    30,   100,     0,     0,     0,     0,
     101,     0,     0,     0,     0,   404,     0,     0,     0,   102,
     405,   104,   105,   106,   107,    99,    30,   100,     0,     0,
       0,     0,   101,     0,     0,     0,     0,   463,     0,     0,
       0,   102,   103,   104,   105,   106,   107,   468,     0,    90,
       0,    91,    92,    93,    94,    95,     0,    96,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   262,
       0,    90,     0,    91,    92,    93,    94,    95,    98,    96,
      97,   469,     0,     0,     0,    11,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,   538,     0,     0,     0,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,    99,    30,   100,
       0,     0,     0,     0,   101,     0,     0,     0,     0,   470,
       0,     0,     0,   102,   471,   104,   105,   106,   107,    99,
      30,   100,     0,     0,     0,     0,   101,     0,     0,     0,
       0,   539,     0,     0,     0,   102,   103,   104,   105,   106,
     107,   262,     0,    90,     0,    91,    92,    93,    94,    95,
       0,    96,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   262,     0,    90,     0,    91,    92,    93,
      94,    95,    98,    96,    97,     0,     0,     0,     0,    11,
      12,    13,     0,     0,     0,   262,     0,    90,     0,    91,
      92,    93,    94,    95,    98,    96,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    99,    30,   100,     0,     0,    98,     0,   101,     0,
       0,     0,     0,     0,     0,     0,     0,   102,   103,   104,
     105,   106,   107,    99,     0,   100,     0,     0,     0,     0,
     101,     0,     0,     0,   476,     0,   477,   382,   585,   102,
     103,   104,   105,   106,   107,    99,     0,   100,     0,     0,
       0,     0,   101,     0,     0,     0,   476,     0,   477,   382,
     601,   102,   103,   104,   105,   106,   107,   475,     0,    90,
       0,    91,    92,    93,    94,    95,     0,    96,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   522,
       0,    90,     0,    91,    92,    93,    94,    95,    98,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   338,     0,    90,     0,    91,    92,    93,    94,    95,
      98,    96,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    99,     0,   100,
       0,     0,    98,     0,   101,     0,     0,     0,   476,     0,
     477,   382,     0,   102,   103,   104,   105,   106,   107,    99,
       0,   100,     0,     0,     0,     0,   101,     0,     0,     0,
     476,     0,   477,   382,     0,   102,   103,   104,   105,   106,
     107,    99,     0,   100,     0,     0,     0,     0,   101,   339,
       0,     0,     0,     0,     0,     0,     0,   102,   103,   104,
     105,   106,   107,   262,     0,    90,     0,    91,    92,    93,
      94,    95,     0,    96,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   262,     0,    90,     0,    91,
      92,    93,    94,    95,    98,    96,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   262,     0,    90,
       0,    91,    92,    93,    94,    95,    98,    96,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,     0,   100,     0,     0,    98,     0,
     101,     0,     0,     0,     0,     0,     0,   382,     0,   102,
     103,   104,   105,   106,   107,    99,     0,   100,     0,     0,
       0,     0,   101,   594,     0,     0,     0,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,    99,     0,   100,
       0,     0,     0,     0,   101,   596,     0,     0,     0,     0,
       0,     0,     0,   102,   103,   104,   105,   106,   107,    89,
       0,    90,     0,    91,    92,    93,    94,    95,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   319,     0,    90,     0,    91,    92,    93,    94,    95,
      98,    96,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   322,     0,    90,     0,    91,    92,    93,
      94,    95,    98,    96,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    99,
       0,   100,     0,   327,    98,    90,   101,    91,    92,    93,
      94,    95,     0,    96,    97,   102,   103,   104,   105,   106,
     107,    99,     0,   100,     0,   262,     0,    90,   101,    91,
      92,    93,    94,    95,    98,    96,    97,   102,   103,   104,
     105,   106,   107,    99,     0,   100,     0,   357,     0,    90,
     101,    91,    92,    93,    94,    95,    98,    96,    97,   102,
     103,   104,   105,   106,   107,     0,     0,     0,     0,     0,
       0,     0,     0,    99,     0,   100,     0,   363,    98,    90,
     101,    91,    92,    93,    94,    95,     0,    96,    97,   102,
     103,   104,   105,   106,   107,    99,     0,   100,     0,   424,
       0,    90,   101,    91,    92,    93,    94,    95,    98,    96,
      97,   102,   103,   104,   105,   106,   107,    99,     0,   100,
       0,   426,     0,    90,   101,    91,    92,    93,    94,    95,
      98,    96,    97,   102,   103,   104,   105,   106,   107,     0,
       0,     0,     0,     0,     0,     0,     0,    99,     0,   100,
       0,     0,    98,    90,   101,    91,    92,    93,    94,    95,
       0,    96,    97,   102,   103,   104,   105,   106,   107,    99,
       0,   100,     0,     0,     0,    90,   101,    91,    92,    93,
      94,    95,    98,    96,    97,   102,   103,   104,   105,   106,
     107,    99,     0,   100,     0,     0,     0,    90,   101,    91,
      92,    93,    94,    95,    98,    96,    97,   102,   103,   104,
     105,   106,   107,     0,     0,     0,     0,     0,     0,     0,
       0,    99,     0,   100,     0,     0,    98,     0,   101,     0,
       0,     0,     0,     0,     0,   447,     0,   102,   103,   104,
     105,   106,   107,    99,     0,   100,     0,     0,     0,    90,
     196,    91,    92,    93,    94,    95,     0,    96,    97,   102,
     103,   104,   105,   106,   107,    99,     0,   100,     0,     0,
       0,     0,   198,     0,     0,     0,     0,     0,    98,     4,
       0,   102,   103,   104,   105,   106,   107,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,   518,     0,   483,
       0,    60,     0,     0,     0,     0,     0,    99,     0,   100,
      30,     0,     0,     0,   101,     0,     0,     0,     0,     0,
       0,     0,     0,   102,   103,   104,   105,   106,   107,     4,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,   366,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
      30,     0,    31,     0,    33,     0,   387,   367,     0,     0,
     236,     0,     0,     0,     0,     4,    62,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,   411,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,    30,     0,    31,     0,
      33,     0,   235,   367,     0,     0,   236,     0,     0,     0,
       0,     4,    62,     0,     0,     0,     0,     0,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,   411,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,     0,     0,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   412,     4,     0,     0,
       0,     0,     0,     0,     0,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   555,     4,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,   254,
       0,   255,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,    30,     0,    31,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,  -286,     0,     4,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,   465,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
      30,     0,    31,     0,    33,     0,     0,   256,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,  -287,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,    30,     0,    31,     0,
      33,     0,     0,   466,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,    30,     0,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,   484,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,    30,
       0,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
     485,   484,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,    30,     0,    31,     0,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,   487,   270,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,    30,     0,    31,     0,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     0,
       0,     0,     0,     0,     0,   411,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,    30,
       0,     0,    32,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,     4,    32,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,    30,
       0,    31,    32,    33,     4,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,    29,     0,    30,     0,    31,     0,    33,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30
};

static const yytype_int16 yycheck[] =
{
      57,    57,    89,    35,     3,    62,   101,   153,    67,   148,
     237,   128,   271,   130,     3,   249,     3,     1,   252,     3,
     149,   182,    80,    58,     1,   186,     3,   164,   546,    61,
       0,   129,    64,     3,    20,     3,   153,    63,    64,    65,
      86,    80,    80,   101,   101,   101,     1,    80,    86,    57,
      80,    15,    16,    86,   100,    54,    86,   575,    80,    85,
      49,   100,   114,   101,     0,    54,    65,   154,   163,    39,
      59,   128,   128,   130,   130,    82,    65,    84,   100,    49,
     389,    80,    78,   140,    54,    80,    82,   396,   436,    59,
      62,    86,   149,   101,   101,    65,   153,   153,    85,   194,
      70,   196,    86,   198,    57,    58,   101,   236,   100,    86,
      78,     1,     1,    99,     3,   210,   203,     1,     1,     3,
       3,   156,    80,    78,    79,   271,    81,    82,    86,   216,
     217,    95,    96,    88,   263,    78,   231,   235,   275,   196,
     196,   198,   198,    78,   201,   201,    36,    37,   147,   184,
     311,    41,    42,    43,   271,    45,    85,   129,   147,   257,
      80,   213,   214,   215,   391,   137,   514,   515,   140,   306,
       1,   308,     3,   190,   191,   262,   175,   147,    88,   236,
     100,    80,   152,    93,    94,   280,   281,    78,   196,    78,
     198,    82,    81,   201,    78,    78,   100,    81,   285,    88,
       1,   100,     3,   156,    88,    88,   263,   224,   225,    80,
     267,   100,    85,    80,   271,   271,   248,   100,   250,    86,
     307,     1,     1,     3,     3,   257,     1,    80,     3,   100,
      83,   184,   319,   499,    85,   322,   502,   496,   377,    85,
     327,   273,   371,     1,   101,     3,   480,    78,     1,   378,
       3,   338,    78,   277,   248,   279,   250,    88,   148,     1,
      78,     3,   408,   235,    39,    40,    41,     3,     4,   100,
     357,    98,   409,    89,    90,   412,   363,    17,    18,     1,
     304,   316,   254,   370,   336,   257,    97,    57,    58,   387,
       1,   408,     3,    13,    14,    79,    80,    72,    87,    78,
      39,    40,    41,    78,    79,    80,    81,    82,   542,    88,
      79,    80,   546,    88,   371,    80,    81,    19,   375,    89,
      78,   378,     1,    79,     3,    95,    96,    97,    79,     1,
      88,     3,   391,    72,    79,    80,    78,   424,   433,   426,
     469,   575,    80,   400,   114,   235,    88,   434,    79,    88,
     496,   408,   408,   587,    79,   387,    78,    79,   495,    81,
      82,    80,    81,   316,    80,    81,   101,    78,    79,    80,
      88,    82,    79,    80,    79,    80,   149,    88,    81,   496,
     415,   468,    79,    80,   154,    85,   156,    81,   475,   446,
     446,    79,    80,    78,   366,    79,    80,    78,   422,    78,
      79,    80,   459,    82,    79,    80,    78,    79,    80,    88,
      82,     3,   469,   100,   184,   387,   473,   100,   188,   189,
     190,   191,   192,   193,    79,    80,   513,    79,    80,   202,
     218,   219,     1,   203,     3,   522,   209,   436,    79,   496,
     496,   476,     3,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,     3,   415,   236,    79,   500,     7,   499,    79,   504,
     502,   566,   567,    80,   569,   570,   249,    83,   535,   252,
      83,     1,   506,   507,   508,   509,    85,   377,   441,   442,
     263,    81,   262,   465,   267,   100,     1,   387,     3,   389,
     453,   454,    78,     1,    78,     3,   396,   101,    79,    78,
      80,   483,   484,    82,    79,   285,   573,   573,   101,    88,
      79,   188,   189,   476,    79,   192,   193,   300,   301,     1,
      79,     3,    83,    83,    79,     3,    83,   307,    86,    83,
      83,   565,   100,    81,   568,    63,   316,   500,    85,   319,
      83,   504,   322,   220,   221,   222,   223,   327,    83,    83,
      79,    10,    11,    12,   588,   589,   336,    83,   338,   100,
     594,     3,   596,    78,    79,    80,    83,    82,    78,    83,
      78,    79,    80,    88,    82,    78,   610,   357,   612,    81,
      88,    81,    83,   363,    83,    83,    83,    83,   371,    81,
     370,    61,   375,    61,    83,   378,    78,    79,    80,   382,
      82,   573,    83,   226,   228,   100,    88,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   400,   229,    78,
     403,   100,     1,    82,     3,    84,     5,     6,     7,     8,
       9,   227,    11,    12,   408,   415,   230,    83,   447,   481,
      45,    65,   175,    -1,   424,    -1,   426,    -1,    -1,    -1,
      -1,    -1,    -1,    32,   434,    -1,    -1,    -1,    -1,    -1,
      -1,   441,   442,    -1,   447,    -1,    -1,    -1,   451,    -1,
      -1,    -1,    -1,   453,   454,    -1,   459,    -1,    -1,   462,
      -1,    -1,    -1,    -1,    -1,    -1,   469,   101,   468,    -1,
     473,    -1,    71,    -1,    73,   475,   476,   480,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
     500,   100,    -1,    -1,   504,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   513,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   522,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   535,    -1,    -1,   538,    -1,    -1,    -1,   542,
      -1,    -1,    -1,   546,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,   571,    -1,
      -1,   574,   575,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   587,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,     1,    -1,     3,   100,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,     1,    -1,     3,
     100,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    75,    76,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    -1,
      -1,    -1,    -1,     1,    -1,     3,   100,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    -1,    71,    -1,    73,    -1,    32,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    58,    59,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    -1,    71,    -1,    73,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    88,    89,    90,    91,    92,    -1,    -1,
      -1,    -1,     1,    -1,     3,   100,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    32,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    73,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      71,   100,    73,    -1,    -1,    -1,    -1,    78,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    92,    -1,    -1,    95,    96,    -1,    -1,    99,   100,
       3,    -1,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
       3,    -1,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    92,
      -1,    -1,    95,    96,    -1,    -1,    99,   100,    71,    -1,
      73,    -1,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,    92,
      -1,    -1,    95,    96,    -1,    -1,    99,   100,     3,    -1,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,     3,    -1,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,    -1,    -1,
      95,    96,    -1,    -1,    99,   100,    71,    -1,    73,    -1,
      -1,    -1,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,    -1,    -1,
      95,    96,    -1,    -1,    99,   100,     3,    -1,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,     3,    -1,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,    -1,    -1,    95,    96,
      -1,    -1,    99,   100,    71,    -1,    73,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,    -1,    -1,    95,    96,
      -1,    -1,    99,   100,     3,    -1,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,     3,    -1,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    73,    -1,    -1,    -1,    -1,    78,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,    -1,    -1,    95,    96,    -1,    -1,
      99,   100,    71,    -1,    73,    -1,    -1,    -1,    -1,    78,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,    -1,    -1,    95,    96,    -1,    -1,
      99,   100,     3,    -1,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,     3,    -1,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    92,    -1,    -1,    95,    96,    -1,    -1,    99,   100,
      71,    -1,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    92,    -1,    -1,    95,    96,    -1,    -1,    99,   100,
       3,    -1,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
       3,    -1,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      73,    -1,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,    92,
      -1,    -1,    95,    96,    -1,    -1,    99,   100,    71,    -1,
      73,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,    92,
      -1,    -1,    95,    96,    -1,    -1,    99,   100,     3,    -1,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,     3,    -1,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,    -1,    -1,
      95,    96,    -1,    -1,    99,   100,    71,    -1,    73,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,    -1,    -1,
      95,    96,    -1,    -1,    99,   100,     3,    -1,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,     3,    -1,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,    -1,    -1,    95,    96,
      -1,    -1,    99,   100,    71,    -1,    73,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,    -1,    -1,    95,    96,
      -1,     3,    99,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      32,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      92,    -1,    -1,    95,    96,    -1,    -1,    71,    -1,    73,
      -1,     1,    -1,     3,    78,     5,     6,     7,     8,     9,
      -1,    11,    12,    87,    88,    89,    90,    91,    92,    -1,
      -1,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    72,    73,    -1,     1,    -1,     3,    78,     5,
       6,     7,     8,     9,    -1,    11,    12,    87,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,     1,
      -1,     3,    78,     5,     6,     7,     8,     9,    -1,    11,
      12,    87,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,     1,    -1,     3,    -1,     5,     6,     7,     8,     9,
      32,    11,    12,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      92,    71,    72,    73,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,     1,    -1,     3,    -1,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,
       6,     7,     8,     9,    32,    11,    12,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    71,    72,    73,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    92,     1,    -1,     3,
      -1,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
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
       8,     9,    32,    11,    12,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,
       6,     7,     8,     9,    32,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    72,    73,    -1,    -1,    32,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,    71,    -1,    73,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    82,    -1,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    71,    -1,    73,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    82,    -1,    84,    85,
      86,    87,    88,    89,    90,    91,    92,     1,    -1,     3,
      -1,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,    -1,     5,     6,     7,     8,     9,    32,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,    -1,     5,     6,     7,     8,     9,
      32,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,
      -1,    -1,    32,    -1,    78,    -1,    -1,    -1,    82,    -1,
      84,    85,    -1,    87,    88,    89,    90,    91,    92,    71,
      -1,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      82,    -1,    84,    85,    -1,    87,    88,    89,    90,    91,
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
      78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    89,    90,    91,    92,    71,    -1,    73,    -1,    -1,
      -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    92,    71,    -1,    73,
      -1,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,     1,
      -1,     3,    -1,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,    -1,     5,     6,     7,     8,     9,
      32,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      88,    89,    90,    91,    92,    71,    -1,    73,    -1,     1,
      -1,     3,    78,     5,     6,     7,     8,     9,    32,    11,
      12,    87,    88,    89,    90,    91,    92,    71,    -1,    73,
      -1,     1,    -1,     3,    78,     5,     6,     7,     8,     9,
      32,    11,    12,    87,    88,    89,    90,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,
      -1,    -1,    32,     3,    78,     5,     6,     7,     8,     9,
      -1,    11,    12,    87,    88,    89,    90,    91,    92,    71,
      -1,    73,    -1,    -1,    -1,     3,    78,     5,     6,     7,
       8,     9,    32,    11,    12,    87,    88,    89,    90,    91,
      92,    71,    -1,    73,    -1,    -1,    -1,     3,    78,     5,
       6,     7,     8,     9,    32,    11,    12,    87,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    73,    -1,    -1,    32,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,
      90,    91,    92,    71,    -1,    73,    -1,    -1,    -1,     3,
      78,     5,     6,     7,     8,     9,    -1,    11,    12,    87,
      88,    89,    90,    91,    92,    71,    -1,    73,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    32,    31,
      -1,    87,    88,    89,    90,    91,    92,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    59,    -1,     1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,
      72,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    31,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    74,    -1,    76,    -1,    78,    79,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    31,    88,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,
      76,    -1,    78,    79,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    31,    88,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    31,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    31,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    74,    -1,    76,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,     0,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,
      76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    72,
      -1,    -1,    75,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    31,    75,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    75,    76,    31,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    70,    -1,    72,    -1,    74,    -1,    76,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   172,   181,     1,    31,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    70,
      72,    74,    75,    76,   130,   133,   136,   137,   138,   140,
     146,   150,   151,   152,   169,   182,   183,   184,     0,     1,
     130,   133,   172,   174,   185,     3,    85,    78,    78,     1,
       3,    78,    88,   131,   132,   153,   154,   155,   133,   133,
       3,     4,   172,   133,   133,   133,   173,   183,   174,     1,
      85,   130,   174,    85,     1,     3,   105,   147,   148,     1,
       3,     5,     6,     7,     8,     9,    11,    12,    32,    71,
      73,    78,    87,    88,    89,    90,    91,    92,   103,   104,
     106,   107,   110,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   129,   137,   143,
     150,   161,   129,   100,   174,     1,   153,     1,   150,   155,
     156,   100,     1,   134,   135,   153,   174,   185,    78,    82,
     154,   172,   139,    85,     1,     3,    58,    59,    60,    62,
      66,    67,    68,    69,    86,   100,   112,   125,   126,   128,
     130,   170,   171,   172,   174,   175,   176,   177,   178,   180,
       1,   147,    80,    86,   101,   101,    80,    86,    15,    16,
      17,    18,    95,    96,    99,   115,    78,   112,    78,   112,
     112,    78,    78,     1,   128,   161,    10,    11,    12,    78,
      82,    84,   114,    88,    93,    94,    89,    90,    13,    14,
      15,    16,    95,    96,    17,    18,    87,    97,    98,    19,
      20,    99,    79,   143,     1,    78,    82,   155,   162,   163,
     143,    79,    80,    79,    79,   155,   150,   155,    80,   101,
      80,   100,   101,   174,     1,     3,    79,   133,   157,   158,
     159,   160,     1,    35,    83,    88,   126,   156,    85,   172,
       1,   141,   142,   143,   169,    86,   100,    81,   129,    81,
      78,    78,     3,   100,   100,     1,   100,   128,   173,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   101,
     127,    80,   100,    63,    64,    65,   179,     1,    86,   176,
      86,    80,    86,     1,   148,   129,   149,    86,   148,     1,
     117,   117,     1,   118,   118,   117,   117,     1,   128,   161,
     161,   161,   126,    79,   100,    79,    79,     3,     1,    79,
     111,   126,   128,     3,   114,   114,   114,   115,   115,   116,
     116,   117,   117,   117,   117,   118,   118,     1,   119,   120,
     121,   122,   123,     1,   128,    79,     1,    79,   157,   162,
       1,    35,    83,    88,   126,   156,   163,    78,    82,     7,
       1,   135,    85,   126,   164,   135,   164,    78,    79,    80,
     153,   155,   162,   153,   162,    79,    80,    79,    80,   126,
     156,    83,    83,    35,    83,    88,   126,     1,    85,    86,
     100,     1,    86,   142,     1,    81,   100,   144,   145,   153,
     173,   170,    81,   170,     1,   128,     1,   128,   100,   100,
     100,   126,   126,    78,     1,   170,    78,   173,   173,    86,
     129,    81,    81,    79,    79,    79,    80,    85,   114,    80,
      79,    80,    83,    81,    81,    79,    79,    83,   126,   156,
      83,    83,    35,    83,   126,     1,    79,   157,     1,    35,
      83,    88,   126,   156,    79,     1,    82,    84,   164,   165,
     166,   167,   168,     1,     1,    57,   159,    57,   159,     3,
      83,   126,   126,    83,    83,    86,   141,   173,   173,    80,
      81,   129,    80,   100,    81,   170,    79,    79,    79,    79,
     128,    63,    63,     1,   130,   177,   125,   125,    59,   108,
     109,   161,     1,   165,   126,   125,   125,    83,   126,   126,
      83,    79,    79,    83,   126,   156,    83,    83,    35,    83,
     126,   100,    80,    86,   129,     3,    80,    86,   164,   101,
     168,    79,    83,    83,   173,    86,     1,   145,   129,   145,
     129,   170,   170,   170,   170,    79,    78,    78,    79,   177,
     177,    81,    79,    80,    81,    80,    86,    83,    83,    83,
     126,   126,    83,   164,    83,    86,   164,   166,    61,    61,
     170,   128,   128,   170,    79,   128,    79,   128,   126,   109,
     126,    86,    83,    83,   164,   170,   170,    79,    79,   170,
      79,   170,    79,   100,   100,   170,   170
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
     127,   128,   128,   129,   131,   130,   132,   130,   130,   130,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     134,   134,   134,   135,   135,   135,   136,   136,   136,   136,
     136,   136,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   138,   139,   138,
     138,   138,   138,   140,   140,   141,   141,   142,   142,   142,
     142,   143,   143,   143,   143,   144,   144,   144,   145,   145,
     145,   145,   146,   146,   146,   146,   146,   146,   146,   147,
     147,   147,   149,   148,   148,   148,   150,   150,   150,   150,
     151,   151,   152,   152,   153,   153,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   155,   155,   155,   155,   155,   156,   156,   157,
     157,   157,   158,   158,   158,   159,   159,   159,   159,   159,
     160,   160,   161,   161,   162,   162,   162,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   164,   164,   164,   164,   165,   165,   165,   165,
     165,   166,   167,   167,   168,   168,   169,   170,   170,   170,
     170,   170,   170,   171,   171,   171,   172,   173,   174,   174,
     174,   175,   175,   176,   176,   177,   177,   177,   178,   178,
     178,   178,   178,   178,   179,   179,   179,   179,   179,   179,
     179,   179,   180,   180,   180,   180,   180,   180,   181,   182,
     182,   183,   183,   184,   184,   184,   184,   184,   184,   185,
     185
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
       1,     1,     3,     1,     0,     3,     0,     4,     1,     3,
       2,     1,     1,     2,     2,     1,     2,     1,     2,     1,
       1,     3,     3,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     6,     0,     7,
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
       7,     5,     3,     2,     2,     2,     3,     3,     3,     1,
       2,     1,     1,     4,     3,     3,     3,     3,     2,     1,
       2
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
#line 2940 "parserBison.tab.c"
    break;

  case 88: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 214 "parserBison.y"
                                                                     {printf("ABIEL TODAVIA MAS MECO3\n");}
#line 2946 "parserBison.tab.c"
    break;

  case 104: /* $@1: %empty  */
#line 242 "parserBison.y"
                                 {printf("-------- SE PUDRIO ESTO BROTHER DE ALEJANDRO\n");}
#line 2952 "parserBison.tab.c"
    break;

  case 106: /* $@2: %empty  */
#line 243 "parserBison.y"
                                 {printf("--------------ENTRA A DECLARATION SPECIFIERS\n");}
#line 2958 "parserBison.tab.c"
    break;

  case 107: /* declaration: declaration_specifiers $@2 init_declarator_list ';'  */
#line 243 "parserBison.y"
                                                                                                                      {end_declaration();}
#line 2964 "parserBison.tab.c"
    break;

  case 109: /* declaration: declaration_specifiers error ';'  */
#line 245 "parserBison.y"
                                           {printf("CULPA DE ALEBEEEEEEEEEEEEEEEEEEEEEEEEEEE\n");}
#line 2970 "parserBison.tab.c"
    break;

  case 120: /* init_declarator_list: init_declarator  */
#line 262 "parserBison.y"
                          {printf("ENTRA A LA LISTA\n");}
#line 2976 "parserBison.tab.c"
    break;

  case 123: /* init_declarator: declarator '=' initializer  */
#line 268 "parserBison.y"
                                     {printf("ABIEL MECO\n");}
#line 2982 "parserBison.tab.c"
    break;

  case 124: /* init_declarator: declarator  */
#line 269 "parserBison.y"
                     {printf("ESTO ES UN DECLARATOR CULPA MIA\n");}
#line 2988 "parserBison.tab.c"
    break;

  case 125: /* init_declarator: error '=' initializer  */
#line 270 "parserBison.y"
                                {printf("ABIEL MECO2\n");}
#line 2994 "parserBison.tab.c"
    break;

  case 126: /* storage_class_specifier: TYPEDEF  */
#line 274 "parserBison.y"
                        {typedef_name_flag = 1;}
#line 3000 "parserBison.tab.c"
    break;

  case 132: /* type_specifier: VOID  */
#line 283 "parserBison.y"
               {printf("********************************** VOID\n"); save_type();}
#line 3006 "parserBison.tab.c"
    break;

  case 133: /* type_specifier: CHAR  */
#line 284 "parserBison.y"
               {save_type();}
#line 3012 "parserBison.tab.c"
    break;

  case 134: /* type_specifier: SHORT  */
#line 285 "parserBison.y"
                {save_type();}
#line 3018 "parserBison.tab.c"
    break;

  case 135: /* type_specifier: INT  */
#line 286 "parserBison.y"
              {save_type();}
#line 3024 "parserBison.tab.c"
    break;

  case 136: /* type_specifier: LONG  */
#line 287 "parserBison.y"
               {save_type();}
#line 3030 "parserBison.tab.c"
    break;

  case 137: /* type_specifier: FLOAT  */
#line 288 "parserBison.y"
                {save_type();}
#line 3036 "parserBison.tab.c"
    break;

  case 138: /* type_specifier: DOUBLE  */
#line 289 "parserBison.y"
                 {save_type();}
#line 3042 "parserBison.tab.c"
    break;

  case 139: /* type_specifier: SIGNED  */
#line 290 "parserBison.y"
                 {save_type();}
#line 3048 "parserBison.tab.c"
    break;

  case 140: /* type_specifier: UNSIGNED  */
#line 291 "parserBison.y"
                   {save_type();}
#line 3054 "parserBison.tab.c"
    break;

  case 141: /* type_specifier: _BOOL  */
#line 292 "parserBison.y"
                {save_type();}
#line 3060 "parserBison.tab.c"
    break;

  case 142: /* type_specifier: _COMPLEX  */
#line 293 "parserBison.y"
                   {save_type();}
#line 3066 "parserBison.tab.c"
    break;

  case 143: /* type_specifier: _IMAGINARY  */
#line 294 "parserBison.y"
                     {save_type();}
#line 3072 "parserBison.tab.c"
    break;

  case 145: /* type_specifier: enum_specifier  */
#line 296 "parserBison.y"
                         {save_type();}
#line 3078 "parserBison.tab.c"
    break;

  case 146: /* type_specifier: TYPEDEF_NAME  */
#line 297 "parserBison.y"
                       {save_type();}
#line 3084 "parserBison.tab.c"
    break;

  case 148: /* $@3: %empty  */
#line 302 "parserBison.y"
                                    {save_identifier_struct_union((yyvsp[0].struct_union_name));}
#line 3090 "parserBison.tab.c"
    break;

  case 149: /* struct_or_union_specifier: struct_or_union STRUCT_ID $@3 prepare_scope '{' struct_declaration_list '}'  */
#line 302 "parserBison.y"
                                                                                                                      {finish_struct_union();}
#line 3096 "parserBison.tab.c"
    break;

  case 150: /* struct_or_union_specifier: struct_or_union STRUCT_ID  */
#line 303 "parserBison.y"
                                    {save_identifier_struct_union((yyvsp[0].struct_union_name));}
#line 3102 "parserBison.tab.c"
    break;

  case 153: /* struct_or_union: STRUCT  */
#line 309 "parserBison.y"
                 {save_struct(); typedef_name_flag = 1;}
#line 3108 "parserBison.tab.c"
    break;

  case 154: /* struct_or_union: UNION  */
#line 310 "parserBison.y"
                {save_union(); typedef_name_flag = 2;}
#line 3114 "parserBison.tab.c"
    break;

  case 158: /* struct_declaration: specifier_qualifier_list struct_declarator_list ';'  */
#line 320 "parserBison.y"
                                                              {end_declaration();}
#line 3120 "parserBison.tab.c"
    break;

  case 182: /* $@4: %empty  */
#line 362 "parserBison.y"
                                   {printf("ABIEL MECO\n");}
#line 3126 "parserBison.tab.c"
    break;

  case 185: /* enumerator: error '=' constant_expression  */
#line 364 "parserBison.y"
                                         {printf("ABIEL MECO\n");}
#line 3132 "parserBison.tab.c"
    break;

  case 196: /* direct_declarator: IDENTIFIER  */
#line 390 "parserBison.y"
                     {save_id();}
#line 3138 "parserBison.tab.c"
    break;

  case 271: /* designation: designator_list '='  */
#line 502 "parserBison.y"
                               {printf("ABIEL MECO\n");}
#line 3144 "parserBison.tab.c"
    break;

  case 286: /* prepare_scope: %empty  */
#line 535 "parserBison.y"
         { open_scope(); }
#line 3150 "parserBison.tab.c"
    break;

  case 287: /* finish_scope: %empty  */
#line 539 "parserBison.y"
         { print_symboltables(); close_scope(); }
#line 3156 "parserBison.tab.c"
    break;

  case 304: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 576 "parserBison.y"
                                             {printf("Hola1\n");}
#line 3162 "parserBison.tab.c"
    break;

  case 305: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 577 "parserBison.y"
                                                    {printf("Hola2\n");}
#line 3168 "parserBison.tab.c"
    break;

  case 306: /* iteration_statement: FOR '(' expression_statement expression_statement ')' statement  */
#line 578 "parserBison.y"
                                                                          {printf("Hola3\n");}
#line 3174 "parserBison.tab.c"
    break;

  case 307: /* iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement  */
#line 579 "parserBison.y"
                                                                                     {printf("Hola4\n");}
#line 3180 "parserBison.tab.c"
    break;

  case 308: /* iteration_statement: FOR '(' declaration expression_statement ')' statement  */
#line 580 "parserBison.y"
                                                                 {printf("Hola5\n");}
#line 3186 "parserBison.tab.c"
    break;

  case 309: /* iteration_statement: FOR '(' declaration expression_statement expression ')' statement  */
#line 581 "parserBison.y"
                                                                            {printf("Hola6\n");}
#line 3192 "parserBison.tab.c"
    break;

  case 310: /* iteration_statement: DO error WHILE '(' expression ')' ';'  */
#line 582 "parserBison.y"
                                                 {printf("Hola7\n");}
#line 3198 "parserBison.tab.c"
    break;

  case 311: /* iteration_statement: FOR '(' error ')' statement  */
#line 583 "parserBison.y"
                                       {printf("Hola8\n");}
#line 3204 "parserBison.tab.c"
    break;

  case 319: /* translation_unit: external_declaration  */
#line 601 "parserBison.y"
                               {printf("11111111111111111111111111\n");}
#line 3210 "parserBison.tab.c"
    break;

  case 320: /* translation_unit: translation_unit external_declaration  */
#line 602 "parserBison.y"
                                                 {printf("22222222222222222222222222\n");}
#line 3216 "parserBison.tab.c"
    break;

  case 322: /* external_declaration: declaration  */
#line 607 "parserBison.y"
                      {printf("SE VA CON DECLARATION\n");}
#line 3222 "parserBison.tab.c"
    break;


#line 3226 "parserBison.tab.c"

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

#line 624 "parserBison.y"

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
