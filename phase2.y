%{
  #include <iostream>
  using namespace std;

  extern int yylex();
  extern int yyparse();

  void yyerror(const char *s);
%}

%token T_BOOLEANTYPE
       T_BREAKSTMT
       T_CALLOUT
       T_CLASS
       T_CONTINUESTMT
       T_ELSECONDITION
       T_BOOLEANCONST
       T_LOOP
       T_IFCONDITION
       T_INTTYPE
       T_RETURN
       T_VOIDTYPE
       T_PROGRAMCLASS
       T_MAINFUNC
       T_ID
       T_ASSIGNOP
       T_MINUSASSIGNOP
       T_PLUSASSIGNOP
       T_LOGICOP
       T_EQUALITYOP
       T_RELATIONOP
       T_CONDITIONOP
       T_MODULSOP
       T_DIVISIONOP
       T_MULTIPLEOP
       T_MINUSOP
       T_PLUSOP
       T_LCB
       T_RCB
       T_LB
       T_RB
       T_LP
       T_RP
       T_SEMICOLON
       T_COMMA
       T_CHARCONST
       T_STRINGCONST
       T_HEXADECIMALCONST
       T_DECIMALCONST


%%
//program
program:  T_CLASS T_PROGRAMCLASS T_LCB field_decls method_decls T_RCB;

//field decleration
field_decls : | field_decl field_decls;
field_decl : type variables T_SEMICOLON;
variables : variable | variable T_COMMA variables;
variable :  id | id T_LB int_literal T_RB;


//method decleration
method_decls : | method_decl method_decls;
method_decl : method_type method_namee T_LP args T_RP block;
method_type : type | T_VOIDTYPE;
method_namee : T_MAINFUNC | id; 
args : | arg ',' args;
arg : type id;


//block
block: T_LCB var_decls statements T_RCB;


//variable declerations
var_decls: | var_decl var_decls;
var_decl: type ids T_SEMICOLON;
ids: id | id T_COMMA ids;

//type
type: T_INTTYPE | T_BOOLEANTYPE;


//statement
statements: | statement statements;
statement: location assign_op expr T_SEMICOLON |
           method_call T_SEMICOLON |
           T_IFCONDITION T_LP expr T_RP block else_block |
           T_LOOP id T_ASSIGNOP expr T_COMMA expr block |
           T_RETURN nexpr T_SEMICOLON |
           T_BREAKSTMT T_SEMICOLON |
           T_CONTINUESTMT T_SEMICOLON |
           block;
nexpr: | expr;
else_block: T_ELSECONDITION block;


//assign operators
assign_op: T_ASSIGNOP | T_MINUSASSIGNOP | T_PLUSASSIGNOP;


//method call
method_call: method_name T_LP exprs T_RP | T_CALLOUT T_LP string_literal callout_args T_RP;


//method name
method_name: id;


//location
location: id | id T_LB expr T_RB;


//expressions
exprs: | expr T_COMMA exprs;
expr: expr bin_op expr1 | expr1;
expr1:  location |
        method_call |
        literal |
        T_MINUSOP expr1 |
        T_LOGICOP expr1 |
        T_LP expr T_RP;


//callout arguments
callout_args: expr | string_literal;


//binary operator
bin_op: arith_op | rel_op | eq_op | cond_op;


//arithmetic operator
arith_op: T_MODULSOP | T_DIVISIONOP | T_MULTIPLEOP | T_MINUSOP | T_PLUSOP;



//relation operator
rel_op: T_RELATIONOP;


//equality operator
eq_op: T_EQUALITYOP;


//conditional operator
cond_op: T_CONDITIONOP;


//literal
literal: int_literal | char_literal | bool_literal;


//id
id: T_ID;


//int literal
int_literal: deciamla_literal | hex_literal;


//decimal literal
deciamla_literal: T_DECIMALCONST;


//hex_literal
hex_literal: T_HEXADECIMALCONST;


//bool literal
bool_literal: T_BOOLEANCONST;


//char_literal
char_literal: T_CHARCONST;


//string literal
string_literal: T_STRINGCONST;
%%


int main(int argc, char **argv){
  FILE * fr = fopen(argv[1] , "r");
  yyin = fr;
  yyparse();
}

void yyerror(const char *s){
  printf("%d: %s\n", yylineno , s);
}