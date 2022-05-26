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
  YYSYMBOL_struct_or_union = 137,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 138,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 139,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 140, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 141,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 142,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 143,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 144,          /* enumerator_list  */
  YYSYMBOL_enumerator = 145,               /* enumerator  */
  YYSYMBOL_146_2 = 146,                    /* $@2  */
  YYSYMBOL_type_qualifier = 147,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 148,       /* function_specifier  */
  YYSYMBOL_alignment_specifier = 149,      /* alignment_specifier  */
  YYSYMBOL_declarator = 150,               /* declarator  */
  YYSYMBOL_direct_declarator = 151,        /* direct_declarator  */
  YYSYMBOL_pointer = 152,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 153,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 154,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 155,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 156,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 157,          /* identifier_list  */
  YYSYMBOL_type_name = 158,                /* type_name  */
  YYSYMBOL_abstract_declarator = 159,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 160, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 161,              /* initializer  */
  YYSYMBOL_initializer_list = 162,         /* initializer_list  */
  YYSYMBOL_designation = 163,              /* designation  */
  YYSYMBOL_designator_list = 164,          /* designator_list  */
  YYSYMBOL_designator = 165,               /* designator  */
  YYSYMBOL__STATIC_ASSERT_declaration = 166, /* _STATIC_ASSERT_declaration  */
  YYSYMBOL_statement = 167,                /* statement  */
  YYSYMBOL_labeled_statement = 168,        /* labeled_statement  */
  YYSYMBOL_prepare_scope = 169,            /* prepare_scope  */
  YYSYMBOL_finish_scope = 170,             /* finish_scope  */
  YYSYMBOL_compound_statement = 171,       /* compound_statement  */
  YYSYMBOL_block_item_list = 172,          /* block_item_list  */
  YYSYMBOL_block_item = 173,               /* block_item  */
  YYSYMBOL_expression_statement = 174,     /* expression_statement  */
  YYSYMBOL_selection_statement = 175,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 176,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 177,           /* jump_statement  */
  YYSYMBOL_translation_unit = 178,         /* translation_unit  */
  YYSYMBOL_external_declaration = 179,     /* external_declaration  */
  YYSYMBOL_function_definition = 180,      /* function_definition  */
  YYSYMBOL_declaration_list = 181          /* declaration_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 21 "parserBison.y"

	static void location_print (FILE *out, YYLTYPE const * const loc);
	#define YYLOCATION_PRINT location_print

#line 312 "parserBison.tab.c"

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
#define YYLAST   4798

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  327
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
     292,   293,   294,   295,   296,   297,   301,   302,   303,   304,
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
     587,   588,   589,   590,   591,   592,   596,   597,   601,   602,
     606,   607,   608,   609,   610,   611,   615,   616
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
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "$@2", "type_qualifier", "function_specifier", "alignment_specifier",
  "declarator", "direct_declarator", "pointer", "type_qualifier_list",
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

#define YYPACT_NINF (-528)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-285)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -528,  4390,  4335,  4169,  -528,  -528,  -528,  -528,  -528,  -528,
    -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,
    -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,    34,   -47,
    -528,  -528,    25,  -528,  -528,   120,  4655,  4655,  -528,   104,
    -528,  4655,  4655,  4655,  -528,  -528,  -528,  -528,  -528,  -528,
    -528,   127,    68,  -528,   809,   114,   126,  2559,  3485,    17,
    -528,   219,   244,  -528,   284,   809,    87,    43,  -528,  -528,
     119,   134,  -528,  -528,  -528,  -528,  -528,    17,   895,  -528,
    -528,   226,   -40,  -528,    84,    -5,  -528,  2342,  -528,  -528,
    -528,  -528,  -528,  3888,  3910,  3910,  -528,    57,   111,  2650,
    -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,
     529,  -528,  3932,  -528,   109,   -48,   239,    96,   245,   122,
     125,   131,   214,    15,  -528,   163,  4727,   194,  4727,   166,
     176,  -528,  -528,   170,   181,   183,  -528,  -528,   404,   -43,
     -41,  -528,   173,  -528,   809,  4224,  2741,    87,   179,  4557,
    1453,   215,  3485,   227,   203,   249,   252,  1186,   256,   336,
     248,   261,   712,  -528,  -528,   566,  -528,  -528,   -35,  -528,
    -528,  -528,  -528,   992,  -528,  -528,  -528,  -528,  -528,   -23,
       9,   232,  -528,  3485,  -528,    23,  -528,  3507,  3507,  3529,
    3529,  3507,  3507,  3620,   109,  2650,  -528,  2650,  -528,  -528,
    4727,  3642,  1483,   189,   265,   364,  -528,  -528,  3259,  3642,
     388,  -528,  3932,  3932,  3932,  3932,  3932,  3507,  3507,  3507,
    3507,  3507,  3507,  3529,  3529,  3664,  3664,  3664,  3664,  3664,
    3755,  -528,  -528,   285,  4058,  2763,   275,  -528,    98,  -528,
    -528,   387,  -528,  -528,  -528,  -528,  -528,   315,  3350,   315,
    -528,  3350,  -528,   257,  -528,  -528,   287,   322,   324,  -528,
     200,  2118,  3080,  -528,   323,   330,  2854,  4612,   -36,  2472,
    -528,   100,  -528,  -528,   -24,  1229,   358,  1229,  3777,  3799,
    3642,  1580,   378,   453,   379,   363,  -528,  -528,  2215,  -528,
     -13,  -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,
    -528,  -528,  -528,  3642,  3642,  -528,  2245,  -528,  -528,  -528,
      32,  -528,   392,  -528,  -528,  3485,  -528,  -528,  3932,   239,
     239,  2464,    96,    96,   239,   239,  1610,   213,   385,   386,
     389,   391,  -528,  -528,  -528,   802,  -528,  1707,  -528,   267,
    -528,   107,  -528,  -528,  -528,  -528,   109,   109,   -48,   -48,
     239,   239,   239,   239,    96,    96,  2371,   245,   122,   125,
     131,   214,  1737,   218,  -528,   329,  -528,   409,   416,  1834,
    3080,  -528,   419,   420,  2876,    98,  4279,  2967,   426,   398,
    -528,  3215,  -528,  -528,  -528,  -528,  4002,  -528,  4445,  -528,
     233,  -528,  -528,  -528,  -528,  4501,  -528,   502,   424,  3080,
    -528,  -528,  3642,  -528,   425,   427,   -17,  4113,  -528,  -528,
     412,  -528,  -528,   290,  3485,  -528,   -12,  -528,   434,  -528,
    -528,  1229,  -528,  1864,   294,  1961,   302,   306,   440,   441,
     442,  1089,  -528,   -24,  -528,  -528,  -528,  -528,  -528,  -528,
    3485,  3485,   437,   437,  -528,  4693,  3237,  -528,  -528,  -528,
    3642,  -528,  3485,  3485,  -528,  -528,  -528,   444,  3080,  -528,
    -528,  3642,  -528,   445,   481,  -528,   446,  1991,  3080,  -528,
     447,   449,  2989,   435,  1356,  3485,   520,  -528,    52,  3350,
      93,  -528,   496,   222,  -528,  -528,  -528,  -528,  -528,  -528,
     455,   459,  -528,  -528,  -528,  -528,  -528,  -528,   169,  3485,
    -528,   169,  -528,  3485,  -528,  1229,  1229,  1229,  1229,  1229,
    3642,  3642,  1229,  1326,  1326,  -528,  -528,   465,   308,  -528,
     469,  2088,   121,  -528,  -528,  -528,  -528,   468,   472,  -528,
    -528,  -528,  -528,   473,  3080,  -528,  -528,  3642,  -528,   474,
    -528,  3350,  -528,   482,  -528,  3102,  -528,  -528,  -528,  -528,
    -528,  -528,  -528,  -528,  -528,   485,  -528,  -528,  -528,  -528,
     475,   506,  -528,  -528,  -528,   339,   367,  -528,  3372,  3394,
    3642,  -528,  4693,  3642,  3124,  -528,  -528,  -528,  -528,   488,
     489,  -528,  -528,  -528,  -528,  -528,  3350,  1229,  1229,   479,
     486,  -528,   370,  -528,   373,  -528,  -528,  -528,  -528,  -528,
    -528,  -528,  -528,  -528,  -528,  -528,  1229,  -528,  1229,  -528,
    -528,  1229,  -528,  1229,  -528,  -528
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     284,     0,     0,     0,   145,   125,   126,   127,   129,   130,
     188,   184,   185,   186,   140,   132,   133,   134,   135,   138,
     139,   136,   137,   131,   141,   142,   151,   152,     0,     0,
     187,   189,     0,   128,   319,     0,   110,   112,   143,   284,
     144,   114,   116,   118,   107,   285,   318,     1,   317,   284,
     326,     0,     0,   325,   284,   174,     0,     0,     0,   284,
     194,     0,     0,   104,     0,   284,   193,     0,   109,   111,
     148,     0,   113,   115,   117,   316,   324,     0,     0,   327,
     323,     0,     0,    11,   182,     0,   177,     0,     2,     8,
       9,    12,    13,     0,     0,     0,    10,     0,     0,     0,
      39,    40,    41,    42,    43,    44,    19,     3,     4,     7,
      32,    45,     0,    47,    51,    55,    58,    67,    72,    74,
      76,    78,    80,    82,   103,     0,   160,     0,   162,     0,
       0,   108,   322,     0,     0,     0,   215,   212,   211,     0,
       0,   119,   123,   321,   284,     0,     0,   192,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   285,   293,    45,    87,   101,     0,   291,
     292,   275,   276,     0,   289,   277,   278,   279,   280,     0,
       0,     0,   175,     0,   180,     0,   170,     0,     0,     0,
       0,     0,     0,     0,    54,     0,    36,     0,    33,    34,
       0,     0,     0,     0,     0,     0,    25,    26,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   191,   159,     0,     0,     0,     0,   230,   234,   161,
     190,     0,   209,   195,   214,   216,   210,     0,     0,     0,
     106,     0,   320,     0,   228,   206,     0,     0,   218,   220,
       0,     0,     0,   196,    40,     0,     0,     0,     0,     0,
     153,     0,   157,   285,   295,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   311,   312,     0,   313,
       0,   286,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,    90,     0,     0,   294,     0,   285,   290,   176,
       0,   172,     0,   179,   183,     0,   171,   178,     0,    65,
      66,     0,    70,    71,    63,    64,     0,     0,     0,     0,
       0,     0,     6,    89,     5,     0,    24,     0,    21,     0,
      29,     0,    23,    48,    49,    50,    52,    53,    56,    57,
      61,    62,    59,    60,    68,    69,     0,    73,    75,    77,
      79,    81,     0,     0,   259,     0,   252,     0,     0,     0,
       0,   236,    40,     0,     0,   232,     0,     0,     0,     0,
     121,     0,   263,   124,   120,   122,     0,   208,     0,   226,
       0,   227,   223,   224,   205,     0,   207,     0,     0,     0,
     197,   204,     0,   203,    40,     0,     0,     0,   285,   158,
       0,   285,   154,     0,     0,   155,     0,   163,   168,   288,
     281,     0,   283,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   310,   315,   314,    88,   102,   287,   173,   181,
       0,     0,    37,     0,    38,     0,     0,    46,    31,    22,
       0,    20,     0,     0,   253,   235,   256,     0,     0,   237,
     243,     0,   242,     0,     0,   254,     0,     0,     0,   244,
      40,     0,     0,     0,     0,     0,     0,   265,     0,     0,
       0,   270,     0,     0,   219,   222,   217,   221,   229,   199,
       0,     0,   200,   202,   285,   285,   150,   146,     0,     0,
     166,     0,   156,     0,   282,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,    86,     0,     0,    15,
       0,     0,     0,    30,    85,    83,   239,     0,     0,   241,
     257,   255,   258,     0,     0,   245,   251,     0,   250,     0,
     274,     0,   262,     0,   273,     0,   260,   264,   269,   271,
     209,   198,   201,   149,   147,     0,   165,   169,   164,   167,
     299,   297,   300,   298,   302,     0,     0,   309,     0,     0,
       0,    14,     0,     0,     0,    27,   238,   240,   247,     0,
       0,   248,   268,   272,   261,   267,     0,     0,     0,     0,
       0,   285,     0,   285,     0,    18,    16,    17,    28,   246,
     249,   266,   301,   296,   308,   303,     0,   285,     0,   285,
     306,     0,   304,     0,   307,   305
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -528,  -528,  -528,  -528,  -528,  -528,  -528,     0,  -528,  -528,
     207,  -528,   -58,   403,   242,   360,  -173,   342,   371,   357,
     368,   372,  -528,    33,   295,  -528,   -97,   -10,    19,  -528,
     124,  -528,    -9,  -528,   -56,  -528,  -528,   333,  -249,  -118,
    -528,  -422,  -528,   521,  -160,  -528,   -57,  -528,  -528,   -32,
     -63,    -3,  -140,  -133,  -528,  -310,  -528,   -38,  -120,  -221,
    -237,   157,  -527,  -528,   128,  -121,  -130,  -528,    13,  -154,
      50,  -528,   431,  -408,  -528,  -528,  -528,  -528,   605,  -528,
     544
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   106,   107,    84,   108,   109,   518,   519,   110,   339,
     165,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   166,   167,   303,   168,   125,    34,    64,
      51,   140,   141,    36,    37,    38,    39,   269,   270,   127,
     416,   417,    40,    85,    86,   315,    41,    42,    43,   389,
      66,    67,   138,   367,   258,   259,   260,   520,   391,   238,
     477,   478,   479,   480,   481,    44,   170,   171,    52,    75,
     172,   173,   174,   175,   176,   177,   178,     2,    45,    46,
      54
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     128,   126,   203,    65,   147,   136,   266,   237,   232,   291,
     239,   383,   257,     1,   385,   375,   322,   323,   586,   129,
     412,   313,    50,   514,   312,   317,    83,   282,   272,   134,
      57,   271,   142,   312,   229,    83,   247,    55,   249,   181,
     215,   216,   128,   126,   304,   182,    60,   586,   130,   408,
     354,   355,    71,    53,   211,   -89,   181,   248,   250,   137,
     183,   204,   309,   409,   305,   290,   304,   501,   494,   128,
     126,   128,   126,    79,   185,   -89,   556,   183,   485,   558,
     186,   245,   409,   148,    50,   487,   434,   502,   310,   136,
     124,   124,   128,   126,   311,   374,   327,   169,   203,    76,
     203,   413,    58,    60,    80,   568,   569,    70,   316,   132,
     219,   220,   341,   230,   368,   143,   131,   438,    56,   419,
      61,    59,   399,    60,   236,    35,    35,    82,    77,    83,
    -105,   545,   244,   363,   200,   246,   393,   546,   128,   126,
     128,   126,   276,   128,   126,   420,   272,   422,   272,   271,
     317,   271,    78,   437,   343,   344,   345,   328,   412,   329,
      68,    69,   330,    79,   145,    72,    73,    74,   146,   375,
     555,   284,    60,   314,   475,   376,   476,    61,   136,   377,
     414,   424,   426,   427,   184,   124,   304,    62,   201,   451,
     221,   222,   169,   548,   252,   233,   212,    61,    81,   415,
     574,   213,   214,  -284,  -105,   136,   575,    62,   225,   245,
     128,   126,   128,   126,  -105,   142,   124,   142,   149,    63,
     133,   226,    60,   233,   392,    60,    63,   179,   227,    83,
     458,   236,   228,   312,   233,    83,    60,   472,   380,   418,
     384,   231,   547,   466,   240,   135,    61,  -213,   242,   414,
     390,   217,   218,   390,   496,   241,    62,   497,   233,   243,
      60,   223,   224,   267,   111,   111,   368,   334,   304,   256,
      62,   234,  -231,   251,  -231,   235,   233,   447,   396,   397,
     278,    62,    11,    12,    13,   139,   272,    60,   233,   271,
      60,   504,   304,   441,   111,   275,    61,   304,   453,   386,
     196,   198,   199,   235,   582,   439,    62,   277,   585,    62,
     386,  -233,  -233,   136,   235,    30,   379,   245,    60,   111,
     136,  -213,  -213,  -213,  -213,  -213,   279,   147,   534,   280,
     233,    62,    60,   283,   386,   387,   388,   585,   235,   285,
     553,   554,   245,   335,    62,   449,   450,   286,   124,   601,
     128,   126,   234,  -233,   134,  -233,   235,   111,   256,   111,
     287,    61,   390,   364,   386,  -225,  -225,   336,   235,   498,
     499,    62,   506,   304,    62,   560,   561,   562,   563,   564,
     508,   304,   567,   390,   509,   304,   571,   572,   128,   126,
     111,   342,    61,   378,   111,   111,   111,   111,   111,   111,
     394,   245,    62,   395,   500,   400,   386,   364,   388,   111,
     235,   136,   401,   565,   566,   245,    62,   589,   304,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   606,   421,   608,
     429,   265,    11,    12,    13,   590,   304,   124,   607,   304,
     513,   609,   304,   611,   430,   613,   431,   602,   603,   348,
     349,   390,   432,   442,   443,   543,   418,   444,   111,   418,
     445,   592,   594,   515,   516,    30,   610,   245,   612,   390,
     390,   614,   233,   615,    60,   524,   525,   454,   111,   557,
     194,    62,   183,   559,   455,   111,   331,   233,   248,    60,
     256,   459,   460,   340,   473,   488,   489,   492,   124,   493,
     256,   409,   256,   111,   503,   128,   126,   510,   511,   256,
     512,   446,   111,   544,   531,   111,   526,   529,   111,   535,
     373,   536,   124,   111,   540,   587,   124,   551,   205,   206,
     207,   552,   111,   382,   111,   570,   382,   319,   320,   573,
     576,   324,   325,   194,   577,   578,   581,   398,   386,   530,
     388,   405,   235,   111,   583,   499,   588,   357,    62,   111,
     599,   600,   596,   386,   550,   388,   111,   235,   604,   350,
     351,   352,   353,    62,   359,   605,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   360,   358,   435,   436,
     407,   361,   180,   522,   308,   194,   208,    48,   549,   144,
     209,     0,   210,     0,     0,     0,     0,     0,   346,   347,
       0,   111,     0,     0,     0,     0,     0,     0,     0,     0,
     111,     0,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
     111,     0,     0,     0,   194,   457,   302,     0,     0,   463,
       0,     0,   471,     0,   111,     0,   382,     0,     0,     0,
       0,   111,   111,     0,   194,     0,     0,     0,     0,     0,
       0,   194,     0,     0,   490,     0,     0,   491,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,     0,   194,
     111,     0,     0,   288,     0,    88,    89,    90,    91,    92,
      93,   194,    94,    95,   194,     0,     0,     0,   111,   194,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     194,   382,     0,    96,     0,   523,     0,     0,     0,     0,
       0,     0,     0,   527,     0,     0,   528,     0,     0,   194,
       0,     0,     0,   533,     0,   194,     0,   539,     0,     0,
       0,     0,   194,     0,   382,     0,     0,     0,     0,     0,
       0,     0,    97,     0,    98,     0,     0,     0,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,     0,    88,    89,    90,    91,    92,
      93,   289,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   194,     0,   194,   579,
       0,     0,   580,    96,     0,     0,   382,     0,     0,     4,
     382,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,   595,     0,     0,   597,   382,
     194,     0,    97,     0,    98,     0,     0,   194,    29,    99,
      30,   382,    31,    32,    33,     0,   446,     0,   100,   101,
     102,   103,   104,   105,     0,     0,   150,     0,   151,    89,
      90,    91,    92,    93,     0,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   194,     4,    96,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,   152,   153,   154,     0,   155,   156,   157,   158,
     159,   160,   161,   162,    29,    97,    30,    98,    31,    32,
      33,     0,    99,     0,     0,     0,     0,     0,     0,  -284,
     163,   100,   101,   102,   103,   104,   105,     0,     0,     0,
       0,     0,     0,   306,   164,   151,    89,    90,    91,    92,
      93,     0,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,    96,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,   152,
     153,   154,     0,   155,   156,   157,   158,   159,   160,   161,
     162,    29,    97,    30,    98,    31,    32,    33,     0,    99,
       0,     0,     0,     0,     0,     0,  -284,   307,   100,   101,
     102,   103,   104,   105,     0,     0,     0,     0,     0,     0,
     306,   164,    88,    89,    90,    91,    92,    93,     0,    94,
      95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
      96,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,    97,
      30,    98,    31,    32,    33,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,     0,     0,     0,     0,     0,     0,   281,   164,   151,
      89,    90,    91,    92,    93,     0,    94,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     306,     0,   151,    89,    90,    91,    92,    93,     0,    94,
      95,     0,     0,   152,   153,   154,     0,   155,   156,   157,
     158,   159,   160,   161,   162,     0,    97,     0,    98,     0,
      96,     0,     0,    99,     0,     0,     0,     0,     0,     0,
    -284,     0,   100,   101,   102,   103,   104,   105,     0,     0,
       0,     0,     0,     0,     0,   164,   152,   153,   154,     0,
     155,   156,   157,   158,   159,   160,   161,   162,     0,    97,
       0,    98,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,  -284,     0,   100,   101,   102,   103,   104,
     105,     0,     0,     0,     0,     0,     0,   306,   164,    88,
      89,    90,    91,    92,    93,     0,    94,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,     0,    88,
      89,    90,    91,    92,    93,     0,    94,    95,     0,     0,
     187,   188,   189,   190,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,    98,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   101,   102,   103,   104,   105,     0,     0,
       0,     0,     0,     0,     0,   164,    97,     0,    98,     0,
       0,     0,     0,    99,     0,   541,     0,     0,     0,     0,
       0,   542,   100,   101,   102,   103,   104,   105,     0,     0,
     191,   192,     0,     0,   193,   333,    88,    89,    90,    91,
      92,    93,     0,    94,    95,     0,     0,   187,   188,   189,
     190,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    96,     0,    88,    89,    90,    91,
      92,    93,     0,    94,    95,     0,     0,   187,   188,   189,
     190,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    96,     0,     0,     0,     0,     0,
       0,     0,     0,    97,     0,    98,     0,     0,     0,     0,
      99,     0,     0,     0,     0,     0,     0,     0,   273,   100,
     101,   102,   103,   104,   105,     0,     0,   191,   192,     0,
       0,   193,   274,    97,     0,    98,     0,     0,     0,     0,
      99,   332,     0,     0,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,     0,     0,   191,   192,     0,
       0,   193,   333,    88,    89,    90,    91,    92,    93,     0,
      94,    95,     0,     0,   187,   188,   189,   190,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,     0,    88,    89,    90,    91,    92,    93,     0,
      94,    95,     0,     0,   187,   188,   189,   190,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,   428,     0,     0,     0,     0,     0,     0,     0,
      97,     0,    98,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,     0,     0,   191,   192,     0,     0,   193,   274,
      97,     0,    98,     0,     0,     0,     0,    99,     0,     0,
     440,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,     0,     0,   191,   192,     0,     0,   193,   333,
      88,    89,    90,    91,    92,    93,     0,    94,    95,     0,
       0,   187,   188,   189,   190,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    96,     0,
      88,    89,    90,    91,    92,    93,     0,    94,    95,     0,
       0,   187,   188,   189,   190,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,    98,
       0,     0,     0,     0,    99,     0,   448,     0,     0,     0,
       0,     0,     0,   100,   101,   102,   103,   104,   105,     0,
       0,   191,   192,     0,     0,   193,   333,    97,     0,    98,
       0,     0,     0,     0,    99,     0,     0,   452,     0,     0,
       0,     0,     0,   100,   101,   102,   103,   104,   105,     0,
       0,   191,   192,     0,     0,   193,   333,    88,    89,    90,
      91,    92,    93,     0,    94,    95,     0,     0,   187,   188,
     189,   190,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,     0,    88,    89,    90,
      91,    92,    93,     0,    94,    95,     0,     0,   187,   188,
     189,   190,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,    98,     0,     0,     0,
       0,    99,     0,     0,     0,     0,   456,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     0,     0,   191,   192,
       0,     0,   193,   333,    97,     0,    98,     0,     0,     0,
       0,    99,   505,     0,     0,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     0,     0,   191,   192,
       0,     0,   193,   333,    88,    89,    90,    91,    92,    93,
       0,    94,    95,     0,     0,   187,   188,   189,   190,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    96,     0,    88,    89,    90,    91,    92,    93,
       0,    94,    95,     0,     0,   187,   188,   189,   190,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,    98,     0,     0,     0,     0,    99,   507,
       0,     0,     0,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,     0,     0,   191,   192,     0,     0,   193,
     333,    97,     0,    98,     0,     0,     0,     0,    99,     0,
       0,     0,     0,   532,     0,     0,     0,   100,   101,   102,
     103,   104,   105,     0,     0,   191,   192,     0,     0,   193,
     333,    88,    89,    90,    91,    92,    93,     0,    94,    95,
       0,     0,   187,   188,   189,   190,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
       0,    88,    89,    90,    91,    92,    93,     0,    94,    95,
       0,     0,   187,   188,   189,   190,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
      98,     0,     0,     0,     0,    99,     0,   541,     0,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
       0,     0,   191,   192,     0,     0,   193,   333,    97,     0,
      98,     0,     0,     0,     0,    99,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
       0,     0,   191,   192,     0,     0,   193,   333,    88,    89,
      90,    91,    92,    93,     0,    94,    95,     0,     0,   187,
     188,   189,   190,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    96,     0,    88,    89,
      90,    91,    92,    93,     0,    94,    95,     0,     0,   187,
     188,   189,   190,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,    98,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,     0,     0,   191,
     192,     0,     0,   193,   433,    97,     0,    98,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,     0,     0,   191,
     192,     0,     0,   193,   274,    88,    89,    90,    91,    92,
      93,     0,    94,    95,     0,     0,   187,   188,   189,   190,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    96,    88,    89,    90,    91,    92,    93,
       0,    94,    95,     0,     0,   187,   188,   189,   190,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,    98,     0,     0,     0,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,     0,     0,   191,   192,     0,     0,
     193,    97,     0,    98,     0,     0,     0,     0,    99,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,     0,     0,   191,   192,    88,    89,    90,
      91,    92,    93,   410,    94,    95,     0,     0,   187,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,     0,     0,     0,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,     0,     0,    97,     0,    98,     0,     0,     0,
       0,    99,     0,    30,     0,     0,    32,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     0,   411,   191,   192,
      87,     0,    88,    89,    90,    91,    92,    93,     0,    94,
      95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
      96,     0,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
      30,    98,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,   202,     0,    88,    89,    90,    91,    92,    93,     0,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,    96,     0,     0,     0,     0,     0,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,    30,    98,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,   261,     0,    88,    89,    90,    91,    92,    93,
       0,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   369,     0,    88,    89,    90,    91,
      92,    93,    96,    94,    95,   262,     0,     0,     0,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    96,     0,     0,   370,     0,     0,
       0,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,    97,    30,    98,     0,     0,     0,     0,    99,     0,
       0,     0,     0,   263,     0,     0,     0,   100,   264,   102,
     103,   104,   105,    97,    30,    98,     0,     0,     0,     0,
      99,     0,     0,     0,     0,   371,     0,     0,     0,   100,
     372,   102,   103,   104,   105,   261,     0,    88,    89,    90,
      91,    92,    93,     0,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   261,     0,    88,
      89,    90,    91,    92,    93,    96,    94,    95,   402,     0,
       0,     0,    11,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,     0,     0,
     461,     0,     0,     0,    11,    12,    13,     0,     0,     0,
       0,     0,     0,     0,    97,    30,    98,     0,     0,     0,
       0,    99,     0,     0,     0,     0,   403,     0,     0,     0,
     100,   404,   102,   103,   104,   105,    97,    30,    98,     0,
       0,     0,     0,    99,     0,     0,     0,     0,   462,     0,
       0,     0,   100,   101,   102,   103,   104,   105,   467,     0,
      88,    89,    90,    91,    92,    93,     0,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     261,     0,    88,    89,    90,    91,    92,    93,    96,    94,
      95,   468,     0,     0,     0,    11,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      96,     0,     0,   537,     0,     0,     0,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,    97,    30,    98,
       0,     0,     0,     0,    99,     0,     0,     0,     0,   469,
       0,     0,     0,   100,   470,   102,   103,   104,   105,    97,
      30,    98,     0,     0,     0,     0,    99,     0,     0,     0,
       0,   538,     0,     0,     0,   100,   101,   102,   103,   104,
     105,   261,     0,    88,    89,    90,    91,    92,    93,     0,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   261,     0,    88,    89,    90,    91,    92,
      93,    96,    94,    95,     0,     0,     0,     0,    11,    12,
      13,     0,     0,     0,     0,   261,     0,    88,    89,    90,
      91,    92,    93,    96,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,    30,    98,     0,     0,    96,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,    97,     0,    98,     0,     0,     0,     0,    99,
       0,     0,     0,   475,     0,   476,   381,   584,   100,   101,
     102,   103,   104,   105,    97,     0,    98,     0,     0,     0,
       0,    99,     0,     0,     0,   475,     0,   476,   381,   598,
     100,   101,   102,   103,   104,   105,   474,     0,    88,    89,
      90,    91,    92,    93,     0,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   521,     0,
      88,    89,    90,    91,    92,    93,    96,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     337,     0,    88,    89,    90,    91,    92,    93,    96,    94,
      95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,    98,     0,     0,
      96,     0,    99,     0,     0,     0,   475,     0,   476,   381,
       0,   100,   101,   102,   103,   104,   105,    97,     0,    98,
       0,     0,     0,     0,    99,     0,     0,     0,   475,     0,
     476,   381,     0,   100,   101,   102,   103,   104,   105,    97,
       0,    98,     0,     0,     0,     0,    99,   338,     0,     0,
       0,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,   261,     0,    88,    89,    90,    91,    92,    93,     0,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   261,     0,    88,    89,    90,    91,    92,
      93,    96,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   261,     0,    88,    89,    90,
      91,    92,    93,    96,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,    98,     0,     0,    96,     0,    99,     0,     0,
       0,     0,     0,     0,   381,     0,   100,   101,   102,   103,
     104,   105,    97,     0,    98,     0,     0,     0,     0,    99,
     591,     0,     0,     0,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,    97,     0,    98,     0,     0,     0,
       0,    99,   593,     0,     0,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,    87,     0,    88,    89,
      90,    91,    92,    93,     0,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   318,     0,
      88,    89,    90,    91,    92,    93,    96,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     321,     0,    88,    89,    90,    91,    92,    93,    96,    94,
      95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,    98,     0,     0,
      96,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,    97,     0,    98,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,   100,   101,   102,   103,   104,   105,    97,
       0,    98,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,   326,     0,    88,    89,    90,    91,    92,    93,     0,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   261,     0,    88,    89,    90,    91,    92,
      93,    96,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   356,     0,    88,    89,    90,
      91,    92,    93,    96,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,    98,     0,     0,    96,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,    97,     0,    98,     0,     0,     0,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,    97,     0,    98,     0,     0,     0,
       0,    99,     0,     0,     0,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,   362,     0,    88,    89,
      90,    91,    92,    93,     0,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   423,     0,
      88,    89,    90,    91,    92,    93,    96,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     425,     0,    88,    89,    90,    91,    92,    93,    96,    94,
      95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,    98,     0,     0,
      96,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,    97,     0,    98,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,   100,   101,   102,   103,   104,   105,    97,
       0,    98,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,    88,    89,    90,    91,    92,    93,     0,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,    93,    96,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    96,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
      98,     0,     0,    96,     0,   195,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
      97,     0,    98,     0,     0,     0,     0,   197,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,    97,   482,    98,    60,     0,     0,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,   365,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,    30,     0,    31,     0,    33,     0,   386,
     366,     0,     0,   235,     0,     0,     0,     0,     4,    62,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,   410,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,    30,
       0,    31,     0,    33,     0,   234,   366,     0,     0,   235,
       0,     0,     0,     4,     0,    62,     0,     0,     0,     0,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   495,     4,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,   253,     0,   254,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
      30,     0,    31,    32,    33,     0,     0,     0,     0,     0,
       0,     0,     0,  -284,     4,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
     464,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,    30,     0,    31,     0,    33,
       0,     0,   255,     0,     0,     0,     0,     0,     0,     4,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    47,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
      30,     0,    31,     0,    33,     0,     0,   465,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,    30,     0,    31,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     0,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,   483,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,    30,     0,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,   484,   483,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,    30,     0,    31,     0,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,   486,   268,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,    30,     0,    31,     0,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     0,     0,     0,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,   406,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,     0,     0,     0,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,     0,     4,    32,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,    29,     0,    30,     0,    31,     0,
      33,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,   517,     0,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     0,     0,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30
};

static const yytype_int16 yycheck[] =
{
      57,    57,    99,    35,    67,    62,   146,   127,   126,   163,
     128,   248,   145,     0,   251,   236,   189,   190,   545,    57,
     269,   181,     3,   431,     1,   185,     3,   157,   149,    61,
      77,   149,    64,     1,    19,     3,    79,     3,    79,    79,
      88,    89,    99,    99,    79,    85,     3,   574,    58,    85,
     223,   224,    39,     3,   112,    79,    79,   100,    99,    62,
     100,    99,    85,    99,    99,   162,    79,    79,    85,   126,
     126,   128,   128,    54,    79,    99,   498,   100,   388,   501,
      85,   138,    99,    70,    65,   395,    99,    99,    79,   146,
      57,    58,   149,   149,    85,   235,   193,    78,   195,    49,
     197,     1,    77,     3,    54,   513,   514,     3,    85,    59,
      14,    15,   209,    98,   234,    65,    99,    85,    84,   273,
      77,     1,   262,     3,   127,     1,     2,     1,     1,     3,
       3,    79,   135,   230,    77,   138,   256,    85,   195,   195,
     197,   197,   152,   200,   200,   275,   267,   277,   269,   267,
     310,   269,    84,   307,   212,   213,   214,   195,   407,   197,
      36,    37,   200,   144,    77,    41,    42,    43,    81,   390,
       1,   158,     3,   183,    81,    77,    83,    77,   235,    81,
      80,   278,   279,   280,   100,   152,    79,    87,    77,    82,
      94,    95,   173,   100,   144,     1,    87,    77,    84,    99,
      79,    92,    93,    84,    77,   262,    85,    87,    86,   266,
     267,   267,   269,   269,    87,   247,   183,   249,    84,    99,
       1,    96,     3,     1,   256,     3,    99,     1,    97,     3,
     370,   234,    18,     1,     1,     3,     3,   377,   247,   271,
     249,    78,   479,   376,    78,     1,    77,     3,    78,    80,
     253,    12,    13,   256,   408,    79,    87,   411,     1,    78,
       3,    16,    17,    84,    57,    58,   386,    78,    79,   145,
      87,    77,    78,   100,    80,    81,     1,   335,    78,    79,
      77,    87,    38,    39,    40,     1,   407,     3,     1,   407,
       3,   421,    79,    80,    87,    80,    77,    79,    80,    77,
      93,    94,    95,    81,   541,   315,    87,    80,   545,    87,
      77,    78,    79,   370,    81,    71,     1,   374,     3,   112,
     377,    77,    78,    79,    80,    81,    77,   390,   468,    77,
       1,    87,     3,    77,    77,    78,    79,   574,    81,     3,
     494,   495,   399,    78,    87,    78,    79,    99,   315,   586,
     407,   407,    77,    78,   386,    80,    81,   150,   234,   152,
      99,    77,   365,    78,    77,    78,    79,     3,    81,    79,
      80,    87,    78,    79,    87,   505,   506,   507,   508,   509,
      78,    79,   512,   386,    78,    79,    78,    79,   445,   445,
     183,     3,    77,     6,   187,   188,   189,   190,   191,   192,
      78,   458,    87,    79,   414,    82,    77,    78,    79,   202,
      81,   468,    82,   510,   511,   472,    87,    78,    79,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   591,    80,   593,
      62,   146,    38,    39,    40,    78,    79,   414,    78,    79,
     431,    78,    79,   607,     1,   609,    77,   587,   588,   217,
     218,   464,    99,    78,    78,   475,   498,    78,   261,   501,
      79,   568,   569,   440,   441,    71,   606,   534,   608,   482,
     483,   611,     1,   613,     3,   452,   453,    78,   281,   499,
      87,    87,   100,   503,    78,   288,   201,     1,   100,     3,
     376,    82,    82,   208,    78,     3,    82,    82,   475,    82,
     386,    99,   388,   306,    80,   572,   572,    77,    77,   395,
      78,    84,   315,     3,    78,   318,    82,    82,   321,    82,
     235,    82,   499,   326,    99,    60,   503,    82,     9,    10,
      11,    82,   335,   248,   337,    80,   251,   187,   188,    80,
      82,   191,   192,   150,    82,    82,    82,   262,    77,    78,
      79,   266,    81,   356,    82,    80,    60,   225,    87,   362,
      82,    82,   572,    77,    78,    79,   369,    81,    99,   219,
     220,   221,   222,    87,   227,    99,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,   228,   226,   303,   304,
     267,   229,    81,   446,   173,   202,    77,     2,   480,    65,
      81,    -1,    83,    -1,    -1,    -1,    -1,    -1,   215,   216,
      -1,   414,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     423,    -1,   425,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   440,   441,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   452,
     453,    -1,    -1,    -1,   261,   370,   100,    -1,    -1,   374,
      -1,    -1,   377,    -1,   467,    -1,   381,    -1,    -1,    -1,
      -1,   474,   475,    -1,   281,    -1,    -1,    -1,    -1,    -1,
      -1,   288,    -1,    -1,   399,    -1,    -1,   402,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,   306,
     503,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,   318,    10,    11,   321,    -1,    -1,    -1,   521,   326,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     337,   446,    -1,    31,    -1,   450,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   458,    -1,    -1,   461,    -1,    -1,   356,
      -1,    -1,    -1,   468,    -1,   362,    -1,   472,    -1,    -1,
      -1,    -1,   369,    -1,   479,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,     3,     4,     5,     6,     7,
       8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   423,    -1,   425,   534,
      -1,    -1,   537,    31,    -1,    -1,   541,    -1,    -1,    30,
     545,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,   570,    -1,    -1,   573,   574,
     467,    -1,    70,    -1,    72,    -1,    -1,   474,    69,    77,
      71,   586,    73,    74,    75,    -1,    84,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   521,    30,    31,    32,    33,    34,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    72,    -1,
      31,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,     1,    99,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    91,    -1,    -1,
      94,    95,    -1,    -1,    98,    99,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    91,    -1,    -1,    94,    95,    -1,
      -1,    98,    99,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    94,    95,    -1,
      -1,    98,    99,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    94,    95,    -1,    -1,    98,    99,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    94,    95,    -1,    -1,    98,    99,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      -1,    94,    95,    -1,    -1,    98,    99,    70,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      -1,    94,    95,    -1,    -1,    98,    99,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    -1,    94,    95,
      -1,    -1,    98,    99,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    -1,    94,    95,
      -1,    -1,    98,    99,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    -1,    94,    95,    -1,    -1,    98,
      99,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    -1,    94,    95,    -1,    -1,    98,
      99,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    94,    95,    -1,    -1,    98,    99,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    94,    95,    -1,    -1,    98,    99,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    94,
      95,    -1,    -1,    98,    99,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    94,
      95,    -1,    -1,    98,    99,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    94,    95,    -1,    -1,
      98,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    -1,    94,    95,     3,     4,     5,
       6,     7,     8,     1,    10,    11,    -1,    -1,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    85,    94,    95,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
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
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    70,    71,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    34,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    70,    71,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    70,
      71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,    31,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    81,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    91,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      31,    -1,    77,    -1,    -1,    -1,    81,    -1,    83,    84,
      -1,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    81,    -1,
      83,    84,    -1,    86,    87,    88,    89,    90,    91,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    31,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    86,    87,    88,    89,
      90,    91,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      31,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    31,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      31,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    31,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    70,     1,    72,     3,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,
      78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    30,    87,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    -1,    77,    78,    -1,    -1,    81,
      -1,    -1,    -1,    30,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     0,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    30,    74,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    69,    -1,    71,    -1,    73,    -1,
      75,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   169,   178,     1,    30,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    69,
      71,    73,    74,    75,   129,   131,   134,   135,   136,   137,
     143,   147,   148,   149,   166,   179,   180,     0,   179,     1,
     129,   131,   169,   171,   181,     3,    84,    77,    77,     1,
       3,    77,    87,    99,   130,   150,   151,   152,   131,   131,
       3,   169,   131,   131,   131,   170,   171,     1,    84,   129,
     171,    84,     1,     3,   104,   144,   145,     1,     3,     4,
       5,     6,     7,     8,    10,    11,    31,    70,    72,    77,
      86,    87,    88,    89,    90,    91,   102,   103,   105,   106,
     109,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   128,   135,   140,   147,   158,
     128,    99,   171,     1,   150,     1,   147,   152,   153,     1,
     132,   133,   150,   171,   181,    77,    81,   151,   169,    84,
       1,     3,    57,    58,    59,    61,    62,    63,    64,    65,
      66,    67,    68,    85,    99,   111,   124,   125,   127,   129,
     167,   168,   171,   172,   173,   174,   175,   176,   177,     1,
     144,    79,    85,   100,   100,    79,    85,    14,    15,    16,
      17,    94,    95,    98,   114,    77,   111,    77,   111,   111,
      77,    77,     1,   127,   158,     9,    10,    11,    77,    81,
      83,   113,    87,    92,    93,    88,    89,    12,    13,    14,
      15,    94,    95,    16,    17,    86,    96,    97,    18,    19,
      98,    78,   140,     1,    77,    81,   152,   159,   160,   140,
      78,    79,    78,    78,   152,   147,   152,    79,   100,    79,
      99,   100,   171,     1,     3,    78,   131,   154,   155,   156,
     157,     1,    34,    82,    87,   125,   153,    84,     1,   138,
     139,   140,   166,    85,    99,    80,   128,    80,    77,    77,
      77,     1,   167,    77,   169,     3,    99,    99,     1,    99,
     127,   170,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,   100,   126,    79,    99,     1,    85,   173,    85,
      79,    85,     1,   145,   128,   146,    85,   145,     1,   116,
     116,     1,   117,   117,   116,   116,     1,   127,   158,   158,
     158,   125,    78,    99,    78,    78,     3,     1,    78,   110,
     125,   127,     3,   113,   113,   113,   114,   114,   115,   115,
     116,   116,   116,   116,   117,   117,     1,   118,   119,   120,
     121,   122,     1,   127,    78,     1,    78,   154,   159,     1,
      34,    82,    87,   125,   153,   160,    77,    81,     6,     1,
     133,    84,   125,   161,   133,   161,    77,    78,    79,   150,
     152,   159,   150,   159,    78,    79,    78,    79,   125,   153,
      82,    82,    34,    82,    87,   125,     1,   138,    85,    99,
       1,    85,   139,     1,    80,    99,   141,   142,   150,   170,
     167,    80,   167,     1,   127,     1,   127,   127,    62,    62,
       1,    77,    99,    99,    99,   125,   125,   170,    85,   128,
      80,    80,    78,    78,    78,    79,    84,   113,    79,    78,
      79,    82,    80,    80,    78,    78,    82,   125,   153,    82,
      82,    34,    82,   125,     1,    78,   154,     1,    34,    82,
      87,   125,   153,    78,     1,    81,    83,   161,   162,   163,
     164,   165,     1,     1,    56,   156,    56,   156,     3,    82,
     125,   125,    82,    82,    85,    85,   170,   170,    79,    80,
     128,    79,    99,    80,   167,    78,    78,    78,    78,    78,
      77,    77,    78,   129,   174,   124,   124,    58,   107,   108,
     158,     1,   162,   125,   124,   124,    82,   125,   125,    82,
      78,    78,    82,   125,   153,    82,    82,    34,    82,   125,
      99,    79,    85,   128,     3,    79,    85,   161,   100,   165,
      78,    82,    82,   170,   170,     1,   142,   128,   142,   128,
     167,   167,   167,   167,   167,   127,   127,   167,   174,   174,
      80,    78,    79,    80,    79,    85,    82,    82,    82,   125,
     125,    82,   161,    82,    85,   161,   163,    60,    60,    78,
      78,    78,   127,    78,   127,   125,   108,   125,    85,    82,
      82,   161,   167,   167,    99,    99,   170,    78,   170,    78,
     167,   170,   167,   170,   167,   167
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
     135,   135,   135,   135,   135,   135,   136,   136,   136,   136,
     136,   137,   137,   138,   138,   139,   139,   139,   139,   140,
     140,   140,   140,   141,   141,   141,   142,   142,   142,   142,
     143,   143,   143,   143,   143,   143,   143,   144,   144,   144,
     146,   145,   145,   145,   147,   147,   147,   147,   148,   148,
     149,   149,   150,   150,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     152,   152,   152,   152,   152,   153,   153,   154,   154,   154,
     155,   155,   155,   156,   156,   156,   156,   156,   157,   157,
     158,   158,   159,   159,   159,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     161,   161,   161,   161,   162,   162,   162,   162,   162,   163,
     164,   164,   165,   165,   166,   167,   167,   167,   167,   167,
     167,   168,   168,   168,   169,   170,   171,   171,   171,   172,
     172,   173,   173,   174,   174,   174,   175,   175,   175,   175,
     175,   175,   176,   176,   176,   176,   176,   176,   176,   176,
     177,   177,   177,   177,   177,   177,   178,   178,   179,   179,
     180,   180,   180,   180,   180,   180,   181,   181
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
       1,     1,     1,     1,     1,     1,     6,     7,     2,     7,
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
       1,     2,     3,     2,     7,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     0,     0,     4,     5,     5,     1,
       2,     1,     1,     1,     2,     2,     7,     5,     5,     5,
       5,     7,     5,     7,     8,     9,     8,     9,     7,     5,
       3,     2,     2,     2,     3,     3,     3,     2,     1,     1,
       4,     3,     3,     3,     3,     2,     1,     2
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
#line 2971 "parserBison.tab.c"
    break;

  case 88: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 214 "parserBison.y"
                                                                     {printf("ABIEL TODAVIA MAS MECO3\n");}
#line 2977 "parserBison.tab.c"
    break;

  case 105: /* $@1: %empty  */
#line 243 "parserBison.y"
                                 {/* DONE, ENTRA A TYPE_SPECIFIER */}
#line 2983 "parserBison.tab.c"
    break;

  case 106: /* declaration: declaration_specifiers $@1 init_declarator_list ';'  */
#line 243 "parserBison.y"
                                                                                               {end_declaration();}
#line 2989 "parserBison.tab.c"
    break;

  case 122: /* init_declarator: declarator '=' initializer  */
#line 268 "parserBison.y"
                                     {printf("ABIEL MECO\n");}
#line 2995 "parserBison.tab.c"
    break;

  case 124: /* init_declarator: error '=' initializer  */
#line 270 "parserBison.y"
                                {printf("ABIEL MECO2\n");}
#line 3001 "parserBison.tab.c"
    break;

  case 125: /* storage_class_specifier: TYPEDEF  */
#line 274 "parserBison.y"
                        {typedef_name_flag = 1;}
#line 3007 "parserBison.tab.c"
    break;

  case 131: /* type_specifier: VOID  */
#line 283 "parserBison.y"
               {save_type();}
#line 3013 "parserBison.tab.c"
    break;

  case 132: /* type_specifier: CHAR  */
#line 284 "parserBison.y"
               {save_type();}
#line 3019 "parserBison.tab.c"
    break;

  case 133: /* type_specifier: SHORT  */
#line 285 "parserBison.y"
                {save_type();}
#line 3025 "parserBison.tab.c"
    break;

  case 134: /* type_specifier: INT  */
#line 286 "parserBison.y"
              {save_type();}
#line 3031 "parserBison.tab.c"
    break;

  case 135: /* type_specifier: LONG  */
#line 287 "parserBison.y"
               {save_type();}
#line 3037 "parserBison.tab.c"
    break;

  case 136: /* type_specifier: FLOAT  */
#line 288 "parserBison.y"
                {save_type();}
#line 3043 "parserBison.tab.c"
    break;

  case 137: /* type_specifier: DOUBLE  */
#line 289 "parserBison.y"
                 {save_type();}
#line 3049 "parserBison.tab.c"
    break;

  case 138: /* type_specifier: SIGNED  */
#line 290 "parserBison.y"
                 {save_type();}
#line 3055 "parserBison.tab.c"
    break;

  case 139: /* type_specifier: UNSIGNED  */
#line 291 "parserBison.y"
                   {save_type();}
#line 3061 "parserBison.tab.c"
    break;

  case 140: /* type_specifier: _BOOL  */
#line 292 "parserBison.y"
                {save_type();}
#line 3067 "parserBison.tab.c"
    break;

  case 141: /* type_specifier: _COMPLEX  */
#line 293 "parserBison.y"
                   {save_type();}
#line 3073 "parserBison.tab.c"
    break;

  case 142: /* type_specifier: _IMAGINARY  */
#line 294 "parserBison.y"
                     {save_type();}
#line 3079 "parserBison.tab.c"
    break;

  case 143: /* type_specifier: struct_or_union_specifier  */
#line 295 "parserBison.y"
                                    {save_type();}
#line 3085 "parserBison.tab.c"
    break;

  case 144: /* type_specifier: enum_specifier  */
#line 296 "parserBison.y"
                         {save_type();}
#line 3091 "parserBison.tab.c"
    break;

  case 145: /* type_specifier: TYPEDEF_NAME  */
#line 297 "parserBison.y"
                       {save_type();}
#line 3097 "parserBison.tab.c"
    break;

  case 151: /* struct_or_union: STRUCT  */
#line 309 "parserBison.y"
                 {typedef_name_flag = 4;}
#line 3103 "parserBison.tab.c"
    break;

  case 180: /* $@2: %empty  */
#line 362 "parserBison.y"
                                   {printf("ABIEL MECO\n");}
#line 3109 "parserBison.tab.c"
    break;

  case 183: /* enumerator: error '=' constant_expression  */
#line 364 "parserBison.y"
                                         {printf("ABIEL MECO\n");}
#line 3115 "parserBison.tab.c"
    break;

  case 194: /* direct_declarator: IDENTIFIER  */
#line 390 "parserBison.y"
                     {save_id();}
#line 3121 "parserBison.tab.c"
    break;

  case 269: /* designation: designator_list '='  */
#line 502 "parserBison.y"
                               {printf("ABIEL MECO\n");}
#line 3127 "parserBison.tab.c"
    break;

  case 284: /* prepare_scope: %empty  */
#line 535 "parserBison.y"
         { open_scope(); }
#line 3133 "parserBison.tab.c"
    break;

  case 285: /* finish_scope: %empty  */
#line 539 "parserBison.y"
         { print_symboltables(); close_scope(); }
#line 3139 "parserBison.tab.c"
    break;


#line 3143 "parserBison.tab.c"

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
