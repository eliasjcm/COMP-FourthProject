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

#line 90 "parserBison.tab.c"

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
  YYSYMBOL_declaration_specifiers = 130,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 131,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 132,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 133,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 134,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 135, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 136,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 137,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 138,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 139, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 140,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 141,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 142,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 143,          /* enumerator_list  */
  YYSYMBOL_enumerator = 144,               /* enumerator  */
  YYSYMBOL_type_qualifier = 145,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 146,       /* function_specifier  */
  YYSYMBOL_alignment_specifier = 147,      /* alignment_specifier  */
  YYSYMBOL_declarator = 148,               /* declarator  */
  YYSYMBOL_direct_declarator = 149,        /* direct_declarator  */
  YYSYMBOL_pointer = 150,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 151,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 152,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 153,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 154,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 155,          /* identifier_list  */
  YYSYMBOL_type_name = 156,                /* type_name  */
  YYSYMBOL_abstract_declarator = 157,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 158, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 159,              /* initializer  */
  YYSYMBOL_initializer_list = 160,         /* initializer_list  */
  YYSYMBOL_designation = 161,              /* designation  */
  YYSYMBOL_designator_list = 162,          /* designator_list  */
  YYSYMBOL_designator = 163,               /* designator  */
  YYSYMBOL__STATIC_ASSERT_declaration = 164, /* _STATIC_ASSERT_declaration  */
  YYSYMBOL_statement = 165,                /* statement  */
  YYSYMBOL_labeled_statement = 166,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 167,       /* compound_statement  */
  YYSYMBOL_block_item_list = 168,          /* block_item_list  */
  YYSYMBOL_block_item = 169,               /* block_item  */
  YYSYMBOL_expression_statement = 170,     /* expression_statement  */
  YYSYMBOL_selection_statement = 171,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 172,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 173,           /* jump_statement  */
  YYSYMBOL_translation_unit = 174,         /* translation_unit  */
  YYSYMBOL_external_declaration = 175,     /* external_declaration  */
  YYSYMBOL_function_definition = 176,      /* function_definition  */
  YYSYMBOL_declaration_list = 177          /* declaration_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 20 "parserBison.y"

	static void location_print (FILE *out, YYLTYPE const * const loc);
	#define YYLOCATION_PRINT location_print

#line 307 "parserBison.tab.c"

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
#define YYFINAL  73
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4808

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  323
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  595

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
       0,    55,    55,    56,    57,    58,    59,    60,    64,    65,
      66,    70,    74,    75,    79,    83,    84,    88,    89,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   106,
     107,   108,   112,   113,   114,   115,   116,   117,   118,   122,
     123,   124,   125,   126,   127,   131,   132,   136,   137,   138,
     139,   143,   144,   145,   146,   150,   151,   152,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   168,   169,   170,
     171,   172,   176,   177,   181,   182,   186,   187,   191,   192,
     196,   197,   201,   202,   203,   204,   205,   209,   210,   211,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   229,   230,   234,   238,   239,   240,   241,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   258,   259,
     260,   264,   265,   266,   270,   271,   272,   273,   274,   275,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   297,   298,   299,   300,   301,
     305,   306,   310,   311,   315,   316,   317,   318,   322,   323,
     324,   325,   329,   330,   331,   335,   336,   337,   338,   342,
     343,   344,   345,   346,   347,   348,   352,   353,   354,   358,
     359,   360,   364,   365,   366,   367,   371,   372,   376,   377,
     381,   382,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   402,   406,   407,
     408,   409,   410,   414,   415,   419,   420,   421,   425,   426,
     427,   431,   432,   433,   434,   435,   439,   440,   444,   445,
     449,   450,   451,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   483,   484,
     485,   486,   490,   491,   492,   493,   494,   498,   502,   503,
     507,   508,   512,   516,   517,   518,   519,   520,   521,   525,
     526,   527,   531,   532,   533,   537,   538,   542,   543,   547,
     548,   549,   553,   554,   555,   556,   557,   558,   562,   563,
     564,   565,   566,   567,   568,   569,   573,   574,   575,   576,
     577,   578,   582,   583,   587,   588,   592,   593,   594,   595,
     596,   597,   601,   602
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
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "alignment_specifier",
  "declarator", "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator",
  "_STATIC_ASSERT_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-481)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-232)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    4278,  4057,  -481,  -481,  -481,  -481,  -481,  -481,  -481,  -481,
    -481,  -481,  -481,  -481,  -481,  -481,  -481,  -481,  -481,  -481,
    -481,  -481,  -481,  -481,  -481,  -481,    51,   -56,  -481,  -481,
       7,  -481,  -481,   223,  4665,  4665,  -481,    95,  -481,  4665,
    4665,  4665,  -481,  4223,  -481,  -481,   -25,   838,  -481,   237,
    -481,  4612,    -4,   215,  2366,  3292,   -10,  -481,   243,   483,
    -481,   -59,  -481,  4543,    30,    33,  -481,  -481,    12,  4445,
    -481,  -481,  -481,  -481,  -481,  -481,  1219,    67,  -481,  -481,
    -481,  -481,  3717,  3739,  3739,  -481,  3292,   103,    31,    88,
     170,   720,   179,   258,   166,   175,  1070,   192,   205,  2457,
    -481,  -481,  -481,  -481,  -481,  -481,  -481,  -481,  -481,  -481,
    -481,  -481,   504,   604,  3828,  -481,   135,    41,   195,    11,
     310,   218,   217,   242,   329,    20,  -481,  -481,   -22,  -481,
    -481,  -481,  -481,   935,  -481,  -481,  -481,  -481,  -481,   -24,
     244,  -481,  -481,   360,   -18,  -481,   254,   130,  -481,  2146,
    -481,  -481,  -481,   280,  4737,    90,  4737,   299,   302,   400,
    -481,  3066,  -481,   312,   319,   301,  -481,  -481,   609,   400,
    -481,  3066,  -481,  4612,  4112,  2548,    30,  4500,   -41,  3823,
    -481,   222,  -481,  3314,  3314,  3336,  3336,  -481,  3314,  3314,
    3427,    -7,   135,  1032,  2457,  -481,  2457,  -481,  -481,   322,
    1032,  3449,  3471,  3562,  1257,   346,   568,   315,  -481,  -481,
    1989,  -481,    -6,  4737,  3562,  1354,   154,   341,   422,  -481,
    -481,  3157,  3562,   425,  -481,  -481,  -481,  -481,  -481,  -481,
    -481,  -481,  -481,  -481,  -481,  3562,  -481,  3828,  3828,  3828,
    3828,  3828,  3314,  3314,  3314,  3314,  3314,  3314,  3336,  3336,
    3584,  3584,  3584,  3584,  3584,  3606,  3562,  -481,  2019,  -481,
    -481,   -14,   157,   373,  -481,  3292,  3292,    34,  -481,  -481,
    -481,   363,  3946,  2570,   216,  -481,    99,  -481,  -481,   439,
     349,  -481,  2116,  3022,  -481,  -481,  -481,  -481,  -481,  -481,
    -481,  -481,  -481,  -481,   238,  -481,  -481,   256,   374,   383,
    -481,   253,  2887,  -481,   388,   390,  2661,    28,  4001,  -481,
    -481,   381,  -481,  -481,   271,  3292,  -481,     0,  -481,   396,
    3828,   195,   195,  2271,    11,    11,   195,   195,  1384,   291,
    -481,   410,   424,  1032,  -481,  1481,   326,  1511,   333,   369,
     428,   435,  1608,  1167,  1167,  -481,    -7,  -481,   438,   441,
    -481,  -481,  -481,  3695,  -481,  1638,  -481,   389,  -481,   152,
    -481,  -481,  -481,  -481,  -481,   135,   135,    41,    41,   195,
     195,   195,   195,    11,    11,  2242,   310,   218,   217,   242,
     329,  1735,   395,  -481,  -481,    63,  -481,   427,  -481,  -481,
    -481,  -481,  -481,  -481,   359,  -481,   452,   453,  1765,  2887,
    -481,   450,   454,  2683,    99,  4167,  2774,   457,  1122,  3292,
     534,  -481,   199,  3066,     4,  -481,  3890,  -481,  4333,  -481,
     382,  -481,  -481,  -481,  -481,  4389,  -481,   538,   463,  2887,
    -481,  -481,  3562,  -481,   464,   471,  -481,  -481,   352,  3292,
    -481,   352,  -481,  3292,  3292,  3292,   468,   468,  -481,  1032,
    1032,  1032,  1032,  1032,  3562,  3562,  1032,  3179,  3201,  -481,
    4703,  3044,  -481,  -481,  -481,  3562,  -481,  3292,  3292,  -481,
    -481,  -481,  -481,   474,  2887,  -481,  -481,  3562,  -481,   476,
     377,  -481,   481,  1862,  2887,  -481,   484,   486,  2796,   487,
    3066,  -481,   498,  -481,  2909,  -481,  -481,  -481,  -481,   470,
     261,  -481,  -481,  -481,  -481,  -481,  -481,   500,   501,  -481,
    -481,   513,  -481,  -481,  -481,  -481,  -481,  -481,   535,   536,
    -481,  -481,  -481,   412,   416,  -481,  1032,   420,  1032,   429,
     514,   431,  -481,   517,  1892,   227,  -481,  -481,  -481,  -481,
     552,   553,  -481,  -481,  -481,  -481,   554,  2887,  -481,  -481,
    3562,  -481,   562,  -481,  -481,  -481,  -481,  -481,  3066,  -481,
    -481,  -481,  1032,  1032,   547,   551,  -481,  1032,  -481,  1032,
    3562,  -481,  4703,  3562,  2931,  -481,  -481,  -481,  -481,   569,
     571,  -481,  -481,  -481,  -481,  -481,  -481,  -481,  -481,  -481,
    -481,  -481,  -481,  -481,  -481
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,   144,   124,   125,   126,   128,   129,   186,   182,
     183,   184,   139,   131,   132,   133,   134,   137,   138,   135,
     136,   130,   140,   141,   150,   151,     0,     0,   185,   187,
       0,   127,   315,     0,   109,   111,   142,     0,   143,   113,
     115,   117,   106,     0,   312,   314,     0,     0,   322,     0,
     321,     0,   173,     0,     0,     0,     0,   192,     0,     0,
     104,     0,   118,   122,   191,     0,   108,   110,   147,     0,
     112,   114,   116,     1,   313,   320,     0,     2,     8,     9,
      12,    13,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     282,    39,    40,    41,    42,    43,    44,   289,    19,     3,
       4,     7,    32,    45,     0,    47,    51,    55,    58,    67,
      72,    74,    76,    78,    80,    82,    87,   101,     0,   287,
     288,   273,   274,     0,   285,   275,   276,   277,   278,     0,
     122,   323,   319,     0,     0,    11,   180,     0,   176,     0,
       2,    45,   103,     0,   159,     0,   161,     0,     0,     0,
     107,     0,   318,     0,     0,     0,   213,   210,   209,     0,
     105,     0,   317,     0,     0,     0,   190,     0,     0,     0,
     152,     0,   156,     0,     0,     0,     0,   284,     0,     0,
       0,   291,    54,     0,     0,    36,     0,    33,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   307,   308,
       0,   309,     0,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     0,     0,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    90,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   290,     0,   283,
     286,     0,     0,     0,   174,     0,     0,     0,   169,   189,
     158,     0,     0,     0,     0,   228,   232,   160,   188,     0,
       0,   120,     0,     0,   261,   123,   207,   193,   212,   214,
     208,   119,   121,   316,     0,   226,   204,     0,     0,   216,
     218,     0,     0,   194,    40,     0,     0,     0,     0,   149,
     157,     0,   145,   153,     0,     0,   154,     0,   162,   167,
       0,    65,    66,     0,    70,    71,    63,    64,     0,     0,
     279,     0,     0,     0,   281,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   306,   311,   310,     0,     0,
       6,    89,     5,     0,    24,     0,    21,     0,    29,     0,
      23,    88,    48,    49,    50,    52,    53,    56,    57,    61,
      62,    59,    60,    68,    69,     0,    73,    75,    77,    79,
      81,     0,     0,   102,   175,     0,   171,     0,   178,   181,
     179,   170,   177,   257,     0,   250,     0,     0,     0,     0,
     234,    40,     0,     0,   230,     0,     0,     0,     0,     0,
       0,   263,     0,     0,     0,   268,     0,   206,     0,   224,
       0,   225,   221,   222,   203,     0,   205,     0,     0,     0,
     195,   202,     0,   201,    40,     0,   148,   146,     0,     0,
     165,     0,   155,     0,     0,     0,    37,     0,   280,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,    46,    31,    22,     0,    20,     0,     0,   172,
     251,   233,   254,     0,     0,   235,   241,     0,   240,     0,
       0,   252,     0,     0,     0,   242,    40,     0,     0,     0,
       0,   260,     0,   271,     0,   258,   262,   267,   269,     0,
       0,   217,   220,   215,   219,   227,   197,     0,     0,   198,
     200,     0,   164,   168,   163,   166,    84,    86,   295,   293,
     296,   294,   298,     0,     0,   305,     0,     0,     0,     0,
       0,     0,    15,     0,     0,     0,    30,    85,    83,   237,
       0,     0,   239,   255,   253,   256,     0,     0,   243,   249,
       0,   248,     0,   272,   266,   270,   259,   265,     0,   207,
     196,   199,     0,     0,     0,     0,   302,     0,   300,     0,
       0,    14,     0,     0,     0,    27,   236,   238,   245,     0,
       0,   246,   264,   297,   292,   304,   299,   303,   301,    18,
      16,    17,    28,   244,   247
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -481,  -481,  -481,  -481,  -481,  -481,  -481,    89,  -481,  -481,
     -52,  -481,   -64,   169,   283,   345,    18,   413,   409,   414,
     411,   408,  -481,   -45,   282,  -481,    85,    26,     5,     8,
    -481,     3,  -481,   -53,  -481,  -481,   488,  -151,    81,  -481,
    -130,  -481,   525,  -240,   -54,  -481,  -481,   -20,   -61,     1,
    -156,  -152,  -481,  -274,  -481,    16,  -144,  -256,  -108,   208,
    -480,  -481,   257,   -57,   -84,  -481,    32,  -481,   537,  -189,
    -481,  -481,  -481,  -481,   629,  -481,   610
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   108,   109,   146,   110,   111,   531,   532,   112,   357,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   235,   128,   153,    32,    49,
      61,    62,    34,    35,    36,    37,   179,   180,   155,   317,
     318,    38,   147,   148,    39,    40,    41,   419,    64,    65,
     168,   396,   299,   300,   301,   533,   421,   276,   411,   412,
     413,   414,   415,    42,   130,   131,   132,   133,   134,   135,
     136,   137,   138,    43,    44,    45,    51
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     156,   154,   151,   151,   176,   166,    48,   205,    33,   152,
     152,   275,   182,    63,   558,   156,   154,   344,   404,   306,
     169,    54,   298,   388,   151,   244,   245,   392,   313,   140,
     195,   197,   198,    50,   151,   387,    57,   145,   164,   254,
     170,   152,    66,    67,   309,   156,   154,    70,    71,    72,
     236,    33,   129,   285,    52,   159,   141,   256,   310,    47,
     167,   263,   151,   292,   387,   263,   145,   264,    48,   159,
     157,   384,   -89,   256,    47,   160,   161,   257,    75,   441,
     143,   158,   265,   142,    55,   409,   265,   410,   162,   160,
     161,   271,   -89,   347,   558,   172,   177,   151,    68,   442,
     156,   154,   156,   154,   497,   246,   247,   174,   201,   330,
      58,   175,   199,   436,   289,   217,   334,   403,   255,   391,
     182,   166,   182,   156,   154,   156,   154,   310,   397,   240,
     241,   151,   151,   151,   151,    53,   151,   151,   129,   140,
     156,   154,   156,   154,   502,   392,   429,   193,   469,   140,
     181,   504,   151,   423,   457,   458,   274,   313,   151,   156,
     154,   319,   281,   151,   404,   202,   288,   272,  -229,   290,
    -229,   273,   291,   362,   363,   364,   405,    59,   141,    69,
     406,   212,   297,   200,   216,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   324,   325,   293,   151,   242,   243,   267,
     331,   343,   332,   151,   151,   268,   144,   271,   145,   166,
     152,   152,   237,   314,    56,    57,    57,   238,   239,   348,
     151,   256,   352,   256,   466,   270,   385,   277,   139,   271,
      57,    57,   386,   474,   163,   192,    57,   203,   166,   448,
     488,   182,   289,   482,   156,   154,   206,   271,   181,    57,
     181,   207,   271,   151,    57,   208,   373,   374,   151,   213,
     152,   151,   397,   274,   209,   329,   151,   422,   494,   216,
     297,   216,   214,   151,   495,   151,   336,   338,   339,   462,
     151,   389,   390,   272,  -231,   420,  -231,   273,   420,    58,
      58,   151,   315,   151,   250,   496,   574,   359,   512,    59,
      59,   514,   575,   251,    58,   416,   417,   418,   192,   273,
      58,   316,    60,   151,    59,    59,   248,   249,   547,   151,
      59,   426,   427,   416,  -223,  -223,    60,   273,   416,   252,
     382,   440,   273,    59,   171,   166,   151,   253,    59,   289,
     438,   439,   166,   511,   266,    57,   151,   151,   269,   176,
     271,   261,    57,   145,   152,   518,   519,   520,   521,   522,
     256,   445,   525,   192,   387,   289,   145,   278,   271,   192,
      57,   279,   554,   271,   192,    57,   557,   151,    59,   181,
     286,   151,   151,   151,   152,   420,   164,   287,   152,   516,
     517,   280,   333,    57,   450,   256,   156,   154,   341,   365,
     366,   452,   256,   297,   345,   151,   151,   420,   319,   353,
     289,   319,   537,   538,   297,   354,   297,   192,   360,    58,
     166,   151,   315,   297,   289,   492,   416,   393,   418,    59,
     273,   393,   566,   284,   568,   407,    59,   453,   256,   161,
     582,   192,   424,   284,   416,   543,   418,   305,   273,   416,
    -231,  -231,   425,   273,    59,   513,   557,   464,   465,   515,
     430,   271,   431,    57,   256,   468,   443,    58,   583,   584,
     310,   420,   151,   587,   165,   588,  -211,    59,   446,   192,
     564,   256,   192,   289,   565,   256,   349,   192,   567,   256,
     420,   420,   447,   358,   192,   454,   192,   569,   256,   571,
     572,   192,   455,   218,   219,   220,   459,   361,   156,   154,
     460,     9,    10,    11,   192,   367,   368,   265,   321,   322,
     470,   471,   475,   326,   327,   489,   476,   493,   383,   523,
     524,   505,   527,   529,   192,   506,   509,   416,   559,   418,
     192,   273,   461,   510,    28,   402,   539,    59,   542,   544,
    -211,  -211,  -211,  -211,  -211,   284,   548,   192,   549,   342,
      59,   150,    78,    79,    80,    81,    82,   192,    83,    84,
     555,   221,   560,   561,   428,   222,   553,   223,   435,   369,
     370,   371,   372,   439,   570,   562,   563,   573,     2,    85,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   576,   577,   578,    27,    97,    28,
      98,    29,    30,    31,   581,    99,   585,     9,    10,    11,
     586,   593,   192,   594,   101,   102,   103,   104,   105,   106,
     377,   590,   380,   376,   379,   308,   378,   107,   262,   535,
     260,   498,    74,   173,     0,     0,     0,     0,     0,     0,
      28,   473,     0,     0,     0,   479,     0,     0,   487,     0,
       0,     0,     0,     0,     0,   284,    59,     0,     0,     0,
       0,     0,     0,   192,   234,     0,     0,     0,     0,     0,
       0,   507,     0,     0,   508,     0,     0,     0,     0,     0,
       0,   204,     0,    77,    78,    79,    80,    81,    82,     0,
      83,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   284,     0,     0,     0,   536,     0,     0,
       0,    85,     0,     0,     0,     0,   540,     0,     0,   541,
       0,     0,     0,     0,     0,     0,   546,     0,     0,     0,
     552,     0,   284,     0,     0,     0,   284,    86,    87,    88,
       0,    89,    90,    91,    92,    93,    94,    95,    96,     0,
      97,     0,    98,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,     0,    47,     0,   101,   102,   103,   104,
     105,   106,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   579,
       0,     0,   580,     0,     0,     0,     0,     0,     0,    76,
     284,    77,    78,    79,    80,    81,    82,     0,    83,    84,
       0,     0,   589,     0,     0,   591,   284,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,    85,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    86,    87,    88,     0,    89,
      90,    91,    92,    93,    94,    95,    96,    27,    97,    28,
      98,    29,    30,    31,     0,    99,     0,     0,     0,     0,
       0,     0,    47,   100,   101,   102,   103,   104,   105,   106,
       0,     0,     0,     0,     0,     0,   258,   107,    77,    78,
      79,    80,    81,    82,     0,    83,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,    85,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    86,    87,    88,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    27,    97,    28,    98,    29,    30,
      31,     0,    99,     0,     0,     0,     0,     0,     0,    47,
     259,   101,   102,   103,   104,   105,   106,     0,     0,     0,
       0,     0,     0,   258,   107,    77,    78,    79,    80,    81,
      82,     0,    83,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,     0,     0,     0,     0,
       0,   210,     0,   150,    78,    79,    80,    81,    82,     0,
      83,    84,     0,     0,     0,     0,     0,     0,     0,    86,
      87,    88,     0,    89,    90,    91,    92,    93,    94,    95,
      96,    85,    97,     0,    98,     0,     0,     0,     0,    99,
       0,     0,     0,     0,     0,     0,    47,     0,   101,   102,
     103,   104,   105,   106,     0,   150,    78,    79,    80,    81,
      82,   107,    83,    84,     0,     0,   183,   184,   185,   186,
      97,     0,    98,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,    85,     0,     0,   101,   102,   103,   104,
     105,   106,     0,     0,     0,     0,     0,     0,   258,   211,
     150,    78,    79,    80,    81,    82,     0,    83,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,    98,     0,     0,     0,    85,    99,
       0,   490,     0,     0,     0,     0,     0,   491,   101,   102,
     103,   104,   105,   106,     0,     0,   188,   189,     0,     0,
     190,   351,   150,    78,    79,    80,    81,    82,     0,    83,
      84,     0,     0,   183,   184,   185,   186,    97,     0,    98,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
      85,     0,     0,   101,   102,   103,   104,   105,   106,     0,
     150,    78,    79,    80,    81,    82,   107,    83,    84,     0,
       0,   183,   184,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    97,
       0,    98,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,   187,   101,   102,   103,   104,   105,
     106,     0,     0,   188,   189,     0,     0,   190,   191,   340,
       0,     0,     0,     0,     0,     0,     0,    97,     0,    98,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,     0,
       0,   188,   189,     0,     0,   190,   191,   150,    78,    79,
      80,    81,    82,     0,    83,    84,     0,     0,   183,   184,
     185,   186,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,   150,    78,    79,
      80,    81,    82,     0,    83,    84,     0,     0,   183,   184,
     185,   186,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,    98,     0,     0,     0,
       0,    99,   350,     0,     0,     0,     0,     0,     0,     0,
     101,   102,   103,   104,   105,   106,     0,     0,   188,   189,
       0,     0,   190,   351,    97,     0,    98,     0,     0,     0,
       0,    99,     0,     0,   444,     0,     0,     0,     0,     0,
     101,   102,   103,   104,   105,   106,     0,     0,   188,   189,
       0,     0,   190,   351,   150,    78,    79,    80,    81,    82,
       0,    83,    84,     0,     0,   183,   184,   185,   186,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,   150,    78,    79,    80,    81,    82,
       0,    83,    84,     0,     0,   183,   184,   185,   186,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,    98,     0,     0,     0,     0,    99,   449,
       0,     0,     0,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,     0,     0,   188,   189,     0,     0,   190,
     351,    97,     0,    98,     0,     0,     0,     0,    99,   451,
       0,     0,     0,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,     0,     0,   188,   189,     0,     0,   190,
     351,   150,    78,    79,    80,    81,    82,     0,    83,    84,
       0,     0,   183,   184,   185,   186,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,   150,    78,    79,    80,    81,    82,     0,    83,    84,
       0,     0,   183,   184,   185,   186,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
      98,     0,     0,     0,     0,    99,   456,     0,     0,     0,
       0,     0,     0,     0,   101,   102,   103,   104,   105,   106,
       0,     0,   188,   189,     0,     0,   190,   191,    97,     0,
      98,     0,     0,     0,     0,    99,     0,   463,     0,     0,
       0,     0,     0,     0,   101,   102,   103,   104,   105,   106,
       0,     0,   188,   189,     0,     0,   190,   351,   150,    78,
      79,    80,    81,    82,     0,    83,    84,     0,     0,   183,
     184,   185,   186,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,   150,    78,
      79,    80,    81,    82,     0,    83,    84,     0,     0,   183,
     184,   185,   186,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,    98,     0,     0,
       0,     0,    99,     0,     0,   467,     0,     0,     0,     0,
       0,   101,   102,   103,   104,   105,   106,     0,     0,   188,
     189,     0,     0,   190,   351,    97,     0,    98,     0,     0,
       0,     0,    99,     0,     0,     0,     0,   472,     0,     0,
       0,   101,   102,   103,   104,   105,   106,     0,     0,   188,
     189,     0,     0,   190,   351,   150,    78,    79,    80,    81,
      82,     0,    83,    84,     0,     0,   183,   184,   185,   186,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,   150,    78,    79,    80,    81,
      82,     0,    83,    84,     0,     0,   183,   184,   185,   186,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,    98,     0,     0,     0,     0,    99,
       0,     0,     0,     0,   545,     0,     0,     0,   101,   102,
     103,   104,   105,   106,     0,     0,   188,   189,     0,     0,
     190,   351,    97,     0,    98,     0,     0,     0,     0,    99,
       0,   490,     0,     0,     0,     0,     0,     0,   101,   102,
     103,   104,   105,   106,     0,     0,   188,   189,     0,     0,
     190,   351,   150,    78,    79,    80,    81,    82,     0,    83,
      84,     0,     0,   183,   184,   185,   186,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,   150,    78,    79,    80,    81,    82,     0,    83,
      84,     0,     0,   183,   184,   185,   186,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,    98,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,   101,   102,   103,   104,   105,
     106,     0,     0,   188,   189,     0,     0,   190,   346,    97,
       0,    98,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,   101,   102,   103,   104,   105,
     106,     0,     0,   188,   189,     0,     0,   190,   191,   150,
      78,    79,    80,    81,    82,     0,    83,    84,     0,     0,
     183,   184,   185,   186,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,   150,
      78,    79,    80,    81,    82,     0,    83,    84,     0,     0,
     183,   184,   185,   186,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,    98,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,   101,   102,   103,   104,   105,   106,     0,     0,
     188,   189,     0,     0,   190,   351,    97,     0,    98,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,   101,   102,   103,   104,   105,   106,     0,     0,
     188,   189,     0,     0,   190,   150,    78,    79,    80,    81,
      82,     0,    83,    84,     0,     0,   183,   184,   185,   186,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,   150,    78,    79,    80,    81,    82,
       0,    83,    84,     0,     0,   183,   184,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,    98,     0,     0,     0,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,   101,   102,
     103,   104,   105,   106,     0,     0,   188,   189,     0,     0,
       0,    97,     0,    98,     0,     0,     0,     0,    99,     0,
       0,     0,     0,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,     0,     0,   188,   189,   149,     0,   150,
      78,    79,    80,    81,    82,     0,    83,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,    85,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,    28,    98,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,   101,   102,   103,   104,   105,   106,   215,     0,
     150,    78,    79,    80,    81,    82,     0,    83,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,    85,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,    28,    98,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,   282,
       0,   150,    78,    79,    80,    81,    82,     0,    83,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   398,     0,   150,    78,    79,    80,    81,    82,    85,
      83,    84,   302,     0,     0,     0,     9,    10,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,   399,     0,     0,     0,     9,    10,
      11,     0,     0,     0,     0,     0,     0,     0,    97,    28,
      98,     0,     0,     0,     0,    99,     0,     0,     0,     0,
     303,     0,     0,     0,   101,   304,   103,   104,   105,   106,
      97,    28,    98,     0,     0,     0,     0,    99,     0,     0,
       0,     0,   400,     0,     0,     0,   101,   401,   103,   104,
     105,   106,   282,     0,   150,    78,    79,    80,    81,    82,
       0,    83,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   282,     0,   150,    78,    79,    80,
      81,    82,    85,    83,    84,   432,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,   477,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,     0,     0,
       0,    97,    28,    98,     0,     0,     0,     0,    99,     0,
       0,     0,     0,   433,     0,     0,     0,   101,   434,   103,
     104,   105,   106,    97,    28,    98,     0,     0,     0,     0,
      99,     0,     0,     0,     0,   478,     0,     0,     0,   101,
     102,   103,   104,   105,   106,   483,     0,   150,    78,    79,
      80,    81,    82,     0,    83,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   282,     0,   150,
      78,    79,    80,    81,    82,    85,    83,    84,   484,     0,
       0,     0,     9,    10,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
     550,     0,     0,     0,     9,    10,    11,     0,     0,     0,
       0,     0,     0,     0,    97,    28,    98,     0,     0,     0,
       0,    99,     0,     0,     0,     0,   485,     0,     0,     0,
     101,   486,   103,   104,   105,   106,    97,    28,    98,     0,
       0,     0,     0,    99,     0,     0,     0,     0,   551,     0,
       0,     0,   101,   102,   103,   104,   105,   106,   282,     0,
     150,    78,    79,    80,    81,    82,     0,    83,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     282,     0,   150,    78,    79,    80,    81,    82,    85,    83,
      84,     0,     0,     0,     0,     9,    10,    11,     0,     0,
       0,     0,   282,     0,   150,    78,    79,    80,    81,    82,
      85,    83,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,    28,    98,
       0,     0,    85,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,    97,
       0,    98,     0,     0,     0,     0,    99,     0,     0,     0,
     409,     0,   410,   283,   556,   101,   102,   103,   104,   105,
     106,    97,     0,    98,     0,     0,     0,     0,    99,     0,
       0,     0,   409,     0,   410,   283,   592,   101,   102,   103,
     104,   105,   106,   408,     0,   150,    78,    79,    80,    81,
      82,     0,    83,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   534,     0,   150,    78,    79,
      80,    81,    82,    85,    83,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   282,     0,   150,
      78,    79,    80,    81,    82,    85,    83,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,    98,     0,     0,    85,     0,    99,
       0,     0,     0,   409,     0,   410,   283,     0,   101,   102,
     103,   104,   105,   106,    97,     0,    98,     0,     0,     0,
       0,    99,     0,     0,     0,   409,     0,   410,   283,     0,
     101,   102,   103,   104,   105,   106,    97,     0,    98,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,     0,
     283,     0,   101,   102,   103,   104,   105,   106,   355,     0,
     150,    78,    79,    80,    81,    82,     0,    83,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     282,     0,   150,    78,    79,    80,    81,    82,    85,    83,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   282,     0,   150,    78,    79,    80,    81,    82,
      85,    83,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,    98,
       0,     0,    85,     0,    99,   356,     0,     0,     0,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,    97,
       0,    98,     0,     0,     0,     0,    99,   526,     0,     0,
       0,     0,     0,     0,     0,   101,   102,   103,   104,   105,
     106,    97,     0,    98,     0,     0,     0,     0,    99,   528,
       0,     0,     0,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,   149,     0,   150,    78,    79,    80,    81,
      82,     0,    83,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   320,     0,   150,    78,    79,
      80,    81,    82,    85,    83,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   323,     0,   150,
      78,    79,    80,    81,    82,    85,    83,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,    98,     0,     0,    85,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,   101,   102,
     103,   104,   105,   106,    97,     0,    98,     0,     0,     0,
       0,    99,     0,     0,     0,     0,     0,     0,     0,     0,
     101,   102,   103,   104,   105,   106,    97,     0,    98,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,   101,   102,   103,   104,   105,   106,   328,     0,
     150,    78,    79,    80,    81,    82,     0,    83,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     335,     0,   150,    78,    79,    80,    81,    82,    85,    83,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   337,     0,   150,    78,    79,    80,    81,    82,
      85,    83,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,    98,
       0,     0,    85,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,    97,
       0,    98,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,   101,   102,   103,   104,   105,
     106,    97,     0,    98,     0,     0,     0,     0,    99,     0,
       0,     0,     0,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,   282,     0,   150,    78,    79,    80,    81,
      82,     0,    83,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   375,     0,   150,    78,    79,
      80,    81,    82,    85,    83,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   381,     0,   150,
      78,    79,    80,    81,    82,    85,    83,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,    98,     0,     0,    85,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,   101,   102,
     103,   104,   105,   106,    97,     0,    98,     0,     0,     0,
       0,    99,     0,     0,     0,     0,     0,     0,     0,     0,
     101,   102,   103,   104,   105,   106,    97,     0,    98,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,   101,   102,   103,   104,   105,   106,   150,    78,
      79,    80,    81,    82,     0,    83,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     150,    78,    79,    80,    81,    82,    85,    83,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   150,    78,    79,    80,    81,    82,    85,    83,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,    98,     0,     0,
      85,     0,    99,     0,     0,     0,     0,     0,     0,   461,
       0,   101,   102,   103,   104,   105,   106,    97,     0,    98,
       0,     0,     0,     0,   194,     0,     0,     0,     0,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,    97,
       0,    98,     0,     0,     0,     0,   196,     0,     0,     0,
       0,     0,     0,     0,   311,   101,   102,   103,   104,   105,
     106,   150,    78,    79,    80,    81,    82,     0,    83,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,     0,    85,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   499,     0,    57,    28,     0,     0,    30,    97,     0,
      98,     0,     0,     0,     0,    99,     0,     0,   312,     0,
       0,     0,     0,     0,   101,   102,   103,   104,   105,   106,
       2,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,   394,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     0,    29,     0,    31,     0,   416,   395,     0,
       0,   273,     0,     0,     0,     0,     2,    59,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   311,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
       0,    31,     0,   272,   395,     0,     0,   273,     0,     0,
       0,     2,     0,    59,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   437,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   294,     0,   295,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   480,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,     0,    31,     0,     0,
     296,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    73,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,     0,     0,   481,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   500,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   501,
     500,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   503,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   307,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     2,    30,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,   171,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     2,    47,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,    27,     0,    28,     0,    29,     0,
      31,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,   530,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,     0,     0,    28,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28
};

static const yytype_int16 yycheck[] =
{
      54,    54,    54,    55,    65,    59,     1,    91,     0,    54,
      55,   155,    69,    33,   494,    69,    69,   206,   274,   175,
      79,    77,   174,   263,    76,    14,    15,   267,   179,    49,
      82,    83,    84,     1,    86,     1,     3,     3,    58,    19,
      99,    86,    34,    35,    85,    99,    99,    39,    40,    41,
     114,    43,    47,   161,     3,    79,    51,    79,    99,    84,
      59,    79,   114,   171,     1,    79,     3,    85,    63,    79,
      54,    85,    79,    79,    84,    99,   100,    99,    46,    79,
      84,    55,   100,    51,    77,    81,   100,    83,    56,    99,
     100,     1,    99,    99,   574,    63,    84,   149,     3,    99,
     154,   154,   156,   156,   100,    94,    95,    77,    77,   193,
      77,    81,    86,    85,   168,    99,   200,   273,    98,    85,
     177,   175,   179,   177,   177,   179,   179,    99,   272,    88,
      89,   183,   184,   185,   186,    84,   188,   189,   133,   159,
     194,   194,   196,   196,   418,   385,   302,    80,    85,   169,
      69,   425,   204,   297,   343,   344,   155,   308,   210,   213,
     213,   181,   159,   215,   420,    77,   165,    77,    78,   168,
      80,    81,   169,   237,   238,   239,    77,    87,   173,    84,
      81,    96,   174,    80,    99,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   185,   186,   173,   258,    12,    13,    79,
     194,   206,   196,   265,   266,    85,     1,     1,     3,   273,
     265,   266,    87,     1,     1,     3,     3,    92,    93,   213,
     282,    79,    78,    79,    82,   154,    79,   156,     1,     1,
       3,     3,    85,   399,     1,    76,     3,    77,   302,   333,
     406,   308,   306,   405,   308,   308,    77,     1,   177,     3,
     179,     3,     1,   315,     3,    99,   248,   249,   320,    77,
     315,   323,   416,   272,    99,   190,   328,   297,    79,   194,
     272,   196,    77,   335,    85,   337,   201,   202,   203,   353,
     342,   265,   266,    77,    78,   294,    80,    81,   297,    77,
      77,   353,    80,   355,    86,   413,    79,   222,   438,    87,
      87,   441,    85,    96,    77,    77,    78,    79,   149,    81,
      77,    99,    99,   375,    87,    87,    16,    17,   484,   381,
      87,    78,    79,    77,    78,    79,    99,    81,    77,    97,
     255,   315,    81,    87,   100,   399,   398,    18,    87,   403,
      79,    80,   406,     1,   100,     3,   408,   409,    78,   420,
       1,     1,     3,     3,   409,   449,   450,   451,   452,   453,
      79,    80,   456,   204,     1,   429,     3,    78,     1,   210,
       3,    79,   490,     1,   215,     3,   494,   439,    87,   308,
      78,   443,   444,   445,   439,   394,   416,    78,   443,   444,
     445,     1,    80,     3,    78,    79,   460,   460,    62,   240,
     241,    78,    79,   405,    99,   467,   468,   416,   438,    78,
     474,   441,   467,   468,   416,     3,   418,   258,     3,    77,
     484,   483,    80,   425,   488,   409,    77,    78,    79,    87,
      81,    78,   526,   161,   528,     6,    87,    78,    79,   100,
     558,   282,    78,   171,    77,    78,    79,   175,    81,    77,
      78,    79,    79,    81,    87,   439,   574,    78,    79,   443,
      82,     1,    82,     3,    79,    80,    80,    77,   562,   563,
      99,   480,   534,   567,     1,   569,     3,    87,    78,   320,
      78,    79,   323,   547,    78,    79,   214,   328,    78,    79,
     499,   500,    78,   221,   335,    77,   337,    78,    79,    78,
      79,   342,    77,     9,    10,    11,    78,   235,   572,   572,
      79,    38,    39,    40,   355,   242,   243,   100,   183,   184,
      78,    78,    82,   188,   189,    78,    82,     3,   256,   454,
     455,     3,   457,   458,   375,    82,    82,    77,    78,    79,
     381,    81,    84,    82,    71,   273,    82,    87,    82,    78,
      77,    78,    79,    80,    81,   283,    82,   398,    82,     1,
      87,     3,     4,     5,     6,     7,     8,   408,    10,    11,
      82,    77,    82,    82,   302,    81,    99,    83,   306,   244,
     245,   246,   247,    80,    80,    60,    60,    80,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    82,    82,    82,    69,    70,    71,
      72,    73,    74,    75,    82,    77,    99,    38,    39,    40,
      99,    82,   483,    82,    86,    87,    88,    89,    90,    91,
     251,   572,   254,   250,   253,   177,   252,    99,   143,   461,
     133,   414,    43,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      71,   399,    -1,    -1,    -1,   403,    -1,    -1,   406,    -1,
      -1,    -1,    -1,    -1,    -1,   413,    87,    -1,    -1,    -1,
      -1,    -1,    -1,   534,   100,    -1,    -1,    -1,    -1,    -1,
      -1,   429,    -1,    -1,   432,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   461,    -1,    -1,    -1,   465,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,   474,    -1,    -1,   477,
      -1,    -1,    -1,    -1,    -1,    -1,   484,    -1,    -1,    -1,
     488,    -1,   490,    -1,    -1,    -1,   494,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   547,
      -1,    -1,   550,    -1,    -1,    -1,    -1,    -1,    -1,     1,
     558,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,   570,    -1,    -1,   573,   574,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    99,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    99,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    31,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,
      88,    89,    90,    91,    -1,     3,     4,     5,     6,     7,
       8,    99,    10,    11,    -1,    -1,    14,    15,    16,    17,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,     1,    99,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    31,    77,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    91,    -1,    -1,    94,    95,    -1,    -1,
      98,    99,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    14,    15,    16,    17,    70,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
       3,     4,     5,     6,     7,     8,    99,    10,    11,    -1,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      91,    -1,    -1,    94,    95,    -1,    -1,    98,    99,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      -1,    94,    95,    -1,    -1,    98,    99,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    -1,    94,    95,
      -1,    -1,    98,    99,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
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
      99,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    -1,    94,    95,    -1,    -1,    98,
      99,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    94,    95,    -1,    -1,
      98,    99,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    94,    95,    -1,    -1,
      98,    99,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,    94,    95,    -1,    -1,    98,    99,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,    94,    95,    -1,    -1,    98,    99,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      94,    95,    -1,    -1,    98,    99,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      94,    95,    -1,    -1,    98,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    94,    95,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    -1,    94,    95,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
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
      11,    -1,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    31,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      81,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    81,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    91,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    31,    -1,    77,
      -1,    -1,    -1,    81,    -1,    83,    84,    -1,    86,    87,
      88,    89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    81,    -1,    83,    84,    -1,
      86,    87,    88,    89,    90,    91,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    31,    -1,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    31,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    31,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    31,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      31,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    86,    87,    88,    89,    90,
      91,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,    71,    -1,    -1,    74,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    77,    78,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    30,    87,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    78,    -1,    -1,    81,    -1,    -1,
      -1,    30,    -1,    87,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     0,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    30,    74,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,   100,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    84,    32,    33,    34,
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
       0,     1,    30,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    69,    71,    73,
      74,    75,   129,   130,   133,   134,   135,   136,   142,   145,
     146,   147,   164,   174,   175,   176,     1,    84,   129,   130,
     167,   177,     3,    84,    77,    77,     1,     3,    77,    87,
      99,   131,   132,   148,   149,   150,   130,   130,     3,    84,
     130,   130,   130,     0,   175,   167,     1,     3,     4,     5,
       6,     7,     8,    10,    11,    31,    57,    58,    59,    61,
      62,    63,    64,    65,    66,    67,    68,    70,    72,    77,
      85,    86,    87,    88,    89,    90,    91,    99,   102,   103,
     105,   106,   109,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   127,   129,
     165,   166,   167,   168,   169,   170,   171,   172,   173,     1,
     148,   129,   167,    84,     1,     3,   104,   143,   144,     1,
       3,   111,   124,   128,   134,   139,   145,   156,   128,    79,
      99,   100,   167,     1,   148,     1,   145,   150,   151,    79,
      99,   100,   167,   177,    77,    81,   149,    84,     1,   137,
     138,   139,   164,    14,    15,    16,    17,    85,    94,    95,
      98,    99,   114,    80,    77,   111,    77,   111,   111,   128,
      80,    77,    77,    77,     1,   165,    77,     3,    99,    99,
       1,    99,   127,    77,    77,     1,   127,   156,     9,    10,
      11,    77,    81,    83,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,   100,   126,   113,    87,    92,    93,
      88,    89,    12,    13,    14,    15,    94,    95,    16,    17,
      86,    96,    97,    18,    19,    98,    79,    99,     1,    85,
     169,     1,   143,    79,    85,   100,   100,    79,    85,    78,
     139,     1,    77,    81,   150,   157,   158,   139,    78,    79,
       1,   132,     1,    84,   125,   159,    78,    78,   150,   145,
     150,   132,   159,   167,     1,     3,    78,   130,   152,   153,
     154,   155,    34,    82,    87,   125,   151,     1,   137,    85,
      99,     1,    85,   138,     1,    80,    99,   140,   141,   148,
       1,   116,   116,     1,   117,   117,   116,   116,     1,   127,
     165,   156,   156,    80,   165,     1,   127,     1,   127,   127,
      62,    62,     1,   129,   170,    99,    99,    99,   156,   125,
      78,    99,    78,    78,     3,     1,    78,   110,   125,   127,
       3,   125,   113,   113,   113,   114,   114,   115,   115,   116,
     116,   116,   116,   117,   117,     1,   118,   119,   120,   121,
     122,     1,   127,   125,    85,    79,    85,     1,   144,   128,
     128,    85,   144,    78,     1,    78,   152,   157,     1,    34,
      82,    87,   125,   151,   158,    77,    81,     6,     1,    81,
      83,   159,   160,   161,   162,   163,    77,    78,    79,   148,
     150,   157,   148,   157,    78,    79,    78,    79,   125,   151,
      82,    82,    34,    82,    87,   125,    85,    85,    79,    80,
     128,    79,    99,    80,    80,    80,    78,    78,   165,    78,
      78,    78,    78,    78,    77,    77,    78,   170,   170,    78,
      79,    84,   113,    79,    78,    79,    82,    80,    80,    85,
      78,    78,    82,   125,   151,    82,    82,    34,    82,   125,
       1,    78,   152,     1,    34,    82,    87,   125,   151,    78,
      79,    85,   128,     3,    79,    85,   159,   100,   163,     1,
       1,    56,   154,    56,   154,     3,    82,   125,   125,    82,
      82,     1,   141,   128,   141,   128,   124,   124,   165,   165,
     165,   165,   165,   127,   127,   165,    78,   127,    78,   127,
      58,   107,   108,   156,     1,   160,   125,   124,   124,    82,
     125,   125,    82,    78,    78,    82,   125,   151,    82,    82,
      34,    82,   125,    99,   159,    82,    85,   159,   161,    78,
      82,    82,    60,    60,    78,    78,   165,    78,   165,    78,
      80,    78,    79,    80,    79,    85,    82,    82,    82,   125,
     125,    82,   159,   165,   165,    99,    99,   165,   165,   125,
     108,   125,    85,    82,    82
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
     126,   127,   127,   128,   129,   129,   129,   129,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   131,   131,
     131,   132,   132,   132,   133,   133,   133,   133,   133,   133,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   135,   135,   135,   135,   135,
     136,   136,   137,   137,   138,   138,   138,   138,   139,   139,
     139,   139,   140,   140,   140,   141,   141,   141,   141,   142,
     142,   142,   142,   142,   142,   142,   143,   143,   143,   144,
     144,   144,   145,   145,   145,   145,   146,   146,   147,   147,
     148,   148,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   150,   150,
     150,   150,   150,   151,   151,   152,   152,   152,   153,   153,
     153,   154,   154,   154,   154,   154,   155,   155,   156,   156,
     157,   157,   157,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   159,   159,
     159,   159,   160,   160,   160,   160,   160,   161,   162,   162,
     163,   163,   164,   165,   165,   165,   165,   165,   165,   166,
     166,   166,   167,   167,   167,   168,   168,   169,   169,   170,
     170,   170,   171,   171,   171,   171,   171,   171,   172,   172,
     172,   172,   172,   172,   172,   172,   173,   173,   173,   173,
     173,   173,   174,   174,   175,   175,   176,   176,   176,   176,
     176,   176,   177,   177
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
       2,     1,     2,     1,     2,     1,     2,     1,     1,     3,
       3,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     5,     2,     5,     4,
       1,     1,     1,     2,     2,     3,     1,     2,     2,     1,
       2,     1,     1,     3,     3,     2,     3,     1,     3,     4,
       5,     5,     6,     2,     4,     5,     1,     3,     3,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     4,     4,
       2,     1,     1,     3,     3,     4,     6,     5,     5,     6,
       5,     4,     4,     4,     3,     4,     4,     3,     3,     2,
       2,     1,     3,     1,     2,     3,     1,     3,     1,     3,
       3,     2,     2,     1,     2,     2,     1,     3,     2,     1,
       2,     1,     1,     3,     2,     3,     5,     4,     5,     4,
       3,     3,     3,     4,     6,     5,     5,     6,     4,     4,
       2,     3,     3,     4,     3,     4,     4,     2,     3,     4,
       3,     1,     2,     1,     4,     3,     3,     2,     1,     2,
       3,     2,     7,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     2,     3,     3,     1,     2,     1,     1,     1,
       2,     2,     7,     5,     5,     5,     5,     7,     5,     7,
       6,     7,     6,     7,     7,     5,     3,     2,     2,     2,
       3,     3,     1,     2,     1,     1,     4,     3,     3,     3,
       3,     2,     1,     2
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
  case 124: /* storage_class_specifier: TYPEDEF  */
#line 270 "parserBison.y"
                        {typedef_name_flag = 1;}
#line 2960 "parserBison.tab.c"
    break;

  case 150: /* struct_or_union: STRUCT  */
#line 305 "parserBison.y"
                 {typedef_name_flag = 4;}
#line 2966 "parserBison.tab.c"
    break;


#line 2970 "parserBison.tab.c"

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

#line 605 "parserBison.y"

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
