/* A Bison parser, made by GNU Bison 3.8.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSERBISON_TAB_H_INCLUDED
# define YY_YY_PARSERBISON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    STRUCT_ID = 259,               /* STRUCT_ID  */
    INTEGER_CONSTANT = 260,        /* INTEGER_CONSTANT  */
    FLOATING_CONSTANT = 261,       /* FLOATING_CONSTANT  */
    STRING_LITERAL = 262,          /* STRING_LITERAL  */
    FUNC_NAME = 263,               /* FUNC_NAME  */
    SIZEOF = 264,                  /* SIZEOF  */
    PTR_OP = 265,                  /* PTR_OP  */
    INC_OP = 266,                  /* INC_OP  */
    DEC_OP = 267,                  /* DEC_OP  */
    LEFT_OP = 268,                 /* LEFT_OP  */
    RIGHT_OP = 269,                /* RIGHT_OP  */
    LE_OP = 270,                   /* LE_OP  */
    GE_OP = 271,                   /* GE_OP  */
    EQ_OP = 272,                   /* EQ_OP  */
    NE_OP = 273,                   /* NE_OP  */
    AND_OP = 274,                  /* AND_OP  */
    OR_OP = 275,                   /* OR_OP  */
    MUL_ASSIGN = 276,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 277,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 278,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 279,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 280,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 281,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 282,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 283,              /* AND_ASSIGN  */
    XOR_ASSIGN = 284,              /* XOR_ASSIGN  */
    OR_ASSIGN = 285,               /* OR_ASSIGN  */
    TYPEDEF_NAME = 286,            /* TYPEDEF_NAME  */
    ENUMERATION_CONSTANT = 287,    /* ENUMERATION_CONSTANT  */
    TYPEDEF = 288,                 /* TYPEDEF  */
    EXTERN = 289,                  /* EXTERN  */
    STATIC = 290,                  /* STATIC  */
    AUTO = 291,                    /* AUTO  */
    REGISTER = 292,                /* REGISTER  */
    INLINE = 293,                  /* INLINE  */
    CONST = 294,                   /* CONST  */
    RESTRICT = 295,                /* RESTRICT  */
    VOLATILE = 296,                /* VOLATILE  */
    _BOOL = 297,                   /* _BOOL  */
    CHAR = 298,                    /* CHAR  */
    SHORT = 299,                   /* SHORT  */
    INT = 300,                     /* INT  */
    LONG = 301,                    /* LONG  */
    SIGNED = 302,                  /* SIGNED  */
    UNSIGNED = 303,                /* UNSIGNED  */
    FLOAT = 304,                   /* FLOAT  */
    DOUBLE = 305,                  /* DOUBLE  */
    VOID = 306,                    /* VOID  */
    _COMPLEX = 307,                /* _COMPLEX  */
    _IMAGINARY = 308,              /* _IMAGINARY  */
    STRUCT = 309,                  /* STRUCT  */
    UNION = 310,                   /* UNION  */
    ENUM = 311,                    /* ENUM  */
    ELLIPSIS = 312,                /* ELLIPSIS  */
    CASE = 313,                    /* CASE  */
    DEFAULT = 314,                 /* DEFAULT  */
    IF = 315,                      /* IF  */
    ELSE = 316,                    /* ELSE  */
    SWITCH = 317,                  /* SWITCH  */
    WHILE = 318,                   /* WHILE  */
    DO = 319,                      /* DO  */
    FOR = 320,                     /* FOR  */
    GOTO = 321,                    /* GOTO  */
    CONTINUE = 322,                /* CONTINUE  */
    BREAK = 323,                   /* BREAK  */
    RETURN = 324,                  /* RETURN  */
    _ALIGNAS = 325,                /* _ALIGNAS  */
    _ALIGNOF = 326,                /* _ALIGNOF  */
    _ATOMIC = 327,                 /* _ATOMIC  */
    _GENERIC = 328,                /* _GENERIC  */
    _NORETURN = 329,               /* _NORETURN  */
    _STATIC_ASSERT = 330,          /* _STATIC_ASSERT  */
    _THREAD_LOCAL = 331            /* _THREAD_LOCAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 49 "parserBison.y"
char* name; char* struct_union_name;

#line 143 "parserBison.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_PARSERBISON_TAB_H_INCLUDED  */
