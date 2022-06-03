/* A Bison parser, made by GNU Bison 3.7.5.  */

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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_PHASE2_TAB_H_INCLUDED
# define YY_YY_PHASE2_TAB_H_INCLUDED
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
    TOKEN_BOOLEANTYPE = 258,       /* TOKEN_BOOLEANTYPE  */
    TOKEN_BREAKSTMT = 259,         /* TOKEN_BREAKSTMT  */
    TOKEN_CALLOUT = 260,           /* TOKEN_CALLOUT  */
    TOKEN_CLASS = 261,             /* TOKEN_CLASS  */
    TOKEN_CONTINUESTMT = 262,      /* TOKEN_CONTINUESTMT  */
    TOKEN_ELSECONDITION = 263,     /* TOKEN_ELSECONDITION  */
    TOKEN_BOOLEANCONST = 264,      /* TOKEN_BOOLEANCONST  */
    TOKEN_LOOP = 265,              /* TOKEN_LOOP  */
    TOKEN_IFCONDITION = 266,       /* TOKEN_IFCONDITION  */
    TOKEN_INTTYPE = 267,           /* TOKEN_INTTYPE  */
    TOKEN_RETURN = 268,            /* TOKEN_RETURN  */
    TOKEN_VOIDTYPE = 269,          /* TOKEN_VOIDTYPE  */
    TOKEN_PROGRAMCLASS = 270,      /* TOKEN_PROGRAMCLASS  */
    TOKEN_MAINFUNC = 271,          /* TOKEN_MAINFUNC  */
    TOKEN_ID = 272,                /* TOKEN_ID  */
    TOKEN_ASSIGNOP = 273,          /* TOKEN_ASSIGNOP  */
    TOKEN_MINUSASSIGNOP = 274,     /* TOKEN_MINUSASSIGNOP  */
    TOKEN_PLUSASSIGNOP = 275,      /* TOKEN_PLUSASSIGNOP  */
    TOKEN_LOGICOP = 276,           /* TOKEN_LOGICOP  */
    TOKEN_EQUALITYOP = 277,        /* TOKEN_EQUALITYOP  */
    TOKEN_RELATIONOP = 278,        /* TOKEN_RELATIONOP  */
    TOKEN_CONDITIONOP = 279,       /* TOKEN_CONDITIONOP  */
    TOKEN_MODULSOP = 280,          /* TOKEN_MODULSOP  */
    TOKEN_DIVISIONOP = 281,        /* TOKEN_DIVISIONOP  */
    TOKEN_MULTIPLEOP = 282,        /* TOKEN_MULTIPLEOP  */
    TOKEN_MINUSOP = 283,           /* TOKEN_MINUSOP  */
    TOKEN_PLUSOP = 284,            /* TOKEN_PLUSOP  */
    TOKEN_LCB = 285,               /* TOKEN_LCB  */
    TOKEN_RCB = 286,               /* TOKEN_RCB  */
    TOKEN_LB = 287,                /* TOKEN_LB  */
    TOKEN_RB = 288,                /* TOKEN_RB  */
    TOKEN_LP = 289,                /* TOKEN_LP  */
    TOKEN_RP = 290,                /* TOKEN_RP  */
    TOKEN_SEMICOLON = 291,         /* TOKEN_SEMICOLON  */
    TOKEN_COMMA = 292,             /* TOKEN_COMMA  */
    TOKEN_CHARCONST = 293,         /* TOKEN_CHARCONST  */
    TOKEN_STRINGCONST = 294,       /* TOKEN_STRINGCONST  */
    TOKEN_HEXADECIMALCONST = 295,  /* TOKEN_HEXADECIMALCONST  */
    TOKEN_DECIMALCONST = 296       /* TOKEN_DECIMALCONST  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "phase2.y"

  char *str;
  tree* nonTerminal;

#line 110 "phase2.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PHASE2_TAB_H_INCLUDED  */
