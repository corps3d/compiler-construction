/* A Bison parser, made by GNU Bison 3.8.2.  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    NO_ELSE = 258,                 /* NO_ELSE  */
    IDENTIFIER = 259,              /* IDENTIFIER  */
    CONSTANT = 260,                /* CONSTANT  */
    STRING_LITERAL = 261,          /* STRING_LITERAL  */
    SIZEOF = 262,                  /* SIZEOF  */
    PTR_OP = 263,                  /* PTR_OP  */
    INC_OP = 264,                  /* INC_OP  */
    DEC_OP = 265,                  /* DEC_OP  */
    LEFT_OP = 266,                 /* LEFT_OP  */
    RIGHT_OP = 267,                /* RIGHT_OP  */
    LE_OP = 268,                   /* LE_OP  */
    GE_OP = 269,                   /* GE_OP  */
    EQ_OP = 270,                   /* EQ_OP  */
    NE_OP = 271,                   /* NE_OP  */
    AND_OP = 272,                  /* AND_OP  */
    OR_OP = 273,                   /* OR_OP  */
    MUL_ASSIGN = 274,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 275,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 276,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 277,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 278,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 279,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 280,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 281,              /* AND_ASSIGN  */
    XOR_ASSIGN = 282,              /* XOR_ASSIGN  */
    OR_ASSIGN = 283,               /* OR_ASSIGN  */
    DEFINE = 284,                  /* DEFINE  */
    TYPEDEF = 285,                 /* TYPEDEF  */
    EXTERN = 286,                  /* EXTERN  */
    STATIC = 287,                  /* STATIC  */
    AUTO = 288,                    /* AUTO  */
    REGISTER = 289,                /* REGISTER  */
    CHAR = 290,                    /* CHAR  */
    SHORT = 291,                   /* SHORT  */
    INT = 292,                     /* INT  */
    LONG = 293,                    /* LONG  */
    SIGNED = 294,                  /* SIGNED  */
    UNSIGNED = 295,                /* UNSIGNED  */
    FLOAT = 296,                   /* FLOAT  */
    DOUBLE = 297,                  /* DOUBLE  */
    CONST = 298,                   /* CONST  */
    VOLATILE = 299,                /* VOLATILE  */
    VOID = 300,                    /* VOID  */
    STRUCT = 301,                  /* STRUCT  */
    UNION = 302,                   /* UNION  */
    ENUM = 303,                    /* ENUM  */
    CASE = 304,                    /* CASE  */
    DEFAULT = 305,                 /* DEFAULT  */
    IF = 306,                      /* IF  */
    ELSE = 307,                    /* ELSE  */
    SWITCH = 308,                  /* SWITCH  */
    WHILE = 309,                   /* WHILE  */
    DO = 310,                      /* DO  */
    FOR = 311,                     /* FOR  */
    GOTO = 312,                    /* GOTO  */
    CONTINUE = 313,                /* CONTINUE  */
    BREAK = 314,                   /* BREAK  */
    RETURN = 315                   /* RETURN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NO_ELSE 258
#define IDENTIFIER 259
#define CONSTANT 260
#define STRING_LITERAL 261
#define SIZEOF 262
#define PTR_OP 263
#define INC_OP 264
#define DEC_OP 265
#define LEFT_OP 266
#define RIGHT_OP 267
#define LE_OP 268
#define GE_OP 269
#define EQ_OP 270
#define NE_OP 271
#define AND_OP 272
#define OR_OP 273
#define MUL_ASSIGN 274
#define DIV_ASSIGN 275
#define MOD_ASSIGN 276
#define ADD_ASSIGN 277
#define SUB_ASSIGN 278
#define LEFT_ASSIGN 279
#define RIGHT_ASSIGN 280
#define AND_ASSIGN 281
#define XOR_ASSIGN 282
#define OR_ASSIGN 283
#define DEFINE 284
#define TYPEDEF 285
#define EXTERN 286
#define STATIC 287
#define AUTO 288
#define REGISTER 289
#define CHAR 290
#define SHORT 291
#define INT 292
#define LONG 293
#define SIGNED 294
#define UNSIGNED 295
#define FLOAT 296
#define DOUBLE 297
#define CONST 298
#define VOLATILE 299
#define VOID 300
#define STRUCT 301
#define UNION 302
#define ENUM 303
#define CASE 304
#define DEFAULT 305
#define IF 306
#define ELSE 307
#define SWITCH 308
#define WHILE 309
#define DO 310
#define FOR 311
#define GOTO 312
#define CONTINUE 313
#define BREAK 314
#define RETURN 315

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "parser.y"

	char str[1000];

#line 191 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
