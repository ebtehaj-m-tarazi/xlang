/* A Bison parser, made by GNU Bison 3.7.5.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "phase2.y"

  #include "tree.h"
  #include <stdio.h>
  #include <iostream>
  using namespace std;

  extern int yylex();
  extern int yyparse();
  extern FILE *yyin;

  void yyerror(const char *s);

	extern int yylineno;

  int input;
  tree *root;

#line 89 "phase2.tab.c"

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

#include "phase2.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOKEN_BOOLEANTYPE = 3,          /* TOKEN_BOOLEANTYPE  */
  YYSYMBOL_TOKEN_BREAKSTMT = 4,            /* TOKEN_BREAKSTMT  */
  YYSYMBOL_TOKEN_CALLOUT = 5,              /* TOKEN_CALLOUT  */
  YYSYMBOL_TOKEN_CLASS = 6,                /* TOKEN_CLASS  */
  YYSYMBOL_TOKEN_CONTINUESTMT = 7,         /* TOKEN_CONTINUESTMT  */
  YYSYMBOL_TOKEN_ELSECONDITION = 8,        /* TOKEN_ELSECONDITION  */
  YYSYMBOL_TOKEN_BOOLEANCONST = 9,         /* TOKEN_BOOLEANCONST  */
  YYSYMBOL_TOKEN_LOOP = 10,                /* TOKEN_LOOP  */
  YYSYMBOL_TOKEN_IFCONDITION = 11,         /* TOKEN_IFCONDITION  */
  YYSYMBOL_TOKEN_INTTYPE = 12,             /* TOKEN_INTTYPE  */
  YYSYMBOL_TOKEN_RETURN = 13,              /* TOKEN_RETURN  */
  YYSYMBOL_TOKEN_VOIDTYPE = 14,            /* TOKEN_VOIDTYPE  */
  YYSYMBOL_TOKEN_PROGRAMCLASS = 15,        /* TOKEN_PROGRAMCLASS  */
  YYSYMBOL_TOKEN_MAINFUNC = 16,            /* TOKEN_MAINFUNC  */
  YYSYMBOL_TOKEN_ID = 17,                  /* TOKEN_ID  */
  YYSYMBOL_TOKEN_ASSIGNOP = 18,            /* TOKEN_ASSIGNOP  */
  YYSYMBOL_TOKEN_MINUSASSIGNOP = 19,       /* TOKEN_MINUSASSIGNOP  */
  YYSYMBOL_TOKEN_PLUSASSIGNOP = 20,        /* TOKEN_PLUSASSIGNOP  */
  YYSYMBOL_TOKEN_LOGICOP = 21,             /* TOKEN_LOGICOP  */
  YYSYMBOL_TOKEN_EQUALITYOP = 22,          /* TOKEN_EQUALITYOP  */
  YYSYMBOL_TOKEN_RELATIONOP = 23,          /* TOKEN_RELATIONOP  */
  YYSYMBOL_TOKEN_CONDITIONOP = 24,         /* TOKEN_CONDITIONOP  */
  YYSYMBOL_TOKEN_MODULSOP = 25,            /* TOKEN_MODULSOP  */
  YYSYMBOL_TOKEN_DIVISIONOP = 26,          /* TOKEN_DIVISIONOP  */
  YYSYMBOL_TOKEN_MULTIPLEOP = 27,          /* TOKEN_MULTIPLEOP  */
  YYSYMBOL_TOKEN_MINUSOP = 28,             /* TOKEN_MINUSOP  */
  YYSYMBOL_TOKEN_PLUSOP = 29,              /* TOKEN_PLUSOP  */
  YYSYMBOL_TOKEN_LCB = 30,                 /* TOKEN_LCB  */
  YYSYMBOL_TOKEN_RCB = 31,                 /* TOKEN_RCB  */
  YYSYMBOL_TOKEN_LB = 32,                  /* TOKEN_LB  */
  YYSYMBOL_TOKEN_RB = 33,                  /* TOKEN_RB  */
  YYSYMBOL_TOKEN_LP = 34,                  /* TOKEN_LP  */
  YYSYMBOL_TOKEN_RP = 35,                  /* TOKEN_RP  */
  YYSYMBOL_TOKEN_SEMICOLON = 36,           /* TOKEN_SEMICOLON  */
  YYSYMBOL_TOKEN_COMMA = 37,               /* TOKEN_COMMA  */
  YYSYMBOL_TOKEN_CHARCONST = 38,           /* TOKEN_CHARCONST  */
  YYSYMBOL_TOKEN_STRINGCONST = 39,         /* TOKEN_STRINGCONST  */
  YYSYMBOL_TOKEN_HEXADECIMALCONST = 40,    /* TOKEN_HEXADECIMALCONST  */
  YYSYMBOL_TOKEN_DECIMALCONST = 41,        /* TOKEN_DECIMALCONST  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_program = 43,                   /* program  */
  YYSYMBOL_decl_list = 44,                 /* decl_list  */
  YYSYMBOL_field_decl = 45,                /* field_decl  */
  YYSYMBOL_variables = 46,                 /* variables  */
  YYSYMBOL_variable = 47,                  /* variable  */
  YYSYMBOL_method_decls = 48,              /* method_decls  */
  YYSYMBOL_method_decls1 = 49,             /* method_decls1  */
  YYSYMBOL_method_decl = 50,               /* method_decl  */
  YYSYMBOL_main_decl = 51,                 /* main_decl  */
  YYSYMBOL_method_type = 52,               /* method_type  */
  YYSYMBOL_args = 53,                      /* args  */
  YYSYMBOL_arg = 54,                       /* arg  */
  YYSYMBOL_block = 55,                     /* block  */
  YYSYMBOL_var_decls = 56,                 /* var_decls  */
  YYSYMBOL_var_decl = 57,                  /* var_decl  */
  YYSYMBOL_ids = 58,                       /* ids  */
  YYSYMBOL_type = 59,                      /* type  */
  YYSYMBOL_statements = 60,                /* statements  */
  YYSYMBOL_statement = 61,                 /* statement  */
  YYSYMBOL_nexpr = 62,                     /* nexpr  */
  YYSYMBOL_else_block = 63,                /* else_block  */
  YYSYMBOL_assign_op = 64,                 /* assign_op  */
  YYSYMBOL_method_call = 65,               /* method_call  */
  YYSYMBOL_method_name = 66,               /* method_name  */
  YYSYMBOL_location = 67,                  /* location  */
  YYSYMBOL_exprs = 68,                     /* exprs  */
  YYSYMBOL_expr = 69,                      /* expr  */
  YYSYMBOL_expr1 = 70,                     /* expr1  */
  YYSYMBOL_callout_args = 71,              /* callout_args  */
  YYSYMBOL_callout_arg = 72,               /* callout_arg  */
  YYSYMBOL_bin_op = 73,                    /* bin_op  */
  YYSYMBOL_arith_op = 74,                  /* arith_op  */
  YYSYMBOL_rel_op = 75,                    /* rel_op  */
  YYSYMBOL_eq_op = 76,                     /* eq_op  */
  YYSYMBOL_cond_op = 77,                   /* cond_op  */
  YYSYMBOL_literal = 78,                   /* literal  */
  YYSYMBOL_id = 79,                        /* id  */
  YYSYMBOL_int_literal = 80,               /* int_literal  */
  YYSYMBOL_deciamla_literal = 81,          /* deciamla_literal  */
  YYSYMBOL_hex_literal = 82,               /* hex_literal  */
  YYSYMBOL_bool_literal = 83,              /* bool_literal  */
  YYSYMBOL_char_literal = 84,              /* char_literal  */
  YYSYMBOL_string_literal = 85             /* string_literal  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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
typedef yytype_uint8 yy_state_t;

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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   217

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   118,   118,   123,   125,   131,   137,   148,   153,   156,
     161,   164,   172,   173,   177,   179,   183,   187,   191,   192,
     194,   195,   196,   200,   204,   209,   210,   213,   216,   217,
     223,   224,   229,   230,   233,   236,   238,   241,   244,   246,
     248,   250,   253,   254,   256,   257,   262,   263,   264,   270,
     273,   276,   283,   288,   289,   293,   294,   295,   298,   299,
     302,   303,   304,   305,   306,   307,   312,   313,   314,   318,
     319,   325,   326,   327,   328,   333,   334,   335,   336,   337,
     343,   348,   353,   358,   359,   360,   365,   369,   370,   374,
     378,   382,   386,   390
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOKEN_BOOLEANTYPE",
  "TOKEN_BREAKSTMT", "TOKEN_CALLOUT", "TOKEN_CLASS", "TOKEN_CONTINUESTMT",
  "TOKEN_ELSECONDITION", "TOKEN_BOOLEANCONST", "TOKEN_LOOP",
  "TOKEN_IFCONDITION", "TOKEN_INTTYPE", "TOKEN_RETURN", "TOKEN_VOIDTYPE",
  "TOKEN_PROGRAMCLASS", "TOKEN_MAINFUNC", "TOKEN_ID", "TOKEN_ASSIGNOP",
  "TOKEN_MINUSASSIGNOP", "TOKEN_PLUSASSIGNOP", "TOKEN_LOGICOP",
  "TOKEN_EQUALITYOP", "TOKEN_RELATIONOP", "TOKEN_CONDITIONOP",
  "TOKEN_MODULSOP", "TOKEN_DIVISIONOP", "TOKEN_MULTIPLEOP",
  "TOKEN_MINUSOP", "TOKEN_PLUSOP", "TOKEN_LCB", "TOKEN_RCB", "TOKEN_LB",
  "TOKEN_RB", "TOKEN_LP", "TOKEN_RP", "TOKEN_SEMICOLON", "TOKEN_COMMA",
  "TOKEN_CHARCONST", "TOKEN_STRINGCONST", "TOKEN_HEXADECIMALCONST",
  "TOKEN_DECIMALCONST", "$accept", "program", "decl_list", "field_decl",
  "variables", "variable", "method_decls", "method_decls1", "method_decl",
  "main_decl", "method_type", "args", "arg", "block", "var_decls",
  "var_decl", "ids", "type", "statements", "statement", "nexpr",
  "else_block", "assign_op", "method_call", "method_name", "location",
  "exprs", "expr", "expr1", "callout_args", "callout_arg", "bin_op",
  "arith_op", "rel_op", "eq_op", "cond_op", "literal", "id", "int_literal",
  "deciamla_literal", "hex_literal", "bool_literal", "char_literal",
  "string_literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
#endif

#define YYPACT_NINF (-84)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-53)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,    23,    25,   -11,   -84,    74,   -84,   -84,    19,    16,
      74,    95,    38,    27,   -84,    36,   -84,   -84,   -84,   -84,
      95,    38,   -84,    45,    47,     9,    57,    10,   -84,    63,
     -84,    38,    53,    10,    71,    69,    68,    38,    10,   -84,
      80,   -84,   -84,    93,   -84,   -84,    78,    10,   -84,    71,
      10,   -84,    90,   -84,    71,    55,    10,    38,    96,   -84,
      71,    96,   102,   105,   106,    38,   107,    62,   -84,   109,
      55,   118,   110,   104,    48,   -84,   119,   120,   127,   -84,
      96,    95,   -84,   -84,   -84,   117,   -84,   140,    62,   -84,
      62,    62,    62,   -84,   123,   -84,   -84,   188,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,    62,   -84,   -84,   -84,
      62,    62,   -84,    38,   -84,   -84,   -84,    52,    62,   139,
     -84,   -84,   153,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,    62,   -84,   -84,   -84,   -84,   134,    92,   124,
     167,   -84,   -84,    35,   108,    71,   -84,   -84,   -84,    62,
     -84,   -84,   188,   135,   136,   -84,    62,   163,   -84,   -84,
      35,   179,    71,   -84,   -84,   -84,   -84
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,    31,    30,     0,     0,
       0,    12,     0,     0,    86,     0,     2,     3,    19,     6,
      12,     0,    18,     0,     8,    10,     0,    20,    13,     0,
       7,     0,     0,    20,     0,     0,    21,     0,    20,     9,
      10,    90,    89,     0,    87,    88,     0,    25,    17,     0,
      20,    23,     0,    11,     0,    32,    25,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    42,    41,     0,
      32,     0,     0,     0,    53,    26,     0,    28,    19,     4,
       0,    12,    16,     5,    39,     0,    40,     0,     0,    91,
       0,     0,     0,    92,     0,    61,    60,    43,    59,    62,
      83,    85,    84,    24,    33,    35,    55,    46,    47,    48,
       0,     0,    27,     0,    14,    15,    93,     0,     0,     0,
      64,    63,     0,    38,    81,    80,    82,    75,    76,    77,
      78,    79,     0,    71,    72,    73,    74,     0,    56,     0,
       0,    29,    51,    66,     0,     0,    65,    58,    49,    55,
      34,    54,    69,     0,    67,    70,     0,    44,    57,    50,
      66,     0,     0,    36,    68,    37,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -84,   -84,   162,   -84,   152,   -84,   -17,   -51,   -49,    11,
     -84,     4,   -84,   -34,   128,   -84,    72,     1,   116,   -84,
     -84,   -84,   -84,   -38,   -84,   -37,    49,   -65,   -83,    37,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,    -7,   155,   -84,
     -84,   -84,   -84,   114
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     9,    10,    23,    24,    19,    79,    20,    81,
      21,    35,    36,    68,    55,    56,    76,    22,    69,    70,
      94,   163,   110,    95,    72,    96,   137,   138,    98,   153,
     154,   132,   133,   134,   135,   136,    99,    74,   100,    44,
      45,   101,   102,   155
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,    15,    97,    28,     1,    25,    12,   120,   121,    80,
      83,    12,    80,     6,    29,    58,    11,    71,    73,     5,
      61,    11,     7,   119,    40,     4,    82,   122,    37,   114,
      51,    80,    71,    73,    37,    13,    14,    46,     3,    37,
      63,    32,    52,    33,    89,   139,   140,    16,    57,   147,
      77,    37,    14,   144,    59,    14,    90,    57,    87,    62,
      63,    26,    64,    91,   115,    65,    66,    63,    67,    92,
      27,    89,    14,    93,   116,    41,    42,     6,   152,    14,
     111,    30,   -52,    90,    31,    47,     7,   142,     8,   143,
      91,   161,    34,    41,    42,   152,    92,    38,     6,     6,
      93,    47,    41,    42,    49,    50,    77,     7,     7,    18,
      78,   157,    32,    54,   124,   125,   126,   127,   128,   129,
     130,   131,   107,   108,   109,    60,    53,   165,   166,   149,
     124,   125,   126,   127,   128,   129,   130,   131,    84,    85,
     103,    88,    86,    13,   106,   156,   124,   125,   126,   127,
     128,   129,   130,   131,   105,   112,   116,   113,   118,   123,
     150,   124,   125,   126,   127,   128,   129,   130,   131,   148,
     159,   162,    17,   160,   145,   124,   125,   126,   127,   128,
     129,   130,   131,    39,    75,   141,   104,    43,   146,   124,
     125,   126,   127,   128,   129,   130,   131,   164,   158,   117,
     151,   124,   125,   126,   127,   128,   129,   130,   131,    47,
     124,   125,   126,   127,   128,   129,   130,   131
};

static const yytype_uint8 yycheck[] =
{
      34,     8,    67,    20,     6,    12,     5,    90,    91,    58,
      61,    10,    61,     3,    21,    49,     5,    55,    55,    30,
      54,    10,    12,    88,    31,     0,    60,    92,    27,    80,
      37,    80,    70,    70,    33,    16,    17,    33,    15,    38,
       5,    32,    38,    34,     9,   110,   111,    31,    47,   132,
      57,    50,    17,   118,    50,    17,    21,    56,    65,     4,
       5,    34,     7,    28,    81,    10,    11,     5,    13,    34,
      34,     9,    17,    38,    39,    40,    41,     3,   143,    17,
      32,    36,    34,    21,    37,    30,    12,    35,    14,    37,
      28,   156,    35,    40,    41,   160,    34,    34,     3,     3,
      38,    30,    40,    41,    35,    37,   113,    12,    12,    14,
      14,   145,    32,    35,    22,    23,    24,    25,    26,    27,
      28,    29,    18,    19,    20,    35,    33,   161,   162,    37,
      22,    23,    24,    25,    26,    27,    28,    29,    36,    34,
      31,    34,    36,    16,    34,    37,    22,    23,    24,    25,
      26,    27,    28,    29,    36,    36,    39,    37,    18,    36,
      36,    22,    23,    24,    25,    26,    27,    28,    29,    35,
      35,     8,    10,    37,    35,    22,    23,    24,    25,    26,
      27,    28,    29,    31,    56,   113,    70,    32,    35,    22,
      23,    24,    25,    26,    27,    28,    29,   160,   149,    85,
      33,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      22,    23,    24,    25,    26,    27,    28,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,    43,    15,     0,    30,     3,    12,    14,    44,
      45,    51,    59,    16,    17,    79,    31,    44,    14,    48,
      50,    52,    59,    46,    47,    79,    34,    34,    48,    79,
      36,    37,    32,    34,    35,    53,    54,    59,    34,    46,
      79,    40,    41,    80,    81,    82,    53,    30,    55,    35,
      37,    79,    53,    33,    35,    56,    57,    59,    55,    53,
      35,    55,     4,     5,     7,    10,    11,    13,    55,    60,
      61,    65,    66,    67,    79,    56,    58,    79,    14,    49,
      50,    51,    55,    49,    36,    34,    36,    79,    34,     9,
      21,    28,    34,    38,    62,    65,    67,    69,    70,    78,
      80,    83,    84,    31,    60,    36,    34,    18,    19,    20,
      64,    32,    36,    37,    49,    48,    39,    85,    18,    69,
      70,    70,    69,    36,    22,    23,    24,    25,    26,    27,
      28,    29,    73,    74,    75,    76,    77,    68,    69,    69,
      69,    58,    35,    37,    69,    35,    35,    70,    35,    37,
      36,    33,    69,    71,    72,    85,    37,    55,    68,    35,
      37,    69,     8,    63,    71,    55,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    44,    44,    44,    44,    45,    46,    46,
      47,    47,    48,    48,    49,    49,    50,    51,    52,    52,
      53,    53,    53,    54,    55,    56,    56,    57,    58,    58,
      59,    59,    60,    60,    61,    61,    61,    61,    61,    61,
      61,    61,    62,    62,    63,    63,    64,    64,    64,    65,
      65,    65,    66,    67,    67,    68,    68,    68,    69,    69,
      70,    70,    70,    70,    70,    70,    71,    71,    71,    72,
      72,    73,    73,    73,    73,    74,    74,    74,    74,    74,
      75,    76,    77,    78,    78,    78,    79,    80,    80,    81,
      82,    83,    84,    85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     2,     7,     7,     2,     3,     1,     3,
       1,     4,     0,     2,     2,     2,     6,     5,     1,     1,
       0,     1,     3,     2,     4,     0,     2,     3,     1,     3,
       1,     1,     0,     2,     4,     2,     6,     7,     3,     2,
       2,     1,     0,     1,     0,     2,     1,     1,     1,     4,
       6,     4,     1,     1,     4,     0,     1,     3,     3,     1,
       1,     1,     1,     2,     2,     3,     0,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
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
    goto yyexhaustedlab;
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: TOKEN_CLASS TOKEN_PROGRAMCLASS TOKEN_LCB decl_list TOKEN_RCB  */
#line 118 "phase2.y"
                                                               {(yyval.nonTerminal) = new tree("<program>" , "<program>"); (yyval.nonTerminal)->addChild("TOKEN_CLASS" , (yyvsp[-4].str))->addChild("TOKEN_PROGRAMCLASS" , (yyvsp[-3].str))->addChild("TOKEN_LCB" , (yyvsp[-2].str))->addOthersChild((yyvsp[-1].nonTerminal))->addChild("TOKEN_RCB" , (yyvsp[0].str));
  root = (yyval.nonTerminal);}
#line 1306 "phase2.tab.c"
    break;

  case 3: /* decl_list: field_decl decl_list  */
#line 123 "phase2.y"
                       {(yyval.nonTerminal) = new tree("<decl_list>" , "<decl_list>"); (yyval.nonTerminal)->addChild((yyvsp[-1].nonTerminal))->addOthersChild((yyvsp[0].nonTerminal));}
#line 1312 "phase2.tab.c"
    break;

  case 4: /* decl_list: TOKEN_VOIDTYPE id TOKEN_LP args TOKEN_RP block method_decls1  */
#line 126 "phase2.y"
    {(yyval.nonTerminal) = new tree("<decl_list>" , "<decl_list>");
    tree* temp = new tree("<method_decl>" ,  "<method_decl>");
    temp->addChild("TOKEN_VOIDTYPE" , (yyvsp[-6].str))->addChild((yyvsp[-5].nonTerminal))->addChild("TOKEN_LP" , (yyvsp[-4].str))->addOthersChild((yyvsp[-3].nonTerminal))->addChild("TOKEN_RP" , (yyvsp[-2].str))->addChild((yyvsp[-1].nonTerminal));
    (yyval.nonTerminal)->addChild(temp)->addOthersChild((yyvsp[0].nonTerminal));}
#line 1321 "phase2.tab.c"
    break;

  case 5: /* decl_list: type id TOKEN_LP args TOKEN_RP block method_decls1  */
#line 132 "phase2.y"
    {(yyval.nonTerminal) = new tree("<decl_list>" , "<decl_list>");
    tree* temp = new tree("<method_decl>" ,  "<method_decl>");
    temp->addChild((yyvsp[-6].nonTerminal))->addChild((yyvsp[-5].nonTerminal))->addChild("TOKEN_LP" , (yyvsp[-4].str))->addOthersChild((yyvsp[-3].nonTerminal))->addChild("TOKEN_RP" , (yyvsp[-2].str))->addChild((yyvsp[-1].nonTerminal));
    (yyval.nonTerminal)->addChild(temp)->addOthersChild((yyvsp[0].nonTerminal));}
#line 1330 "phase2.tab.c"
    break;

  case 6: /* decl_list: main_decl method_decls  */
#line 138 "phase2.y"
    {(yyval.nonTerminal) = new tree("<decl_list>" , "<decl_list>");
    tree* temp = new tree("<method_decl>" ,  "<method_decl>");
    temp->addOthersChild((yyvsp[-1].nonTerminal));
    (yyval.nonTerminal)->addChild(temp)->addOthersChild((yyvsp[0].nonTerminal));}
#line 1339 "phase2.tab.c"
    break;

  case 7: /* field_decl: type variables TOKEN_SEMICOLON  */
#line 149 "phase2.y"
    {(yyval.nonTerminal) = new tree("<field_decl>" , "<field_decl>"); (yyval.nonTerminal)->addChild((yyvsp[-2].nonTerminal))->addOthersChild((yyvsp[-1].nonTerminal))->addChild("TOKEN_SEMICOLON" , (yyvsp[0].str));}
#line 1345 "phase2.tab.c"
    break;

  case 8: /* variables: variable  */
#line 154 "phase2.y"
    {(yyval.nonTerminal) = new tree("<variables>" , "<variables>"); (yyval.nonTerminal)->addOthersChild((yyvsp[0].nonTerminal));}
#line 1351 "phase2.tab.c"
    break;

  case 9: /* variables: variable TOKEN_COMMA variables  */
#line 157 "phase2.y"
    {(yyval.nonTerminal) = new tree("<variables>" , "<variables>"); (yyval.nonTerminal)->addOthersChild((yyvsp[-2].nonTerminal))->addChild("TOKEN_COMMA" , (yyvsp[-1].str))->addOthersChild((yyvsp[0].nonTerminal));}
#line 1357 "phase2.tab.c"
    break;

  case 10: /* variable: id  */
#line 162 "phase2.y"
    {(yyval.nonTerminal) = new tree("<variable>" , "<variable>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1363 "phase2.tab.c"
    break;

  case 11: /* variable: id TOKEN_LB int_literal TOKEN_RB  */
#line 165 "phase2.y"
    {(yyval.nonTerminal) = new tree("<variable>" , "<variable>"); (yyval.nonTerminal)->addChild((yyvsp[-3].nonTerminal))->addChild("TOKEN_LB" , (yyvsp[-2].str))->addChild((yyvsp[-1].nonTerminal))->addChild("TOKEN_RB" , (yyvsp[0].str));}
#line 1369 "phase2.tab.c"
    break;

  case 12: /* method_decls: %empty  */
#line 172 "phase2.y"
               {(yyval.nonTerminal) = new tree("<method_decls>" , "<method_decls>");}
#line 1375 "phase2.tab.c"
    break;

  case 13: /* method_decls: method_decl method_decls  */
#line 174 "phase2.y"
    {(yyval.nonTerminal) = new tree("<method_decls>" , "<method_decls>"); (yyval.nonTerminal)->addChild((yyvsp[-1].nonTerminal))->addOthersChild((yyvsp[0].nonTerminal));}
#line 1381 "phase2.tab.c"
    break;

  case 14: /* method_decls1: method_decl method_decls1  */
#line 178 "phase2.y"
    {(yyval.nonTerminal) = new tree("<method_decls1>" , "<method_decls1>"); (yyval.nonTerminal)->addChild((yyvsp[-1].nonTerminal))->addOthersChild((yyvsp[0].nonTerminal));}
#line 1387 "phase2.tab.c"
    break;

  case 15: /* method_decls1: main_decl method_decls  */
#line 180 "phase2.y"
    {(yyval.nonTerminal) = new tree("<method_decls1>" , "<method_decls1>"); (yyval.nonTerminal)->addOthersChild((yyvsp[-1].nonTerminal))->addOthersChild((yyvsp[0].nonTerminal));}
#line 1393 "phase2.tab.c"
    break;

  case 16: /* method_decl: method_type id TOKEN_LP args TOKEN_RP block  */
#line 184 "phase2.y"
    {(yyval.nonTerminal) = new tree("<method_decl>" , "<method_decl>"); (yyval.nonTerminal)->addOthersChild((yyvsp[-5].nonTerminal))->addChild((yyvsp[-4].nonTerminal))->addChild("TOKEN_LP" , (yyvsp[-3].str))->addOthersChild((yyvsp[-2].nonTerminal))->addChild("TOKEN_RP" , (yyvsp[-1].str))->addChild((yyvsp[0].nonTerminal));}
#line 1399 "phase2.tab.c"
    break;

  case 17: /* main_decl: TOKEN_VOIDTYPE TOKEN_MAINFUNC TOKEN_LP TOKEN_RP block  */
#line 188 "phase2.y"
    {(yyval.nonTerminal) = new tree("<main_decls1>" , "<main_decls1>"); (yyval.nonTerminal)->addChild("TOKEN_VOIDTYPE" , (yyvsp[-4].str))->addChild("TOKEN_MAINFUNC" , (yyvsp[-3].str))->addChild("TOKEN_LP" , (yyvsp[-2].str))->addChild("TOKEN_RP" , (yyvsp[-1].str))->addChild((yyvsp[0].nonTerminal));}
#line 1405 "phase2.tab.c"
    break;

  case 18: /* method_type: type  */
#line 191 "phase2.y"
       {(yyval.nonTerminal) = new tree("<method_type>" , "<method_type>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1411 "phase2.tab.c"
    break;

  case 19: /* method_type: TOKEN_VOIDTYPE  */
#line 192 "phase2.y"
                 {(yyval.nonTerminal) = new tree("<method_type>" , "<method_type>"); (yyval.nonTerminal)->addChild("TOKEN_VOIDTYPE" , (yyvsp[0].str));}
#line 1417 "phase2.tab.c"
    break;

  case 20: /* args: %empty  */
#line 194 "phase2.y"
       {(yyval.nonTerminal) = new tree("<args>" , "<args>");}
#line 1423 "phase2.tab.c"
    break;

  case 21: /* args: arg  */
#line 195 "phase2.y"
      {(yyval.nonTerminal) = new tree("<args>" , "<args>"); (yyval.nonTerminal)->addOthersChild((yyvsp[0].nonTerminal));}
#line 1429 "phase2.tab.c"
    break;

  case 22: /* args: arg TOKEN_COMMA args  */
#line 196 "phase2.y"
                       {(yyval.nonTerminal) = new tree("<args>" , "<args>"); (yyval.nonTerminal)->addOthersChild((yyvsp[-2].nonTerminal))->addChild("TOKEN_COMMA" , (yyvsp[-1].str))->addOthersChild((yyvsp[0].nonTerminal));}
#line 1435 "phase2.tab.c"
    break;

  case 23: /* arg: type id  */
#line 200 "phase2.y"
          {(yyval.nonTerminal) = new tree("<arg>" , "<arg>"); (yyval.nonTerminal)->addChild((yyvsp[-1].nonTerminal))->addChild((yyvsp[0].nonTerminal));}
#line 1441 "phase2.tab.c"
    break;

  case 24: /* block: TOKEN_LCB var_decls statements TOKEN_RCB  */
#line 205 "phase2.y"
  {(yyval.nonTerminal) = new tree("<block>" , "<block>"); (yyval.nonTerminal)->addChild("TOKEN_LCB" , (yyvsp[-3].str))->addOthersChild((yyvsp[-2].nonTerminal))->addOthersChild((yyvsp[-1].nonTerminal))->addChild("TOKEN_RCB" , (yyvsp[0].str));}
#line 1447 "phase2.tab.c"
    break;

  case 25: /* var_decls: %empty  */
#line 209 "phase2.y"
           {(yyval.nonTerminal) = new tree("<var_decls>" , "<var_decls>");}
#line 1453 "phase2.tab.c"
    break;

  case 26: /* var_decls: var_decl var_decls  */
#line 210 "phase2.y"
                     {(yyval.nonTerminal) = new tree("<var_decls>" , "<var_decls>"); (yyval.nonTerminal)->addChild((yyvsp[-1].nonTerminal))->addOthersChild((yyvsp[0].nonTerminal));}
#line 1459 "phase2.tab.c"
    break;

  case 27: /* var_decl: type ids TOKEN_SEMICOLON  */
#line 213 "phase2.y"
                           {(yyval.nonTerminal) = new tree("<var_decl>" , "<var_decl>"); (yyval.nonTerminal)->addChild((yyvsp[-2].nonTerminal))->addOthersChild((yyvsp[-1].nonTerminal))->addChild("TOKEN_SEMICOLON" , (yyvsp[0].str));}
#line 1465 "phase2.tab.c"
    break;

  case 28: /* ids: id  */
#line 216 "phase2.y"
      {(yyval.nonTerminal) = new tree("<ids>" , "<ids>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1471 "phase2.tab.c"
    break;

  case 29: /* ids: id TOKEN_COMMA ids  */
#line 217 "phase2.y"
                     {(yyval.nonTerminal) = new tree("<ids>" , "<ids>"); (yyval.nonTerminal)->addChild((yyvsp[-2].nonTerminal))->addChild("TOKEN_COMMA" , (yyvsp[-1].str))->addOthersChild((yyvsp[0].nonTerminal));}
#line 1477 "phase2.tab.c"
    break;

  case 30: /* type: TOKEN_INTTYPE  */
#line 223 "phase2.y"
                {(yyval.nonTerminal) = new tree("<type>" , "<type>"); (yyval.nonTerminal)->addChild("TOKEN_INTTYPE" , (yyvsp[0].str));}
#line 1483 "phase2.tab.c"
    break;

  case 31: /* type: TOKEN_BOOLEANTYPE  */
#line 224 "phase2.y"
                    {(yyval.nonTerminal) = new tree("<type>" , "<type>"); (yyval.nonTerminal)->addChild("TOKEN_BOOLEANTYPE" , (yyvsp[0].str));}
#line 1489 "phase2.tab.c"
    break;

  case 32: /* statements: %empty  */
#line 229 "phase2.y"
            {(yyval.nonTerminal) = new tree("<statements>" , "<statements>");}
#line 1495 "phase2.tab.c"
    break;

  case 33: /* statements: statement statements  */
#line 230 "phase2.y"
                       {(yyval.nonTerminal) = new tree("<statements>" , "<statements>"); (yyval.nonTerminal)->addChild((yyvsp[-1].nonTerminal))->addOthersChild((yyvsp[0].nonTerminal));}
#line 1501 "phase2.tab.c"
    break;

  case 34: /* statement: location assign_op expr TOKEN_SEMICOLON  */
#line 234 "phase2.y"
    {(yyval.nonTerminal) = new tree("<statement>" , "<statement>"); (yyval.nonTerminal)->addChild((yyvsp[-3].nonTerminal))->addChild((yyvsp[-2].nonTerminal))->addChild((yyvsp[-1].nonTerminal))->addChild("TOKEN_SEMICOLON" , (yyvsp[0].str));}
#line 1507 "phase2.tab.c"
    break;

  case 35: /* statement: method_call TOKEN_SEMICOLON  */
#line 237 "phase2.y"
    {(yyval.nonTerminal) = new tree("<statement>" , "<statement>"); (yyval.nonTerminal)->addChild((yyvsp[-1].nonTerminal))->addChild("TOKEN_SEMICOLON" , (yyvsp[0].str));}
#line 1513 "phase2.tab.c"
    break;

  case 36: /* statement: TOKEN_IFCONDITION TOKEN_LP expr TOKEN_RP block else_block  */
#line 239 "phase2.y"
    {(yyval.nonTerminal) = new tree("<statement>" , "<statement>"); (yyval.nonTerminal)->addChild("TOKEN_IFCONDITION" , (yyvsp[-5].str))->addChild("TOKEN_LP" , (yyvsp[-4].str))->addChild((yyvsp[-3].nonTerminal))->addChild("TOKEN_RP" , (yyvsp[-2].str))->addChild((yyvsp[-1].nonTerminal))->addOthersChild((yyvsp[0].nonTerminal));}
#line 1519 "phase2.tab.c"
    break;

  case 37: /* statement: TOKEN_LOOP id TOKEN_ASSIGNOP expr TOKEN_COMMA expr block  */
#line 242 "phase2.y"
    {(yyval.nonTerminal) = new tree("<statement>" , "<statement>"); (yyval.nonTerminal)->addChild("TOKEN_LOOP" , (yyvsp[-6].str))->addChild((yyvsp[-5].nonTerminal))->addChild("TOKEN_ASSIGNOP" , (yyvsp[-4].str))->addChild((yyvsp[-3].nonTerminal))->addChild("TOKEN_COMMA" , (yyvsp[-2].str))->addChild((yyvsp[-1].nonTerminal))->addChild((yyvsp[0].nonTerminal));}
#line 1525 "phase2.tab.c"
    break;

  case 38: /* statement: TOKEN_RETURN nexpr TOKEN_SEMICOLON  */
#line 244 "phase2.y"
                                     {(yyval.nonTerminal) = new tree("<statement>" , "<statement>"); (yyval.nonTerminal)->addChild("TOKEN_RETURN" , (yyvsp[-2].str))->addOthersChild((yyvsp[-1].nonTerminal))->addChild("TOKEN_SEMICOLON" , (yyvsp[0].str));}
#line 1531 "phase2.tab.c"
    break;

  case 39: /* statement: TOKEN_BREAKSTMT TOKEN_SEMICOLON  */
#line 246 "phase2.y"
                                  {(yyval.nonTerminal) = new tree("<statement>" , "<statement>"); (yyval.nonTerminal)->addChild("TOKEN_BREAKSTMT" , (yyvsp[-1].str))->addChild("TOKEN_SEMICOLON" , (yyvsp[0].str));}
#line 1537 "phase2.tab.c"
    break;

  case 40: /* statement: TOKEN_CONTINUESTMT TOKEN_SEMICOLON  */
#line 248 "phase2.y"
                                     {(yyval.nonTerminal) = new tree("<statement>" , "<statement>"); (yyval.nonTerminal)->addChild("TOKEN_CONTINUESTMT" , (yyvsp[-1].str))->addChild("TOKEN_SEMICOLON" , (yyvsp[0].str));}
#line 1543 "phase2.tab.c"
    break;

  case 41: /* statement: block  */
#line 250 "phase2.y"
        {(yyval.nonTerminal) = new tree("<statement>" , "<statement>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1549 "phase2.tab.c"
    break;

  case 42: /* nexpr: %empty  */
#line 253 "phase2.y"
       {(yyval.nonTerminal) = new tree("<nexpr>" , "<nexpr>");}
#line 1555 "phase2.tab.c"
    break;

  case 43: /* nexpr: expr  */
#line 254 "phase2.y"
       {(yyval.nonTerminal) = new tree("<nexpr>" , "<nexpr>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1561 "phase2.tab.c"
    break;

  case 44: /* else_block: %empty  */
#line 256 "phase2.y"
            {(yyval.nonTerminal) = new tree("<else_block>" , "<else_block>");}
#line 1567 "phase2.tab.c"
    break;

  case 45: /* else_block: TOKEN_ELSECONDITION block  */
#line 257 "phase2.y"
                            {(yyval.nonTerminal) = new tree("<else_block>" , "<else_block>"); (yyval.nonTerminal)->addChild("TOKEN_ELSECONDITION" , (yyvsp[-1].str))->addChild((yyvsp[0].nonTerminal));}
#line 1573 "phase2.tab.c"
    break;

  case 46: /* assign_op: TOKEN_ASSIGNOP  */
#line 262 "phase2.y"
                 {(yyval.nonTerminal) = new tree("<assign_op>" , "<assign_op>"); (yyval.nonTerminal)->addChild("TOKEN_ASSIGNOP" , (yyvsp[0].str));}
#line 1579 "phase2.tab.c"
    break;

  case 47: /* assign_op: TOKEN_MINUSASSIGNOP  */
#line 263 "phase2.y"
                      {(yyval.nonTerminal) = new tree("<assign_op>" , "<assign_op>"); (yyval.nonTerminal)->addChild("TOKEN_MINUSASSIGNOP" , (yyvsp[0].str));}
#line 1585 "phase2.tab.c"
    break;

  case 48: /* assign_op: TOKEN_PLUSASSIGNOP  */
#line 264 "phase2.y"
                     {(yyval.nonTerminal) = new tree("<assign_op>" , "<assign_op>"); (yyval.nonTerminal)->addChild("TOKEN_PLUSASSIGNOP" , (yyvsp[0].str));}
#line 1591 "phase2.tab.c"
    break;

  case 49: /* method_call: method_name TOKEN_LP exprs TOKEN_RP  */
#line 271 "phase2.y"
    {(yyval.nonTerminal) = new tree("<method_call>" , "<method_call>"); (yyval.nonTerminal)->addChild((yyvsp[-3].nonTerminal))->addChild("TOKEN_LP" , (yyvsp[-2].str))->addOthersChild((yyvsp[-1].nonTerminal))->addChild("TOKEN_RP" , (yyvsp[0].str));}
#line 1597 "phase2.tab.c"
    break;

  case 50: /* method_call: TOKEN_CALLOUT TOKEN_LP string_literal TOKEN_COMMA callout_args TOKEN_RP  */
#line 274 "phase2.y"
    {(yyval.nonTerminal) = new tree("<method_call>" , "<method_call>"); (yyval.nonTerminal)->addChild("TOKEN_CALLOUT" , (yyvsp[-5].str))->addChild("TOKEN_LP" , (yyvsp[-4].str))->addChild((yyvsp[-3].nonTerminal))->addChild("TOKEN_COMMA" , (yyvsp[-2].str))->addOthersChild((yyvsp[-1].nonTerminal))->addChild("TOKEN_RP" , (yyvsp[0].str));}
#line 1603 "phase2.tab.c"
    break;

  case 51: /* method_call: TOKEN_CALLOUT TOKEN_LP string_literal TOKEN_RP  */
#line 277 "phase2.y"
    {(yyval.nonTerminal) = new tree("<method_call>" , "<method_call>"); (yyval.nonTerminal)->addChild("TOKEN_CALLOUT" , (yyvsp[-3].str))->addChild("TOKEN_LP" , (yyvsp[-2].str))->addChild((yyvsp[-1].nonTerminal))->addChild("TOKEN_RP" , (yyvsp[0].str));}
#line 1609 "phase2.tab.c"
    break;

  case 52: /* method_name: id  */
#line 283 "phase2.y"
     {(yyval.nonTerminal) = new tree("<method_name>" , "<method_name>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1615 "phase2.tab.c"
    break;

  case 53: /* location: id  */
#line 288 "phase2.y"
      {(yyval.nonTerminal) = new tree("<location>" , "<location>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1621 "phase2.tab.c"
    break;

  case 54: /* location: id TOKEN_LB expr TOKEN_RB  */
#line 289 "phase2.y"
                            {(yyval.nonTerminal) = new tree("<location>" , "<location>"); (yyval.nonTerminal)->addChild((yyvsp[-3].nonTerminal))->addChild("TOKEN_LB" , (yyvsp[-2].str))->addChild((yyvsp[-1].nonTerminal))->addChild("TOKEN_RB" , (yyvsp[0].str));}
#line 1627 "phase2.tab.c"
    break;

  case 55: /* exprs: %empty  */
#line 293 "phase2.y"
       {(yyval.nonTerminal) = new tree("<exprs>" , "<exprs>");}
#line 1633 "phase2.tab.c"
    break;

  case 56: /* exprs: expr  */
#line 294 "phase2.y"
       {(yyval.nonTerminal) = new tree("<exprs>" , "<exprs>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1639 "phase2.tab.c"
    break;

  case 57: /* exprs: expr TOKEN_COMMA exprs  */
#line 295 "phase2.y"
                         {(yyval.nonTerminal) = new tree("<exprs>" , "<exprs>"); (yyval.nonTerminal)->addChild((yyvsp[-2].nonTerminal))->addChild("TOKEN_COMMA" , (yyvsp[-1].str))->addOthersChild((yyvsp[0].nonTerminal));}
#line 1645 "phase2.tab.c"
    break;

  case 58: /* expr: expr bin_op expr1  */
#line 298 "phase2.y"
                    {(yyval.nonTerminal) = new tree("<expr>" , "<expr>"); (yyval.nonTerminal)->addChild((yyvsp[-2].nonTerminal))->addChild((yyvsp[-1].nonTerminal))->addChild((yyvsp[0].nonTerminal));}
#line 1651 "phase2.tab.c"
    break;

  case 59: /* expr: expr1  */
#line 299 "phase2.y"
        {(yyval.nonTerminal) = new tree("<expr>" , "<expr>"); (yyval.nonTerminal)->addOthersChild((yyvsp[0].nonTerminal));}
#line 1657 "phase2.tab.c"
    break;

  case 60: /* expr1: location  */
#line 302 "phase2.y"
           {(yyval.nonTerminal) = new tree("<expr>" , "<expr>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1663 "phase2.tab.c"
    break;

  case 61: /* expr1: method_call  */
#line 303 "phase2.y"
              {(yyval.nonTerminal) = new tree("<expr>" , "<expr>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1669 "phase2.tab.c"
    break;

  case 62: /* expr1: literal  */
#line 304 "phase2.y"
          {(yyval.nonTerminal) = new tree("<expr>" , "<expr>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1675 "phase2.tab.c"
    break;

  case 63: /* expr1: TOKEN_MINUSOP expr1  */
#line 305 "phase2.y"
                      {(yyval.nonTerminal) = new tree("<expr>" , "<expr>"); (yyval.nonTerminal)->addChild("TOKEN_MiNUSOP" , (yyvsp[-1].str))->addChild((yyvsp[0].nonTerminal));}
#line 1681 "phase2.tab.c"
    break;

  case 64: /* expr1: TOKEN_LOGICOP expr1  */
#line 306 "phase2.y"
                      {(yyval.nonTerminal) = new tree("<expr>" , "<expr>"); (yyval.nonTerminal)->addChild("TOKEN_LOGICOP" , (yyvsp[-1].str))->addChild((yyvsp[0].nonTerminal));}
#line 1687 "phase2.tab.c"
    break;

  case 65: /* expr1: TOKEN_LP expr TOKEN_RP  */
#line 307 "phase2.y"
                         {(yyval.nonTerminal) = new tree("<expr>" , "<expr>"); (yyval.nonTerminal)->addChild("TOKEN_LP" , (yyvsp[-2].str))->addChild((yyvsp[-1].nonTerminal))->addChild("TOKEN_RP" , (yyvsp[0].str));}
#line 1693 "phase2.tab.c"
    break;

  case 66: /* callout_args: %empty  */
#line 312 "phase2.y"
              {(yyval.nonTerminal) = new tree("<callout_args>" , "<callout_args>");}
#line 1699 "phase2.tab.c"
    break;

  case 67: /* callout_args: callout_arg  */
#line 313 "phase2.y"
              {(yyval.nonTerminal) = new tree("<callout_args>" , "<callout_args>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1705 "phase2.tab.c"
    break;

  case 68: /* callout_args: callout_arg TOKEN_COMMA callout_args  */
#line 315 "phase2.y"
    {(yyval.nonTerminal) = new tree("<callout_args>" , "<callout_args>"); (yyval.nonTerminal)->addChild((yyvsp[-2].nonTerminal))->addChild("TOKEN_COMMA" , (yyvsp[-1].str))->addOthersChild((yyvsp[0].nonTerminal));}
#line 1711 "phase2.tab.c"
    break;

  case 69: /* callout_arg: expr  */
#line 318 "phase2.y"
       {(yyval.nonTerminal) = new tree("<callout_arg>" , "<callout_arg>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1717 "phase2.tab.c"
    break;

  case 70: /* callout_arg: string_literal  */
#line 319 "phase2.y"
                 {(yyval.nonTerminal) = new tree("<callout_arg>" , "<callout_arg>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1723 "phase2.tab.c"
    break;

  case 71: /* bin_op: arith_op  */
#line 325 "phase2.y"
           {(yyval.nonTerminal) = new tree("<bin_op>" , "<bin_op>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1729 "phase2.tab.c"
    break;

  case 72: /* bin_op: rel_op  */
#line 326 "phase2.y"
         {(yyval.nonTerminal) = new tree("<bin_op>" , "<bin_op>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1735 "phase2.tab.c"
    break;

  case 73: /* bin_op: eq_op  */
#line 327 "phase2.y"
        {(yyval.nonTerminal) = new tree("<bin_op>" , "<bin_op>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1741 "phase2.tab.c"
    break;

  case 74: /* bin_op: cond_op  */
#line 328 "phase2.y"
         {(yyval.nonTerminal) = new tree("<bin_op>" , "<bin_op>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1747 "phase2.tab.c"
    break;

  case 75: /* arith_op: TOKEN_MODULSOP  */
#line 333 "phase2.y"
                 {(yyval.nonTerminal) = new tree("<arith_op>" , "<arith_op>"); (yyval.nonTerminal)->addChild("TOKEN_MODULSOP" , (yyvsp[0].str));}
#line 1753 "phase2.tab.c"
    break;

  case 76: /* arith_op: TOKEN_DIVISIONOP  */
#line 334 "phase2.y"
                   {(yyval.nonTerminal) = new tree("<arith_op>" , "<arith_op>"); (yyval.nonTerminal)->addChild("TOKEN_DIVISIONOP" , (yyvsp[0].str));}
#line 1759 "phase2.tab.c"
    break;

  case 77: /* arith_op: TOKEN_MULTIPLEOP  */
#line 335 "phase2.y"
                   {(yyval.nonTerminal) = new tree("<arith_op>" , "<arith_op>"); (yyval.nonTerminal)->addChild("TOKEN_MULTIPLEOP" , (yyvsp[0].str));}
#line 1765 "phase2.tab.c"
    break;

  case 78: /* arith_op: TOKEN_MINUSOP  */
#line 336 "phase2.y"
                {(yyval.nonTerminal) = new tree("<arith_op>" , "<arith_op>"); (yyval.nonTerminal)->addChild("TOKEN_MINUSOP" , (yyvsp[0].str));}
#line 1771 "phase2.tab.c"
    break;

  case 79: /* arith_op: TOKEN_PLUSOP  */
#line 337 "phase2.y"
               {(yyval.nonTerminal) = new tree("<arith_op>" , "<arith_op>"); (yyval.nonTerminal)->addChild("TOKEN_PLUSOP" , (yyvsp[0].str));}
#line 1777 "phase2.tab.c"
    break;

  case 80: /* rel_op: TOKEN_RELATIONOP  */
#line 343 "phase2.y"
                   {(yyval.nonTerminal) = new tree("<rel_op>" , "<rel_op>"); (yyval.nonTerminal)->addChild("TOKEN_RELATIONOP" , (yyvsp[0].str));}
#line 1783 "phase2.tab.c"
    break;

  case 81: /* eq_op: TOKEN_EQUALITYOP  */
#line 348 "phase2.y"
                   {(yyval.nonTerminal) = new tree("<eq_op>" , "<eq_op>"); (yyval.nonTerminal)->addChild("TOKEN_EQUALITYOP" , (yyvsp[0].str));}
#line 1789 "phase2.tab.c"
    break;

  case 82: /* cond_op: TOKEN_CONDITIONOP  */
#line 353 "phase2.y"
                    {(yyval.nonTerminal) = new tree("<cond_op>" , "<cond_op>"); (yyval.nonTerminal)->addChild("TOKEN_CONDITIONOP" , (yyvsp[0].str));}
#line 1795 "phase2.tab.c"
    break;

  case 83: /* literal: int_literal  */
#line 358 "phase2.y"
              {(yyval.nonTerminal) = new tree("<literal>" , "<literal>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1801 "phase2.tab.c"
    break;

  case 84: /* literal: char_literal  */
#line 359 "phase2.y"
               {(yyval.nonTerminal) = new tree("<literal>" , "<literal>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1807 "phase2.tab.c"
    break;

  case 85: /* literal: bool_literal  */
#line 360 "phase2.y"
               {(yyval.nonTerminal) = new tree("<literal>" , "<literal>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1813 "phase2.tab.c"
    break;

  case 86: /* id: TOKEN_ID  */
#line 365 "phase2.y"
           {(yyval.nonTerminal) = new tree("<id>" , "<id>"); (yyval.nonTerminal)->addChild("TOKEN_ID" , (yyvsp[0].str));}
#line 1819 "phase2.tab.c"
    break;

  case 87: /* int_literal: deciamla_literal  */
#line 369 "phase2.y"
                   {(yyval.nonTerminal) = new tree("<int_literal>" , "<int_literal>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1825 "phase2.tab.c"
    break;

  case 88: /* int_literal: hex_literal  */
#line 370 "phase2.y"
              {(yyval.nonTerminal) = new tree("<int_literal>" , "<int_literal>"); (yyval.nonTerminal)->addChild((yyvsp[0].nonTerminal));}
#line 1831 "phase2.tab.c"
    break;

  case 89: /* deciamla_literal: TOKEN_DECIMALCONST  */
#line 374 "phase2.y"
                     {(yyval.nonTerminal) = new tree("<decimal_literal>" , "<decimal_literal>"); (yyval.nonTerminal)->addChild("<TOKEN_DECIMALCONST>" , (yyvsp[0].str));}
#line 1837 "phase2.tab.c"
    break;

  case 90: /* hex_literal: TOKEN_HEXADECIMALCONST  */
#line 378 "phase2.y"
                         {(yyval.nonTerminal) = new tree("<hex_literal>" , "<string_literal>"); (yyval.nonTerminal)->addChild("TOKEN_HEXADECIMALCONST" , (yyvsp[0].str));}
#line 1843 "phase2.tab.c"
    break;

  case 91: /* bool_literal: TOKEN_BOOLEANCONST  */
#line 382 "phase2.y"
                     {(yyval.nonTerminal) = new tree("<string_literal>" , "<string_literal>"); (yyval.nonTerminal)->addChild("TOKEN_BOOLEANCONST" , (yyvsp[0].str));}
#line 1849 "phase2.tab.c"
    break;

  case 92: /* char_literal: TOKEN_CHARCONST  */
#line 386 "phase2.y"
                  {(yyval.nonTerminal) = new tree("<char_literal>" , "<char_literal>"); (yyval.nonTerminal)->addChild("TOKEN_CHARCONST" , (yyvsp[0].str));}
#line 1855 "phase2.tab.c"
    break;

  case 93: /* string_literal: TOKEN_STRINGCONST  */
#line 390 "phase2.y"
                    {(yyval.nonTerminal) = new tree("<string_literal>" , "<string_literal>"); (yyval.nonTerminal)->addChild("TOKEN_STRINGCONST" , (yyvsp[0].str));}
#line 1861 "phase2.tab.c"
    break;


#line 1865 "phase2.tab.c"

      default: break;
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
      yyerror (YY_("syntax error"));
    }

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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 391 "phase2.y"



int main(int argc, char **argv){
  input = atol(argv[1]);

  FILE * fr = fopen("input.xlang" , "r");
  yyin = fr;
  yyparse();

  preorderTraversal(atol(argv[1]) , root);
  cout << endl;
}

void yyerror(const char *s){
  printf("%s in line %d\n", s , yylineno);
  exit(-1);
}
