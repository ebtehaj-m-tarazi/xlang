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
    T_BOOLEANTYPE = 258,           /* T_BOOLEANTYPE  */
    T_BREAKSTMT = 259,             /* T_BREAKSTMT  */
    T_CALLOUT = 260,               /* T_CALLOUT  */
    T_CLASS = 261,                 /* T_CLASS  */
    T_CONTINUESTMT = 262,          /* T_CONTINUESTMT  */
    T_ELSECONDITION = 263,         /* T_ELSECONDITION  */
    T_BOOLEANCONST = 264,          /* T_BOOLEANCONST  */
    T_LOOP = 265,                  /* T_LOOP  */
    T_IFCONDITION = 266,           /* T_IFCONDITION  */
    T_INTTYPE = 267,               /* T_INTTYPE  */
    T_RETURN = 268,                /* T_RETURN  */
    T_VOIDTYPE = 269,              /* T_VOIDTYPE  */
    T_PROGRAMCLASS = 270,          /* T_PROGRAMCLASS  */
    T_MAINFUNC = 271,              /* T_MAINFUNC  */
    T_ID = 272,                    /* T_ID  */
    T_ASSIGNOP = 273,              /* T_ASSIGNOP  */
    T_MINUSASSIGNOP = 274,         /* T_MINUSASSIGNOP  */
    T_PLUSASSIGNOP = 275,          /* T_PLUSASSIGNOP  */
    T_LOGICOP = 276,               /* T_LOGICOP  */
    T_EQUALITYOP = 277,            /* T_EQUALITYOP  */
    T_RELATIONOP = 278,            /* T_RELATIONOP  */
    T_CONDITIONOP = 279,           /* T_CONDITIONOP  */
    T_MODULSOP = 280,              /* T_MODULSOP  */
    T_DIVISIONOP = 281,            /* T_DIVISIONOP  */
    T_MULTIPLEOP = 282,            /* T_MULTIPLEOP  */
    T_MINUSOP = 283,               /* T_MINUSOP  */
    T_PLUSOP = 284,                /* T_PLUSOP  */
    T_LCB = 285,                   /* T_LCB  */
    T_RCB = 286,                   /* T_RCB  */
    T_LB = 287,                    /* T_LB  */
    T_RB = 288,                    /* T_RB  */
    T_LP = 289,                    /* T_LP  */
    T_RP = 290,                    /* T_RP  */
    T_SEMICOLON = 291,             /* T_SEMICOLON  */
    T_COMMA = 292,                 /* T_COMMA  */
    T_CHARCONST = 293,             /* T_CHARCONST  */
    T_STRINGCONST = 294,           /* T_STRINGCONST  */
    T_HEXADECIMALCONST = 295,      /* T_HEXADECIMALCONST  */
    T_DECIMALCONST = 296           /* T_DECIMALCONST  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PHASE2_TAB_H_INCLUDED  */
