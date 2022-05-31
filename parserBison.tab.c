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
  YYSYMBOL_declaration_specifiers = 131,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 132,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 133,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 134,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 135,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 136, /* struct_or_union_specifier  */
  YYSYMBOL_137_1 = 137,                    /* $@1  */
  YYSYMBOL_struct_or_union = 138,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 139,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 140,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 141, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 142,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 143,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 144,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 145,          /* enumerator_list  */
  YYSYMBOL_enumerator = 146,               /* enumerator  */
  YYSYMBOL_147_2 = 147,                    /* $@2  */
  YYSYMBOL_type_qualifier = 148,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 149,       /* function_specifier  */
  YYSYMBOL_alignment_specifier = 150,      /* alignment_specifier  */
  YYSYMBOL_declarator = 151,               /* declarator  */
  YYSYMBOL_direct_declarator = 152,        /* direct_declarator  */
  YYSYMBOL_pointer = 153,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 154,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 155,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 156,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 157,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 158,          /* identifier_list  */
  YYSYMBOL_type_name = 159,                /* type_name  */
  YYSYMBOL_abstract_declarator = 160,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 161, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 162,              /* initializer  */
  YYSYMBOL_initializer_list = 163,         /* initializer_list  */
  YYSYMBOL_designation = 164,              /* designation  */
  YYSYMBOL_designator_list = 165,          /* designator_list  */
  YYSYMBOL_designator = 166,               /* designator  */
  YYSYMBOL__STATIC_ASSERT_declaration = 167, /* _STATIC_ASSERT_declaration  */
  YYSYMBOL_statement = 168,                /* statement  */
  YYSYMBOL_labeled_statement = 169,        /* labeled_statement  */
  YYSYMBOL_prepare_scope = 170,            /* prepare_scope  */
  YYSYMBOL_finish_scope = 171,             /* finish_scope  */
  YYSYMBOL_compound_statement = 172,       /* compound_statement  */
  YYSYMBOL_block_item_list = 173,          /* block_item_list  */
  YYSYMBOL_block_item = 174,               /* block_item  */
  YYSYMBOL_expression_statement = 175,     /* expression_statement  */
  YYSYMBOL_selection_statement = 176,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 177,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 178,           /* jump_statement  */
  YYSYMBOL_translation_unit_before = 179,  /* translation_unit_before  */
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
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4589

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  328
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  614

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
     229,   233,   234,   238,   242,   243,   244,   245,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   262,   263,
     264,   268,   269,   270,   274,   275,   276,   277,   278,   279,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   301,   302,   302,   303,   304,
     305,   309,   310,   314,   315,   319,   320,   321,   322,   326,
     327,   328,   329,   333,   334,   335,   339,   340,   341,   342,
     346,   347,   348,   349,   350,   351,   352,   356,   357,   358,
     362,   362,   363,   364,   368,   369,   370,   371,   375,   376,
     380,   381,   385,   386,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   406,
     410,   411,   412,   413,   414,   418,   419,   423,   424,   425,
     429,   430,   431,   435,   436,   437,   438,   439,   443,   444,
     448,   449,   453,   454,   455,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     487,   488,   489,   490,   494,   495,   496,   497,   498,   502,
     506,   507,   511,   512,   516,   520,   521,   522,   523,   524,
     525,   529,   530,   531,   535,   539,   544,   545,   546,   551,
     552,   556,   557,   561,   562,   563,   567,   568,   569,   570,
     571,   572,   576,   577,   578,   579,   580,   581,   582,   583,
     587,   588,   589,   590,   591,   592,   596,   601,   602,   606,
     607,   611,   612,   613,   614,   615,   616,   620,   621
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
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "$@1", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "$@2", "type_qualifier",
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

#define YYPACT_NINF (-462)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-286)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -462,  4114,    31,  3889,  -462,  -462,  -462,  -462,  -462,  -462,
    -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,
    -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,    37,   -22,
    -462,  -462,    18,  -462,  -462,   107,  4479,  4479,  -462,    76,
    -462,  4479,  4479,  4479,  -462,  4058,  -462,  -462,  -462,  -462,
    -462,   124,    21,  -462,  4433,    46,   127,  2387,  3285,   -37,
    -462,    35,   519,  -462,   -19,  -462,  4364,    71,    27,  -462,
    -462,  -462,    78,    83,  -462,  -462,  -462,  -462,  -462,  -462,
     -37,   160,   711,  -462,  -462,   174,   -15,  -462,   164,    96,
    -462,  2190,  -462,  -462,  -462,  -462,  -462,  3529,  3551,  3551,
    -462,   101,   106,  2461,  -462,  -462,  -462,  -462,  -462,  -462,
    -462,  -462,  -462,  -462,   351,  -462,  3603,  -462,   115,   103,
     315,   243,   335,   209,   208,   214,   304,    19,  -462,   241,
    4517,   462,  4517,   251,   246,   254,  -462,  3057,  -462,   262,
     264,   282,  -462,  -462,   252,   254,  -462,  3057,  -462,  4433,
    3945,  2535,    71,   290,  -462,  4284,  1264,   306,  3285,   322,
     307,   318,   407,   319,   325,   581,  -462,  -462,   703,  -462,
    -462,    40,  -462,  -462,  -462,   234,  -462,   807,  -462,  -462,
    -462,  -462,   119,   120,   232,  -462,  3285,  -462,    51,  -462,
    3307,  3307,  3329,  3329,  3307,  3307,  3359,   115,  2461,  -462,
    2461,  -462,  -462,  4517,  3381,  1294,   285,   327,   424,  -462,
    -462,  3149,  3381,   429,  -462,  3603,  3603,  3603,  3603,  3603,
    3307,  3307,  3307,  3307,  3307,  3307,  3329,  3329,  3403,  3403,
    3403,  3403,  3403,  3433,  -462,  -462,   336,  3721,  2557,   108,
    -462,   178,  -462,  -462,   436,   348,  -462,  2032,  3013,  -462,
    -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,   229,
    -462,  -462,   334,   383,   396,  -462,   299,  2877,  -462,   397,
     402,  2649,   486,   413,   -52,  3777,  -462,   116,  -462,  -462,
     111,   999,   414,   999,  3455,  3477,   400,  -462,  -462,  2062,
    -462,   221,  -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,
    -462,  -462,  -462,  -462,  3381,  3381,  -462,   419,  1042,   421,
    -462,  2160,  -462,  -462,  -462,    59,  -462,   401,  -462,  -462,
    3285,  -462,  -462,  3603,   315,   315,  2313,   243,   243,   315,
     315,  1392,   301,   422,   426,   432,   428,  -462,  -462,  -462,
    3507,  -462,  1422,  -462,   311,  -462,   -61,  -462,  -462,  -462,
    -462,   115,   115,   103,   103,   315,   315,   315,   315,   243,
     243,  2285,   335,   209,   208,   214,   304,  1520,   367,  -462,
     530,  -462,   433,   434,  1550,  2877,  -462,   431,   438,  2671,
     178,  4001,  2763,   444,  1166,  3285,   521,  -462,   141,  3057,
     356,  -462,  3665,  -462,  4170,  -462,   158,  -462,  -462,  -462,
    -462,  4227,  -462,   522,   446,  2877,  -462,  -462,  3381,  -462,
     449,   451,   441,  4321,  -462,  -462,   435,  -462,  -462,   373,
    3285,  -462,   247,  -462,   456,  -462,  -462,   999,  -462,  1648,
     357,  1678,   381,  -462,   111,  -462,  -462,  -462,  3381,  1776,
     476,   903,  -462,  -462,  -462,  -462,  3285,  3285,   461,   461,
    -462,  3605,  3035,  -462,  -462,  -462,  3381,  -462,  3285,  3285,
    -462,  -462,  -462,   464,  2877,  -462,  -462,  3381,  -462,   465,
     554,  -462,   470,  1806,  2877,  -462,   468,   473,  2785,   453,
    3057,  -462,   478,  -462,  2899,  -462,  -462,  -462,  -462,   623,
     267,  -462,  -462,  -462,  -462,  -462,  -462,   479,   481,  -462,
    -462,  -462,  3833,  -462,  -462,   225,  3285,  -462,   225,  -462,
    3285,  -462,   999,   999,   999,   999,   386,   487,   488,  1904,
    1138,  1138,  -462,  -462,   491,   394,  -462,   492,  1934,   145,
    -462,  -462,  -462,  -462,   494,   495,  -462,  -462,  -462,  -462,
     496,  2877,  -462,  -462,  3381,  -462,   497,  -462,  -462,  -462,
    -462,  -462,  3057,  -462,  -462,  -462,  -462,  -462,   493,  -462,
    -462,  -462,  -462,   508,   514,  -462,  -462,   999,  3381,  3381,
     999,  3171,  3193,  3381,  -462,  3605,  3381,  2921,  -462,  -462,
    -462,  -462,   498,   500,  -462,  -462,   999,   999,  -462,   399,
     403,  -462,   999,   410,   999,   412,  -462,  -462,  -462,  -462,
    -462,  -462,  -462,  -462,   454,   506,  -462,   999,  -462,   999,
    -462,  -462,  -462,  -462
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     284,     0,     0,     0,   144,   124,   125,   126,   128,   129,
     188,   184,   185,   186,   139,   131,   132,   133,   134,   137,
     138,   135,   136,   130,   140,   141,   151,   152,     0,     0,
     187,   189,     0,   127,   320,     0,   109,   110,   142,   284,
     143,   113,   115,   117,   106,     0,   317,   319,     1,   284,
     327,     0,     0,   326,   284,   174,     0,     0,     0,   284,
     194,     0,     0,   104,     0,   118,   122,   193,     0,   108,
     111,   284,   148,     0,   112,   114,   116,   316,   318,   325,
       0,   122,     0,   328,   324,     0,     0,    11,   182,     0,
     177,     0,     2,     8,     9,    12,    13,     0,     0,     0,
      10,     0,     0,     0,    39,    40,    41,    42,    43,    44,
      19,     3,     4,     7,    32,    45,     0,    47,    51,    55,
      58,    67,    72,    74,    76,    78,    80,    82,   103,     0,
     160,     0,   162,     0,     0,     0,   107,     0,   323,     0,
       0,     0,   215,   212,   211,     0,   105,     0,   322,   284,
       0,     0,   192,     0,   284,     0,     0,     2,     0,     0,
       0,     0,     0,     0,     0,     0,   285,   293,    45,    87,
     101,     0,   291,   292,   275,     0,   276,     0,   289,   277,
     278,   280,     0,     0,     0,   175,     0,   180,     0,   170,
       0,     0,     0,     0,     0,     0,     0,    54,     0,    36,
       0,    33,    34,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   191,   159,     0,     0,     0,     0,
     230,   234,   161,   190,     0,     0,   120,     0,     0,   263,
     123,   209,   195,   214,   216,   210,   119,   121,   321,     0,
     228,   206,     0,     0,   218,   220,     0,     0,   196,    40,
       0,     0,     0,     0,     0,     0,   153,     0,   157,   285,
     295,     0,     0,     0,     0,     0,     0,   311,   312,     0,
     313,     0,   286,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    90,     0,     0,   294,     0,     0,     0,
     285,     0,   285,   290,   176,     0,   172,     0,   179,   183,
       0,   171,   178,     0,    65,    66,     0,    70,    71,    63,
      64,     0,     0,     0,     0,     0,     0,     6,    89,     5,
       0,    24,     0,    21,     0,    29,     0,    23,    48,    49,
      50,    52,    53,    56,    57,    61,    62,    59,    60,    68,
      69,     0,    73,    75,    77,    79,    81,     0,     0,   259,
       0,   252,     0,     0,     0,     0,   236,    40,     0,     0,
     232,     0,     0,     0,     0,     0,     0,   265,     0,     0,
       0,   270,     0,   208,     0,   226,     0,   227,   223,   224,
     205,     0,   207,     0,     0,     0,   197,   204,     0,   203,
      40,     0,     0,     0,   285,   158,     0,   285,   154,     0,
       0,   155,     0,   163,   168,   288,   281,     0,   283,     0,
       0,     0,     0,   310,   315,   314,    88,   102,     0,     0,
       0,     0,   279,   287,   173,   181,     0,     0,    37,     0,
      38,     0,     0,    46,    31,    22,     0,    20,     0,     0,
     253,   235,   256,     0,     0,   237,   243,     0,   242,     0,
       0,   254,     0,     0,     0,   244,    40,     0,     0,     0,
       0,   262,     0,   273,     0,   260,   264,   269,   271,     0,
       0,   219,   222,   217,   221,   229,   199,     0,     0,   200,
     202,   285,     0,   150,   145,     0,     0,   166,     0,   156,
       0,   282,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,    86,     0,     0,    15,     0,     0,     0,
      30,    85,    83,   239,     0,     0,   241,   257,   255,   258,
       0,     0,   245,   251,     0,   250,     0,   274,   268,   272,
     261,   267,     0,   209,   198,   201,   149,   147,     0,   165,
     169,   164,   167,   299,   297,   300,   298,     0,     0,     0,
       0,     0,     0,     0,    14,     0,     0,     0,    27,   238,
     240,   247,     0,     0,   248,   266,     0,     0,   302,     0,
       0,   309,     0,     0,     0,     0,    18,    16,    17,    28,
     246,   249,   301,   296,     0,     0,   306,     0,   304,     0,
     308,   303,   307,   305
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -462,  -462,  -462,  -462,  -462,  -462,  -462,    20,  -462,  -462,
      57,  -462,   -50,    97,   273,   471,  -134,   366,   382,   384,
     365,   385,  -462,   -54,   163,  -462,   -62,   -51,     3,     8,
    -462,  -110,  -462,   -56,  -462,  -462,  -462,   207,  -248,  -118,
    -462,  -438,  -462,   536,  -164,  -462,   -57,  -462,  -462,   -33,
     -60,   -20,  -141,  -135,  -462,  -310,  -462,    -2,   -98,  -222,
    -126,   170,  -461,  -462,   233,  -142,    90,  -462,    29,  -150,
      23,  -462,   452,  -351,  -462,  -462,  -462,  -462,  -462,   583,
    -462,   565
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   110,   111,    88,   112,   113,   525,   526,   114,   344,
     168,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   169,   170,   304,   171,   129,    34,    51,
      64,    65,    36,    37,    38,   154,    39,   275,   276,   131,
     422,   423,    40,    89,    90,   320,    41,    42,    43,   395,
      67,    68,   144,   372,   264,   265,   266,   527,   397,   241,
     387,   388,   389,   390,   391,    44,   173,   174,   175,    77,
     176,   177,   178,   179,   180,   310,   181,     2,    45,    46,
      47,    54
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     132,   130,    66,   128,   128,   142,    50,   134,   152,    35,
     271,   250,   235,   278,   242,   263,   292,   380,    81,   305,
     318,   257,   457,   552,   322,   246,    53,   418,   140,     1,
      60,    48,    52,   240,   414,   256,   139,   277,    60,   232,
      55,   206,   143,   135,    69,    70,   132,   130,   415,    74,
      75,    76,   317,    35,    87,   133,    57,    83,   327,   328,
     317,   145,    87,   136,   137,   184,   214,   559,    73,    50,
     561,   185,    79,   132,   130,   132,   130,    84,    52,    71,
      72,   146,   138,    52,   492,   172,   186,   254,    52,   148,
     521,   494,   359,   360,   142,    52,    58,   379,   132,   130,
     153,   207,    81,   291,   128,    61,    82,   282,    59,   236,
      60,   239,    81,    61,   115,   115,   552,   419,   233,    60,
     305,   253,    56,    62,   255,    80,   405,    60,    86,   425,
      87,    85,   128,   278,   332,   319,   206,   321,   206,   373,
     306,   132,   130,   132,   130,   444,   132,   130,   115,   150,
     346,   322,    83,   151,   199,   201,   202,   277,   262,   236,
     442,    60,   443,  -146,   399,   348,   349,   350,   155,   571,
     572,   368,   258,   115,   380,   182,   188,    87,    52,   203,
     172,   142,   189,   273,   204,    61,   237,  -233,   197,  -233,
     238,   -89,   218,   219,    61,    62,   333,   420,   334,   184,
     315,   335,    61,   215,    62,   314,   316,    63,   216,   217,
     142,   -89,    62,   115,   254,   115,   421,   239,   132,   130,
     186,   484,   430,   432,    63,   577,   558,   485,    60,   398,
     236,   578,    60,   317,   464,    87,   392,  -233,  -233,   396,
     238,   478,   396,   115,   424,   262,   472,   115,   115,   115,
     115,   115,   115,   197,   418,   245,   381,    60,   222,   223,
     382,   147,   115,   486,   503,   187,   128,   504,   236,   445,
      60,   278,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     453,    11,    12,    13,   373,   277,   228,   307,   308,   309,
     249,   305,   197,    61,   115,   229,   420,   392,   393,   394,
     249,   238,   230,    62,   270,   351,   352,    62,   142,    82,
     234,   435,   254,   231,    30,   142,   244,   508,   220,   221,
     243,   128,    61,   541,   482,   236,   152,    60,   224,   225,
      62,   251,    62,   252,   197,   392,   115,   509,   254,   238,
     396,   556,   226,   227,   548,    62,   132,   130,   551,   140,
     278,   208,   209,   210,   339,   305,   128,   336,   115,   507,
      62,   426,   396,   428,   345,   272,   516,   115,   402,   403,
     115,   305,   447,   115,   277,   284,   197,   281,   115,   262,
     455,   456,   522,   523,   132,   130,   285,   115,   440,   115,
     262,   378,   262,   283,   531,   532,   340,   254,   197,   262,
     286,   249,   392,  -225,  -225,   369,   238,   142,   115,   287,
     197,   254,    62,   197,   115,   288,   585,   341,   197,   211,
     404,   115,   347,   212,   411,   213,   513,   305,   385,   197,
     386,   115,   115,   383,   520,   132,   130,   305,   459,   137,
     396,   551,   128,   505,   506,   560,   128,   487,   197,   562,
     515,   305,   400,   236,   197,   567,   305,   436,   437,   396,
     396,   197,   424,   574,   575,   424,   401,   115,   604,   305,
     406,   197,   605,   305,   254,   407,   115,   412,   115,   607,
     305,   609,   305,   353,   354,   427,   115,   438,   413,   441,
     433,   448,   186,   115,   115,   449,   589,   590,   451,   593,
     595,   450,   460,   461,   465,   115,   115,   511,   132,   130,
     141,   466,  -213,   479,   483,   495,   197,   501,   197,   496,
     115,   236,   499,    60,   500,   415,   197,   510,   463,   518,
     237,  -231,   469,  -231,   238,   477,   452,   533,   536,   538,
      62,   542,   249,   547,   610,   236,   543,    60,    11,    12,
      13,   549,   554,   115,   555,   568,   569,   115,   497,   586,
     197,   498,   573,   576,   506,   587,   115,   579,   580,   581,
     584,   600,   289,   601,    92,   115,    93,    94,    95,    96,
      97,    30,    98,    99,   362,   597,   365,  -213,  -213,  -213,
    -213,  -213,   563,   564,   565,   566,   611,    62,   392,   369,
     394,   363,   238,   100,   364,   249,   197,   366,    62,   530,
     502,   183,   529,   488,   236,   197,    60,   534,    78,   313,
     535,   149,   392,   537,   394,     0,   238,   540,     0,     0,
       0,   546,    62,   249,     0,     0,     0,   249,     0,     0,
       0,     0,   101,     0,   102,     0,     0,   588,     0,   103,
     591,   324,   325,     0,     0,   329,   330,     0,   104,   105,
     106,   107,   108,   109,     0,     0,   602,   603,     0,     0,
       0,   290,   606,     0,   608,     0,     0,     0,     0,     0,
       0,     0,     0,   355,   356,   357,   358,   612,     0,   613,
       0,   392,   553,   394,   582,   238,     0,   583,     0,     0,
       0,    62,   156,     0,   157,   249,    93,    94,    95,    96,
      97,     0,    98,    99,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,     0,     0,   596,     0,     0,   598,
     249,     0,     4,   100,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,   158,
     159,   160,     0,   161,  -284,  -284,  -284,   162,   163,   164,
     165,    29,   101,    30,   102,    31,    32,    33,     0,   103,
       0,     0,     0,     0,     0,     0,  -284,   166,   104,   105,
     106,   107,   108,   109,   303,     0,     0,     0,   311,     0,
     157,   167,    93,    94,    95,    96,    97,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,   100,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,   158,   159,   160,     0,   161,
    -284,  -284,  -284,   162,   163,   164,   165,    29,   101,    30,
     102,    31,    32,    33,     0,   103,     0,     0,     0,     0,
       0,     0,  -284,   312,   104,   105,   106,   107,   108,   109,
       0,     0,     0,     0,   519,     0,    92,   167,    93,    94,
      95,    96,    97,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,   100,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,   101,    30,   102,    31,    32,    33,
       0,   103,     0,     0,     0,     0,     0,     0,     0,     0,
     104,   105,   106,   107,   108,   109,     0,     0,     0,     0,
     311,     0,   157,   167,    93,    94,    95,    96,    97,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   439,     0,   157,     0,    93,    94,    95,
      96,    97,     0,    98,    99,     0,     0,   158,   159,   160,
       0,   161,  -284,  -284,  -284,   162,   163,   164,   165,     0,
     101,     0,   102,     0,   100,     0,     0,   103,     0,     0,
       0,     0,     0,     0,  -284,     0,   104,   105,   106,   107,
     108,   109,     0,     0,     0,     0,     0,     0,     0,   167,
     158,   159,   160,     0,   161,  -284,  -284,  -284,   162,   163,
     164,   165,     0,   101,     0,   102,     0,     0,     0,     0,
     103,     0,     0,     0,     0,     0,     0,  -284,     0,   104,
     105,   106,   107,   108,   109,     0,     0,     0,     0,   311,
       0,    92,   167,    93,    94,    95,    96,    97,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
     100,    93,    94,    95,    96,    97,     0,    98,    99,     0,
       0,   190,   191,   192,   193,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
       0,   102,     0,     0,     0,     0,   103,     0,     0,     0,
       0,     0,     0,     0,     0,   104,   105,   106,   107,   108,
     109,     0,     0,     0,     0,     0,     0,   101,   167,   102,
       0,     0,     0,     0,   103,     0,   480,     0,     0,     0,
       0,     0,   481,   104,   105,   106,   107,   108,   109,     0,
       0,   194,   195,     0,     0,   196,   338,    92,     0,    93,
      94,    95,    96,    97,     0,    98,    99,     0,     0,   190,
     191,   192,   193,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,    92,     0,    93,
      94,    95,    96,    97,     0,    98,    99,     0,     0,   190,
     191,   192,   193,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,   101,     0,   102,     0,     0,
       0,     0,   103,     0,     0,     0,     0,     0,     0,     0,
     279,   104,   105,   106,   107,   108,   109,     0,     0,   194,
     195,     0,     0,   196,   280,   101,     0,   102,     0,     0,
       0,     0,   103,   337,     0,     0,     0,     0,     0,     0,
       0,   104,   105,   106,   107,   108,   109,     0,     0,   194,
     195,     0,     0,   196,   338,    92,     0,    93,    94,    95,
      96,    97,     0,    98,    99,     0,     0,   190,   191,   192,
     193,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,    92,     0,    93,    94,    95,
      96,    97,     0,    98,    99,     0,     0,   190,   191,   192,
     193,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,   102,     0,     0,     0,     0,
     103,     0,     0,   446,     0,     0,     0,     0,     0,   104,
     105,   106,   107,   108,   109,     0,     0,   194,   195,     0,
       0,   196,   338,   101,     0,   102,     0,     0,     0,     0,
     103,     0,   454,     0,     0,     0,     0,     0,     0,   104,
     105,   106,   107,   108,   109,     0,     0,   194,   195,     0,
       0,   196,   338,    92,     0,    93,    94,    95,    96,    97,
       0,    98,    99,     0,     0,   190,   191,   192,   193,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,    92,     0,    93,    94,    95,    96,    97,
       0,    98,    99,     0,     0,   190,   191,   192,   193,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,   102,     0,     0,     0,     0,   103,     0,
       0,   458,     0,     0,     0,     0,     0,   104,   105,   106,
     107,   108,   109,     0,     0,   194,   195,     0,     0,   196,
     338,   101,     0,   102,     0,     0,     0,     0,   103,     0,
       0,     0,     0,   462,     0,     0,     0,   104,   105,   106,
     107,   108,   109,     0,     0,   194,   195,     0,     0,   196,
     338,    92,     0,    93,    94,    95,    96,    97,     0,    98,
      99,     0,     0,   190,   191,   192,   193,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,    92,     0,    93,    94,    95,    96,    97,     0,    98,
      99,     0,     0,   190,   191,   192,   193,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,   101,
       0,   102,     0,     0,     0,     0,   103,   512,     0,     0,
       0,     0,     0,     0,     0,   104,   105,   106,   107,   108,
     109,     0,     0,   194,   195,     0,     0,   196,   338,   101,
       0,   102,     0,     0,     0,     0,   103,   514,     0,     0,
       0,     0,     0,     0,     0,   104,   105,   106,   107,   108,
     109,     0,     0,   194,   195,     0,     0,   196,   338,    92,
       0,    93,    94,    95,    96,    97,     0,    98,    99,     0,
       0,   190,   191,   192,   193,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,    92,
       0,    93,    94,    95,    96,    97,     0,    98,    99,     0,
       0,   190,   191,   192,   193,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   517,
       0,     0,     0,     0,     0,     0,     0,   101,     0,   102,
       0,     0,     0,     0,   103,     0,     0,     0,     0,     0,
       0,     0,     0,   104,   105,   106,   107,   108,   109,     0,
       0,   194,   195,     0,     0,   196,   280,   101,     0,   102,
       0,     0,     0,     0,   103,     0,     0,     0,     0,   539,
       0,     0,     0,   104,   105,   106,   107,   108,   109,     0,
       0,   194,   195,     0,     0,   196,   338,    92,     0,    93,
      94,    95,    96,    97,     0,    98,    99,     0,     0,   190,
     191,   192,   193,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,    92,     0,    93,
      94,    95,    96,    97,     0,    98,    99,     0,     0,   190,
     191,   192,   193,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,   101,     0,   102,     0,     0,
       0,     0,   103,   570,     0,     0,     0,     0,     0,     0,
       0,   104,   105,   106,   107,   108,   109,     0,     0,   194,
     195,     0,     0,   196,   280,   101,     0,   102,     0,     0,
       0,     0,   103,     0,   480,     0,     0,     0,     0,     0,
       0,   104,   105,   106,   107,   108,   109,     0,     0,   194,
     195,     0,     0,   196,   338,    92,     0,    93,    94,    95,
      96,    97,     0,    98,    99,     0,     0,   190,   191,   192,
     193,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,    92,     0,    93,    94,    95,
      96,    97,     0,    98,    99,     0,     0,   190,   191,   192,
     193,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,   102,     0,     0,     0,     0,
     103,     0,     0,     0,     0,     0,     0,     0,     0,   104,
     105,   106,   107,   108,   109,     0,     0,   194,   195,     0,
       0,   196,   338,   101,     0,   102,     0,     0,     0,     0,
     103,     0,     0,     0,     0,     0,     0,     0,     0,   104,
     105,   106,   107,   108,   109,     0,     0,   194,   195,     0,
       0,   196,   434,    92,     0,    93,    94,    95,    96,    97,
       0,    98,    99,     0,     0,   190,   191,   192,   193,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,    92,     0,    93,    94,    95,    96,    97,
       0,    98,    99,     0,     0,   190,   191,   192,   193,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,   102,     0,     0,     0,     0,   103,     0,
       0,     0,     0,     0,     0,     0,     0,   104,   105,   106,
     107,   108,   109,     0,     0,   194,   195,     0,     0,   196,
     280,   101,     0,   102,     0,     0,     0,     0,   103,     0,
       0,     0,     0,     0,     0,     0,     0,   104,   105,   106,
     107,   108,   109,     0,     0,   194,   195,     0,    92,   196,
      93,    94,    95,    96,    97,     0,    98,    99,     0,     0,
     190,   191,   192,   193,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,   100,    93,    94,
      95,    96,    97,     0,    98,    99,     0,     0,   190,   191,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,   102,     0,
       0,     0,     0,   103,     0,     0,     0,     0,     0,     0,
       0,     0,   104,   105,   106,   107,   108,   109,     0,     0,
     194,   195,     0,     0,   101,     0,   102,     0,    91,     0,
      92,   103,    93,    94,    95,    96,    97,     0,    98,    99,
     104,   105,   106,   107,   108,   109,     0,     0,   194,   195,
       0,     0,     0,     0,     0,     0,     0,     0,     4,   100,
       0,     0,     0,     0,     0,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,    30,
     102,     0,   205,     0,    92,   103,    93,    94,    95,    96,
      97,     0,    98,    99,   104,   105,   106,   107,   108,   109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,   100,     0,     0,     0,     0,     0,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   101,    30,   102,     0,   247,     0,    92,   103,
      93,    94,    95,    96,    97,     0,    98,    99,   104,   105,
     106,   107,   108,   109,     0,     0,     0,     0,   374,     0,
      92,     0,    93,    94,    95,    96,    97,   100,    98,    99,
     267,     0,     0,     0,    11,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       0,     0,   375,     0,     0,     0,    11,    12,    13,     0,
       0,     0,     0,     0,     0,     0,   101,    30,   102,     0,
       0,     0,     0,   103,     0,     0,     0,     0,   268,     0,
       0,     0,   104,   269,   106,   107,   108,   109,   101,    30,
     102,     0,     0,     0,     0,   103,     0,     0,     0,     0,
     376,     0,     0,     0,   104,   377,   106,   107,   108,   109,
     247,     0,    92,     0,    93,    94,    95,    96,    97,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   247,     0,    92,     0,    93,    94,    95,    96,
      97,   100,    98,    99,   408,     0,     0,     0,    11,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,     0,     0,   467,     0,     0,     0,
      11,    12,    13,     0,     0,     0,     0,     0,     0,     0,
     101,    30,   102,     0,     0,     0,     0,   103,     0,     0,
       0,     0,   409,     0,     0,     0,   104,   410,   106,   107,
     108,   109,   101,    30,   102,     0,     0,     0,     0,   103,
       0,     0,     0,     0,   468,     0,     0,     0,   104,   105,
     106,   107,   108,   109,   473,     0,    92,     0,    93,    94,
      95,    96,    97,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   247,     0,    92,     0,
      93,    94,    95,    96,    97,   100,    98,    99,   474,     0,
       0,     0,    11,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
     544,     0,     0,     0,    11,    12,    13,     0,     0,     0,
       0,     0,     0,     0,   101,    30,   102,     0,     0,     0,
       0,   103,     0,     0,     0,     0,   475,     0,     0,     0,
     104,   476,   106,   107,   108,   109,   101,    30,   102,     0,
       0,     0,     0,   103,     0,     0,     0,     0,   545,     0,
       0,     0,   104,   105,   106,   107,   108,   109,   247,     0,
      92,     0,    93,    94,    95,    96,    97,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     247,     0,    92,     0,    93,    94,    95,    96,    97,   100,
      98,    99,     0,     0,     0,     0,    11,    12,    13,     0,
       0,     0,   247,     0,    92,     0,    93,    94,    95,    96,
      97,   100,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,    30,
     102,     0,     0,   100,     0,   103,     0,     0,     0,     0,
       0,     0,     0,     0,   104,   105,   106,   107,   108,   109,
     101,     0,   102,     0,     0,     0,     0,   103,     0,     0,
       0,   385,     0,   386,   248,   550,   104,   105,   106,   107,
     108,   109,   101,     0,   102,     0,     0,     0,     0,   103,
       0,     0,     0,   385,     0,   386,   248,   599,   104,   105,
     106,   107,   108,   109,   384,     0,    92,     0,    93,    94,
      95,    96,    97,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   528,     0,    92,     0,
      93,    94,    95,    96,    97,   100,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   247,     0,
      92,     0,    93,    94,    95,    96,    97,   100,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   101,     0,   102,     0,     0,   100,
       0,   103,     0,     0,     0,   385,     0,   386,   248,     0,
     104,   105,   106,   107,   108,   109,   101,     0,   102,     0,
       0,     0,     0,   103,     0,     0,     0,   385,     0,   386,
     248,     0,   104,   105,   106,   107,   108,   109,   101,     0,
     102,     0,     0,     0,     0,   103,     0,     0,     0,     0,
       0,     0,   248,     0,   104,   105,   106,   107,   108,   109,
     342,     0,    92,     0,    93,    94,    95,    96,    97,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   247,     0,    92,     0,    93,    94,    95,    96,
      97,   100,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   247,     0,    92,     0,    93,    94,
      95,    96,    97,   100,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,   102,     0,     0,   100,     0,   103,   343,     0,
       0,     0,     0,     0,     0,     0,   104,   105,   106,   107,
     108,   109,   101,     0,   102,     0,     0,     0,     0,   103,
     592,     0,     0,     0,     0,     0,     0,     0,   104,   105,
     106,   107,   108,   109,   101,     0,   102,     0,     0,     0,
       0,   103,   594,     0,     0,     0,     0,     0,     0,     0,
     104,   105,   106,   107,   108,   109,    91,     0,    92,     0,
      93,    94,    95,    96,    97,     0,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   323,     0,
      92,     0,    93,    94,    95,    96,    97,   100,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     326,     0,    92,     0,    93,    94,    95,    96,    97,   100,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,   102,     0,
     331,   100,    92,   103,    93,    94,    95,    96,    97,     0,
      98,    99,   104,   105,   106,   107,   108,   109,   101,     0,
     102,     0,   247,     0,    92,   103,    93,    94,    95,    96,
      97,   100,    98,    99,   104,   105,   106,   107,   108,   109,
     101,     0,   102,     0,   361,     0,    92,   103,    93,    94,
      95,    96,    97,   100,    98,    99,   104,   105,   106,   107,
     108,   109,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,   102,     0,   367,   100,    92,   103,    93,    94,
      95,    96,    97,     0,    98,    99,   104,   105,   106,   107,
     108,   109,   101,     0,   102,     0,   429,     0,    92,   103,
      93,    94,    95,    96,    97,   100,    98,    99,   104,   105,
     106,   107,   108,   109,   101,     0,   102,     0,   431,     0,
      92,   103,    93,    94,    95,    96,    97,   100,    98,    99,
     104,   105,   106,   107,   108,   109,     0,     0,     0,     0,
       0,     0,     0,     0,   101,     0,   102,     0,     0,   100,
      92,   103,    93,    94,    95,    96,    97,     0,    98,    99,
     104,   105,   106,   107,   108,   109,   101,     0,   102,     0,
       0,     0,    92,   103,    93,    94,    95,    96,    97,   100,
      98,    99,   104,   105,   106,   107,   108,   109,   101,     0,
     102,     0,     0,     0,    92,   103,    93,    94,    95,    96,
      97,   100,    98,    99,   104,   105,   106,   107,   108,   109,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
     102,     0,     0,   100,     0,   103,     0,     0,     0,     0,
       0,     0,   452,     0,   104,   105,   106,   107,   108,   109,
     101,     0,   102,     0,     0,     0,    92,   198,    93,    94,
      95,    96,    97,     0,    98,    99,   104,   105,   106,   107,
     108,   109,   101,     0,   102,     0,     0,     0,     0,   200,
       0,     0,     0,     0,     0,   100,     4,     0,   104,   105,
     106,   107,   108,   109,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,     0,   524,     0,   489,     0,    60,     0,
       0,     0,     0,     0,   101,     0,   102,    30,     0,     0,
       0,   103,     0,     0,     0,     0,     0,     0,     0,     0,
     104,   105,   106,   107,   108,   109,     4,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,   370,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,    30,     0,    31,
       0,    33,     0,   392,   371,     0,     0,   238,     0,     0,
       0,     0,     4,    62,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,   416,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,    30,     0,    31,     0,    33,     0,   237,
     371,     0,     0,   238,     0,     0,     0,     0,     4,    62,
       0,     0,     0,     0,     0,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,   416,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   417,     4,     0,     0,     0,     0,     0,
       0,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,     0,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   557,
       4,     0,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,   259,     0,   260,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,    30,     0,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,  -284,     0,     4,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,   470,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,    30,     0,    31,
       0,    33,     0,     0,   261,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,  -285,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,    30,     0,    31,     0,    33,     0,     0,
     471,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
      30,     0,    31,    32,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,   490,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,    30,     0,    31,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,   491,   490,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,    30,     0,    31,     0,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,   493,   274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,    30,
       0,    31,     0,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,   416,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,    30,     0,     0,    32,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,     0,     4,    32,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,    30,     0,    31,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,  -284,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,   147,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,    30,     0,    31,    32,    33,
       4,     0,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,    29,
       0,    30,     0,    31,     0,    33,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30
};

static const yytype_int16 yycheck[] =
{
      57,    57,    35,    57,    58,    62,     3,    58,    68,     1,
     151,   137,   130,   155,   132,   150,   166,   239,    51,    80,
     184,   147,    83,   484,   188,   135,     3,   275,    61,     0,
       3,     0,     3,   131,    86,   145,     1,   155,     3,    20,
       3,   103,    62,    80,    36,    37,   103,   103,   100,    41,
      42,    43,     1,    45,     3,    57,    78,    54,   192,   193,
       1,    80,     3,   100,   101,    80,   116,   505,    39,    66,
     508,    86,    49,   130,   130,   132,   132,    54,    49,     3,
       4,   100,    59,    54,   394,    82,   101,   144,    59,    66,
     441,   401,   226,   227,   151,    66,    78,   238,   155,   155,
      71,   103,   135,   165,   158,    78,    85,   158,     1,     1,
       3,   131,   145,    78,    57,    58,   577,     1,    99,     3,
      80,   141,    85,    88,   144,     1,   267,     3,     1,   279,
       3,    85,   186,   275,   196,   186,   198,    86,   200,   237,
     100,   198,   198,   200,   200,    86,   203,   203,    91,    78,
     212,   315,   149,    82,    97,    98,    99,   275,   150,     1,
     310,     3,   312,    85,   262,   215,   216,   217,    85,   520,
     521,   233,   149,   116,   396,     1,    80,     3,   149,    78,
     177,   238,    86,   154,    78,    78,    78,    79,    91,    81,
      82,    80,    89,    90,    78,    88,   198,    81,   200,    80,
      80,   203,    78,    88,    88,    86,    86,   100,    93,    94,
     267,   100,    88,   156,   271,   158,   100,   237,   275,   275,
     101,    80,   284,   285,   100,    80,     1,    86,     3,   262,
       1,    86,     3,     1,   375,     3,    78,    79,    80,   259,
      82,   382,   262,   186,   277,   237,   381,   190,   191,   192,
     193,   194,   195,   156,   502,     1,    78,     3,    15,    16,
      82,   101,   205,   389,   414,   101,   320,   417,     1,   320,
       3,   413,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     340,    39,    40,    41,   392,   413,    87,    63,    64,    65,
     137,    80,   205,    78,   247,    97,    81,    78,    79,    80,
     147,    82,    98,    88,   151,   218,   219,    88,   375,    85,
      79,   100,   379,    19,    72,   382,    80,    80,    13,    14,
      79,   385,    78,   474,   385,     1,   396,     3,    95,    96,
      88,    79,    88,    79,   247,    78,   289,   100,   405,    82,
     370,   501,    17,    18,   480,    88,   413,   413,   484,   392,
     502,    10,    11,    12,    79,    80,   420,   204,   311,   420,
      88,   281,   392,   283,   211,    85,   438,   320,    79,    80,
     323,    80,    81,   326,   502,    78,   289,    81,   331,   381,
      79,    80,   446,   447,   451,   451,    78,   340,   308,   342,
     392,   238,   394,    81,   458,   459,    79,   464,   311,   401,
       3,   248,    78,    79,    80,    79,    82,   474,   361,   100,
     323,   478,    88,   326,   367,   100,   552,     3,   331,    78,
     267,   374,     3,    82,   271,    84,    79,    80,    82,   342,
      84,   384,   385,     7,   441,   502,   502,    80,    81,   101,
     470,   577,   506,    80,    81,   506,   510,   101,   361,   510,
      79,    80,    79,     1,   367,    79,    80,   304,   305,   489,
     490,   374,   505,    79,    80,   508,    80,   420,    79,    80,
      83,   384,    79,    80,   541,    83,   429,     1,   431,    79,
      80,    79,    80,   220,   221,    81,   439,    78,    85,    78,
     100,    79,   101,   446,   447,    79,   568,   569,    80,   571,
     572,    79,    79,    79,    83,   458,   459,   427,   575,   575,
       1,    83,     3,    79,     3,     3,   429,    86,   431,    83,
     473,     1,    83,     3,    83,   100,   439,    81,   375,    63,
      78,    79,   379,    81,    82,   382,    85,    83,    83,    79,
      88,    83,   389,   100,   100,     1,    83,     3,    39,    40,
      41,    83,    83,   506,    83,    78,    78,   510,   405,    61,
     473,   408,    81,    81,    81,    61,   519,    83,    83,    83,
      83,    83,     1,    83,     3,   528,     5,     6,     7,     8,
       9,    72,    11,    12,   228,   575,   231,    78,    79,    80,
      81,    82,   512,   513,   514,   515,   100,    88,    78,    79,
      80,   229,    82,    32,   230,   452,   519,   232,    88,   456,
     413,    85,   452,   390,     1,   528,     3,   464,    45,   177,
     467,    66,    78,    79,    80,    -1,    82,   474,    -1,    -1,
      -1,   478,    88,   480,    -1,    -1,    -1,   484,    -1,    -1,
      -1,    -1,    71,    -1,    73,    -1,    -1,   567,    -1,    78,
     570,   190,   191,    -1,    -1,   194,   195,    -1,    87,    88,
      89,    90,    91,    92,    -1,    -1,   586,   587,    -1,    -1,
      -1,   100,   592,    -1,   594,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   222,   223,   224,   225,   607,    -1,   609,
      -1,    78,    79,    80,   541,    82,    -1,   544,    -1,    -1,
      -1,    88,     1,    -1,     3,   552,     5,     6,     7,     8,
       9,    -1,    11,    12,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,   573,    -1,    -1,   576,
     577,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    91,    92,   101,    -1,    -1,    -1,     1,    -1,
       3,   100,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    92,
      -1,    -1,    -1,    -1,     1,    -1,     3,   100,     5,     6,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      32,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    71,   100,    73,
      -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    92,    -1,
      -1,    95,    96,    -1,    -1,    99,   100,     3,    -1,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,     3,    -1,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    92,    -1,    -1,    95,
      96,    -1,    -1,    99,   100,    71,    -1,    73,    -1,    -1,
      -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    92,    -1,    -1,    95,
      96,    -1,    -1,    99,   100,     3,    -1,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,     3,    -1,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    73,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    -1,    -1,    95,    96,    -1,
      -1,    99,   100,    71,    -1,    73,    -1,    -1,    -1,    -1,
      78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    -1,    -1,    95,    96,    -1,
      -1,    99,   100,     3,    -1,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,     3,    -1,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    73,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,    -1,    -1,    95,    96,    -1,    -1,    99,
     100,    71,    -1,    73,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    88,    89,
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
      92,    -1,    -1,    95,    96,    -1,    -1,    99,   100,    71,
      -1,    73,    -1,    -1,    -1,    -1,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      92,    -1,    -1,    95,    96,    -1,    -1,    99,   100,     3,
      -1,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,     3,
      -1,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    -1,
      -1,    95,    96,    -1,    -1,    99,   100,    71,    -1,    73,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    -1,
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
      -1,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,
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
      -1,    71,    -1,    73,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,    -1,    -1,    95,    96,    -1,    -1,    99,
     100,    71,    -1,    73,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,    -1,    -1,    95,    96,    -1,     3,    99,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    32,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,    -1,    -1,
      95,    96,    -1,    -1,    71,    -1,    73,    -1,     1,    -1,
       3,    78,     5,     6,     7,     8,     9,    -1,    11,    12,
      87,    88,    89,    90,    91,    92,    -1,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    -1,     1,    -1,     3,    78,     5,     6,     7,     8,
       9,    -1,    11,    12,    87,    88,    89,    90,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    -1,     1,    -1,     3,    78,
       5,     6,     7,     8,     9,    -1,    11,    12,    87,    88,
      89,    90,    91,    92,    -1,    -1,    -1,    -1,     1,    -1,
       3,    -1,     5,     6,     7,     8,     9,    32,    11,    12,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,    71,    72,
      73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    87,    88,    89,    90,    91,    92,
       1,    -1,     3,    -1,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,    -1,     5,     6,     7,     8,
       9,    32,    11,    12,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    92,    71,    72,    73,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,     1,    -1,     3,    -1,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,
       5,     6,     7,     8,     9,    32,    11,    12,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,    71,    72,    73,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,     1,    -1,
       3,    -1,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,    -1,     5,     6,     7,     8,     9,    32,
      11,    12,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    -1,     1,    -1,     3,    -1,     5,     6,     7,     8,
       9,    32,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    -1,    -1,    32,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,    92,
      71,    -1,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    82,    -1,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    71,    -1,    73,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    82,    -1,    84,    85,    86,    87,    88,
      89,    90,    91,    92,     1,    -1,     3,    -1,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,
       5,     6,     7,     8,     9,    32,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,    -1,     5,     6,     7,     8,     9,    32,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    -1,    32,
      -1,    78,    -1,    -1,    -1,    82,    -1,    84,    85,    -1,
      87,    88,    89,    90,    91,    92,    71,    -1,    73,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    82,    -1,    84,
      85,    -1,    87,    88,    89,    90,    91,    92,    71,    -1,
      73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    87,    88,    89,    90,    91,    92,
       1,    -1,     3,    -1,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,    -1,     5,     6,     7,     8,
       9,    32,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,     6,
       7,     8,     9,    32,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    73,    -1,    -1,    32,    -1,    78,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    92,    71,    -1,    73,    -1,    -1,    -1,    -1,    78,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,    71,    -1,    73,    -1,    -1,    -1,
      -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,     1,    -1,     3,    -1,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,    -1,     5,     6,     7,     8,     9,    32,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,    -1,     5,     6,     7,     8,     9,    32,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,
       1,    32,     3,    78,     5,     6,     7,     8,     9,    -1,
      11,    12,    87,    88,    89,    90,    91,    92,    71,    -1,
      73,    -1,     1,    -1,     3,    78,     5,     6,     7,     8,
       9,    32,    11,    12,    87,    88,    89,    90,    91,    92,
      71,    -1,    73,    -1,     1,    -1,     3,    78,     5,     6,
       7,     8,     9,    32,    11,    12,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    73,    -1,     1,    32,     3,    78,     5,     6,
       7,     8,     9,    -1,    11,    12,    87,    88,    89,    90,
      91,    92,    71,    -1,    73,    -1,     1,    -1,     3,    78,
       5,     6,     7,     8,     9,    32,    11,    12,    87,    88,
      89,    90,    91,    92,    71,    -1,    73,    -1,     1,    -1,
       3,    78,     5,     6,     7,     8,     9,    32,    11,    12,
      87,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    -1,    32,
       3,    78,     5,     6,     7,     8,     9,    -1,    11,    12,
      87,    88,    89,    90,    91,    92,    71,    -1,    73,    -1,
      -1,    -1,     3,    78,     5,     6,     7,     8,     9,    32,
      11,    12,    87,    88,    89,    90,    91,    92,    71,    -1,
      73,    -1,    -1,    -1,     3,    78,     5,     6,     7,     8,
       9,    32,    11,    12,    87,    88,    89,    90,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      73,    -1,    -1,    32,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    87,    88,    89,    90,    91,    92,
      71,    -1,    73,    -1,    -1,    -1,     3,    78,     5,     6,
       7,     8,     9,    -1,    11,    12,    87,    88,    89,    90,
      91,    92,    71,    -1,    73,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    32,    31,    -1,    87,    88,
      89,    90,    91,    92,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    59,    -1,     1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    73,    72,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,    31,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      -1,    76,    -1,    78,    79,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    31,    88,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    76,    -1,    78,
      79,    -1,    -1,    82,    -1,    -1,    -1,    -1,    31,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      31,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    31,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      -1,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,     0,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    72,    -1,    -1,    75,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    31,    75,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,   101,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    75,    76,
      31,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    70,
      -1,    72,    -1,    74,    -1,    76,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   170,   179,     1,    31,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    70,
      72,    74,    75,    76,   130,   131,   134,   135,   136,   138,
     144,   148,   149,   150,   167,   180,   181,   182,     0,     1,
     130,   131,   170,   172,   183,     3,    85,    78,    78,     1,
       3,    78,    88,   100,   132,   133,   151,   152,   153,   131,
     131,     3,     4,   170,   131,   131,   131,   171,   181,   172,
       1,   151,    85,   130,   172,    85,     1,     3,   105,   145,
     146,     1,     3,     5,     6,     7,     8,     9,    11,    12,
      32,    71,    73,    78,    87,    88,    89,    90,    91,    92,
     103,   104,   106,   107,   110,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   129,
     135,   141,   148,   159,   129,    80,   100,   101,   172,     1,
     151,     1,   148,   153,   154,    80,   100,   101,   172,   183,
      78,    82,   152,   170,   137,    85,     1,     3,    58,    59,
      60,    62,    66,    67,    68,    69,    86,   100,   112,   125,
     126,   128,   130,   168,   169,   170,   172,   173,   174,   175,
     176,   178,     1,   145,    80,    86,   101,   101,    80,    86,
      15,    16,    17,    18,    95,    96,    99,   115,    78,   112,
      78,   112,   112,    78,    78,     1,   128,   159,    10,    11,
      12,    78,    82,    84,   114,    88,    93,    94,    89,    90,
      13,    14,    15,    16,    95,    96,    17,    18,    87,    97,
      98,    19,    20,    99,    79,   141,     1,    78,    82,   153,
     160,   161,   141,    79,    80,     1,   133,     1,    85,   126,
     162,    79,    79,   153,   148,   153,   133,   162,   172,     1,
       3,    79,   131,   155,   156,   157,   158,    35,    83,    88,
     126,   154,    85,   170,     1,   139,   140,   141,   167,    86,
     100,    81,   129,    81,    78,    78,     3,   100,   100,     1,
     100,   128,   171,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   101,   127,    80,   100,    63,    64,    65,
     177,     1,    86,   174,    86,    80,    86,     1,   146,   129,
     147,    86,   146,     1,   117,   117,     1,   118,   118,   117,
     117,     1,   128,   159,   159,   159,   126,    79,   100,    79,
      79,     3,     1,    79,   111,   126,   128,     3,   114,   114,
     114,   115,   115,   116,   116,   117,   117,   117,   117,   118,
     118,     1,   119,   120,   121,   122,   123,     1,   128,    79,
       1,    79,   155,   160,     1,    35,    83,    88,   126,   154,
     161,    78,    82,     7,     1,    82,    84,   162,   163,   164,
     165,   166,    78,    79,    80,   151,   153,   160,   151,   160,
      79,    80,    79,    80,   126,   154,    83,    83,    35,    83,
      88,   126,     1,    85,    86,   100,     1,    86,   140,     1,
      81,   100,   142,   143,   151,   171,   168,    81,   168,     1,
     128,     1,   128,   100,   100,   100,   126,   126,    78,     1,
     168,    78,   171,   171,    86,   129,    81,    81,    79,    79,
      79,    80,    85,   114,    80,    79,    80,    83,    81,    81,
      79,    79,    83,   126,   154,    83,    83,    35,    83,   126,
       1,    79,   155,     1,    35,    83,    88,   126,   154,    79,
      80,    86,   129,     3,    80,    86,   162,   101,   166,     1,
       1,    57,   157,    57,   157,     3,    83,   126,   126,    83,
      83,    86,   139,   171,   171,    80,    81,   129,    80,   100,
      81,   168,    79,    79,    79,    79,   128,    63,    63,     1,
     130,   175,   125,   125,    59,   108,   109,   159,     1,   163,
     126,   125,   125,    83,   126,   126,    83,    79,    79,    83,
     126,   154,    83,    83,    35,    83,   126,   100,   162,    83,
      86,   162,   164,    79,    83,    83,   171,    86,     1,   143,
     129,   143,   129,   168,   168,   168,   168,    79,    78,    78,
      79,   175,   175,    81,    79,    80,    81,    80,    86,    83,
      83,    83,   126,   126,    83,   162,    61,    61,   168,   128,
     128,   168,    79,   128,    79,   128,   126,   109,   126,    86,
      83,    83,   168,   168,    79,    79,   168,    79,   168,    79,
     100,   100,   168,   168
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
     127,   128,   128,   129,   130,   130,   130,   130,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   132,   132,
     132,   133,   133,   133,   134,   134,   134,   134,   134,   134,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   136,   137,   136,   136,   136,
     136,   138,   138,   139,   139,   140,   140,   140,   140,   141,
     141,   141,   141,   142,   142,   142,   143,   143,   143,   143,
     144,   144,   144,   144,   144,   144,   144,   145,   145,   145,
     147,   146,   146,   146,   148,   148,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     153,   153,   153,   153,   153,   154,   154,   155,   155,   155,
     156,   156,   156,   157,   157,   157,   157,   157,   158,   158,
     159,   159,   160,   160,   160,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     162,   162,   162,   162,   163,   163,   163,   163,   163,   164,
     165,   165,   166,   166,   167,   168,   168,   168,   168,   168,
     168,   169,   169,   169,   170,   171,   172,   172,   172,   173,
     173,   174,   174,   175,   175,   175,   176,   176,   176,   176,
     176,   176,   177,   177,   177,   177,   177,   177,   177,   177,
     178,   178,   178,   178,   178,   178,   179,   180,   180,   181,
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
       1,     1,     3,     1,     2,     3,     1,     3,     2,     1,
       1,     2,     2,     1,     2,     1,     2,     1,     1,     3,
       3,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     0,     7,     2,     7,
       6,     1,     1,     1,     2,     2,     3,     1,     2,     2,
       1,     2,     1,     1,     3,     3,     2,     3,     1,     3,
       4,     5,     5,     6,     2,     4,     5,     1,     3,     3,
       0,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       4,     4,     2,     1,     1,     3,     3,     4,     6,     5,
       5,     6,     5,     4,     4,     4,     3,     4,     4,     3,
       3,     2,     2,     1,     3,     1,     2,     3,     1,     3,
       1,     3,     3,     2,     2,     1,     2,     2,     1,     3,
       2,     1,     2,     1,     1,     3,     2,     3,     5,     4,
       5,     4,     3,     3,     3,     4,     6,     5,     5,     6,
       4,     4,     2,     3,     3,     4,     3,     4,     4,     2,
       3,     4,     3,     1,     2,     1,     4,     3,     3,     2,
       1,     2,     3,     2,     7,     1,     1,     1,     1,     3,
       1,     3,     4,     3,     0,     0,     4,     5,     5,     1,
       2,     1,     1,     1,     2,     2,     7,     5,     5,     5,
       5,     7,     5,     7,     6,     7,     6,     7,     7,     5,
       3,     2,     2,     2,     3,     3,     3,     1,     2,     1,
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
#line 2933 "parserBison.tab.c"
    break;

  case 88: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 214 "parserBison.y"
                                                                     {printf("ABIEL TODAVIA MAS MECO3\n");}
#line 2939 "parserBison.tab.c"
    break;

  case 105: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 243 "parserBison.y"
                                                           {end_declaration();}
#line 2945 "parserBison.tab.c"
    break;

  case 107: /* declaration: declaration_specifiers error ';'  */
#line 245 "parserBison.y"
                                           {/*printf("CULPA DE ALEBEEEEEEEEEEEEEEEEEEEEEEEEEEE\n");*/}
#line 2951 "parserBison.tab.c"
    break;

  case 118: /* init_declarator_list: init_declarator  */
#line 262 "parserBison.y"
                          {printf("ENTRA A LA LISTA\n");}
#line 2957 "parserBison.tab.c"
    break;

  case 121: /* init_declarator: declarator '=' initializer  */
#line 268 "parserBison.y"
                                     {printf("ABIEL MECO\n");}
#line 2963 "parserBison.tab.c"
    break;

  case 122: /* init_declarator: declarator  */
#line 269 "parserBison.y"
                     {printf("ESTO ES UN DECLARATOR CULPA MIA\n");}
#line 2969 "parserBison.tab.c"
    break;

  case 123: /* init_declarator: error '=' initializer  */
#line 270 "parserBison.y"
                                {printf("ABIEL MECO2\n");}
#line 2975 "parserBison.tab.c"
    break;

  case 124: /* storage_class_specifier: TYPEDEF  */
#line 274 "parserBison.y"
                        {typedef_name_flag = 1;}
#line 2981 "parserBison.tab.c"
    break;

  case 130: /* type_specifier: VOID  */
#line 283 "parserBison.y"
               {printf("********************************** VOID\n"); save_type();}
#line 2987 "parserBison.tab.c"
    break;

  case 131: /* type_specifier: CHAR  */
#line 284 "parserBison.y"
               {save_type();}
#line 2993 "parserBison.tab.c"
    break;

  case 132: /* type_specifier: SHORT  */
#line 285 "parserBison.y"
                {save_type();}
#line 2999 "parserBison.tab.c"
    break;

  case 133: /* type_specifier: INT  */
#line 286 "parserBison.y"
              {save_type();}
#line 3005 "parserBison.tab.c"
    break;

  case 134: /* type_specifier: LONG  */
#line 287 "parserBison.y"
               {save_type();}
#line 3011 "parserBison.tab.c"
    break;

  case 135: /* type_specifier: FLOAT  */
#line 288 "parserBison.y"
                {save_type();}
#line 3017 "parserBison.tab.c"
    break;

  case 136: /* type_specifier: DOUBLE  */
#line 289 "parserBison.y"
                 {save_type();}
#line 3023 "parserBison.tab.c"
    break;

  case 137: /* type_specifier: SIGNED  */
#line 290 "parserBison.y"
                 {save_type();}
#line 3029 "parserBison.tab.c"
    break;

  case 138: /* type_specifier: UNSIGNED  */
#line 291 "parserBison.y"
                   {save_type();}
#line 3035 "parserBison.tab.c"
    break;

  case 139: /* type_specifier: _BOOL  */
#line 292 "parserBison.y"
                {save_type();}
#line 3041 "parserBison.tab.c"
    break;

  case 140: /* type_specifier: _COMPLEX  */
#line 293 "parserBison.y"
                   {save_type();}
#line 3047 "parserBison.tab.c"
    break;

  case 141: /* type_specifier: _IMAGINARY  */
#line 294 "parserBison.y"
                     {save_type();}
#line 3053 "parserBison.tab.c"
    break;

  case 143: /* type_specifier: enum_specifier  */
#line 296 "parserBison.y"
                         {save_type();}
#line 3059 "parserBison.tab.c"
    break;

  case 144: /* type_specifier: TYPEDEF_NAME  */
#line 297 "parserBison.y"
                       {save_type();}
#line 3065 "parserBison.tab.c"
    break;

  case 146: /* $@1: %empty  */
#line 302 "parserBison.y"
                                    {save_identifier_struct_union((yyvsp[0].struct_union_name));}
#line 3071 "parserBison.tab.c"
    break;

  case 147: /* struct_or_union_specifier: struct_or_union STRUCT_ID $@1 prepare_scope '{' struct_declaration_list '}'  */
#line 302 "parserBison.y"
                                                                                                                      {finish_struct_union();}
#line 3077 "parserBison.tab.c"
    break;

  case 148: /* struct_or_union_specifier: struct_or_union STRUCT_ID  */
#line 303 "parserBison.y"
                                    {save_identifier_struct_union((yyvsp[0].struct_union_name));}
#line 3083 "parserBison.tab.c"
    break;

  case 151: /* struct_or_union: STRUCT  */
#line 309 "parserBison.y"
                 {save_struct(); typedef_name_flag = 1;}
#line 3089 "parserBison.tab.c"
    break;

  case 152: /* struct_or_union: UNION  */
#line 310 "parserBison.y"
                {save_union(); typedef_name_flag = 2;}
#line 3095 "parserBison.tab.c"
    break;

  case 156: /* struct_declaration: specifier_qualifier_list struct_declarator_list ';'  */
#line 320 "parserBison.y"
                                                              {end_declaration();}
#line 3101 "parserBison.tab.c"
    break;

  case 180: /* $@2: %empty  */
#line 362 "parserBison.y"
                                   {printf("ABIEL MECO\n");}
#line 3107 "parserBison.tab.c"
    break;

  case 183: /* enumerator: error '=' constant_expression  */
#line 364 "parserBison.y"
                                         {printf("ABIEL MECO\n");}
#line 3113 "parserBison.tab.c"
    break;

  case 194: /* direct_declarator: IDENTIFIER  */
#line 390 "parserBison.y"
                     {save_id();}
#line 3119 "parserBison.tab.c"
    break;

  case 269: /* designation: designator_list '='  */
#line 502 "parserBison.y"
                               {printf("ABIEL MECO\n");}
#line 3125 "parserBison.tab.c"
    break;

  case 284: /* prepare_scope: %empty  */
#line 535 "parserBison.y"
         { open_scope(); }
#line 3131 "parserBison.tab.c"
    break;

  case 285: /* finish_scope: %empty  */
#line 539 "parserBison.y"
         { print_symboltables(); close_scope(); }
#line 3137 "parserBison.tab.c"
    break;

  case 302: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 576 "parserBison.y"
                                             {printf("Hola1\n");}
#line 3143 "parserBison.tab.c"
    break;

  case 303: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 577 "parserBison.y"
                                                    {printf("Hola2\n");}
#line 3149 "parserBison.tab.c"
    break;

  case 304: /* iteration_statement: FOR '(' expression_statement expression_statement ')' statement  */
#line 578 "parserBison.y"
                                                                          {printf("Hola3\n");}
#line 3155 "parserBison.tab.c"
    break;

  case 305: /* iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement  */
#line 579 "parserBison.y"
                                                                                     {printf("Hola4\n");}
#line 3161 "parserBison.tab.c"
    break;

  case 306: /* iteration_statement: FOR '(' declaration expression_statement ')' statement  */
#line 580 "parserBison.y"
                                                                 {printf("Hola5\n");}
#line 3167 "parserBison.tab.c"
    break;

  case 307: /* iteration_statement: FOR '(' declaration expression_statement expression ')' statement  */
#line 581 "parserBison.y"
                                                                            {printf("Hola6\n");}
#line 3173 "parserBison.tab.c"
    break;

  case 308: /* iteration_statement: DO error WHILE '(' expression ')' ';'  */
#line 582 "parserBison.y"
                                                 {printf("Hola7\n");}
#line 3179 "parserBison.tab.c"
    break;

  case 309: /* iteration_statement: FOR '(' error ')' statement  */
#line 583 "parserBison.y"
                                       {printf("Hola8\n");}
#line 3185 "parserBison.tab.c"
    break;

  case 317: /* translation_unit: external_declaration  */
#line 601 "parserBison.y"
                               {printf("11111111111111111111111111\n");}
#line 3191 "parserBison.tab.c"
    break;

  case 318: /* translation_unit: translation_unit external_declaration  */
#line 602 "parserBison.y"
                                                 {printf("22222222222222222222222222\n");}
#line 3197 "parserBison.tab.c"
    break;

  case 320: /* external_declaration: declaration  */
#line 607 "parserBison.y"
                      {printf("SE VA CON DECLARATION\n");}
#line 3203 "parserBison.tab.c"
    break;


#line 3207 "parserBison.tab.c"

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
