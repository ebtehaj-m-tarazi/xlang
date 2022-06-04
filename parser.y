%{
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
%}


%union{
  char *str;
  tree* nonTerminal;
}

%token<str> TOKEN_BOOLEANTYPE
%token<str> TOKEN_BREAKSTMT
%token<str> TOKEN_CALLOUT
%token<str> TOKEN_CLASS
%token<str> TOKEN_CONTINUESTMT
%token<str> TOKEN_ELSECONDITION
%token<str> TOKEN_BOOLEANCONST
%token<str> TOKEN_LOOP
%token<str> TOKEN_IFCONDITION
%token<str> TOKEN_INTTYPE
%token<str> TOKEN_RETURN
%token<str> TOKEN_VOIDTYPE
%token<str> TOKEN_PROGRAMCLASS
%token<str> TOKEN_MAINFUNC
%token<str> TOKEN_ID
%token<str> TOKEN_ASSIGNOP
%token<str> TOKEN_MINUSASSIGNOP
%token<str> TOKEN_PLUSASSIGNOP
%token<str> TOKEN_LOGICOP
%token<str> TOKEN_EQUALITYOP
%token<str> TOKEN_RELATIONOP
%token<str> TOKEN_CONDITIONOP
%token<str> TOKEN_MODULSOP
%token<str> TOKEN_DIVISIONOP
%token<str> TOKEN_MULTIPLEOP
%token<str> TOKEN_MINUSOP
%token<str> TOKEN_PLUSOP
%token<str> TOKEN_LCB
%token<str> TOKEN_RCB
%token<str> TOKEN_LB
%token<str> TOKEN_RB
%token<str> TOKEN_LP
%token<str> TOKEN_RP
%token<str> TOKEN_SEMICOLON
%token<str> TOKEN_COMMA
%token<str> TOKEN_CHARCONST
%token<str> TOKEN_STRINGCONST
%token<str> TOKEN_HEXADECIMALCONST
%token<str> TOKEN_DECIMALCONST


%type<nonTerminal> block
%type<nonTerminal>int_literal 
%type<nonTerminal>literal
%type<nonTerminal>callout_args
%type<nonTerminal>callout_arg
%type<nonTerminal>bin_op
%type<nonTerminal>location
%type<nonTerminal>exprs
%type<nonTerminal>expr
%type<nonTerminal>expr1
%type<nonTerminal>method_call
%type<nonTerminal>method_name
%type<nonTerminal>else_block
%type<nonTerminal>nexpr
%type<nonTerminal>statements
%type<nonTerminal>statement
%type<nonTerminal>var_decls
%type<nonTerminal>var_decl
%type<nonTerminal>ids
%type<nonTerminal>method_decls
%type<nonTerminal>method_decl
%type<nonTerminal>method_type
%type<nonTerminal>args
%type<nonTerminal>arg
%type<nonTerminal>variables
%type<nonTerminal>variable
%type<nonTerminal>field_decl
%type<nonTerminal>program
%type<nonTerminal>decl_list
%type<nonTerminal>id 
%type<nonTerminal>deciamla_literal 
%type<nonTerminal>hex_literal
%type<nonTerminal>bool_literal 
%type<nonTerminal>char_literal
%type<nonTerminal>string_literal
%type<nonTerminal>rel_op
%type<nonTerminal>eq_op
%type<nonTerminal>cond_op
%type<nonTerminal>arith_op
%type<nonTerminal>assign_op
%type<nonTerminal>type
%type<nonTerminal>method_decls1
%type<nonTerminal>main_decl






%%
/*============================program============================*/
program:  
  TOKEN_CLASS TOKEN_PROGRAMCLASS TOKEN_LCB decl_list TOKEN_RCB {$$ = new tree("<program>" , "<program>"); $$->addChild("TOKEN_CLASS" , $1)->addChild("TOKEN_PROGRAMCLASS" , $2)->addChild("TOKEN_LCB" , $3)->addOthersChild($4)->addChild("TOKEN_RCB" , $5);
  root = $$;};
  

decl_list: 
  field_decl decl_list {$$ = new tree("<decl_list>" , "<decl_list>"); $$->addChild($1)->addOthersChild($2);} |

  TOKEN_VOIDTYPE id TOKEN_LP args TOKEN_RP block method_decls1
    {$$ = new tree("<decl_list>" , "<decl_list>");
    tree* temp = new tree("<method_decl>" ,  "<method_decl>");
    temp->addChild("TOKEN_VOIDTYPE" , $1)->addChild($2)->addChild("TOKEN_LP" , $3)->addOthersChild($4)->addChild("TOKEN_RP" , $5)->addChild($6);
    $$->addChild(temp)->addOthersChild($7);} | 
   
  type id TOKEN_LP args TOKEN_RP block method_decls1
    {$$ = new tree("<decl_list>" , "<decl_list>");
    tree* temp = new tree("<method_decl>" ,  "<method_decl>");
    temp->addChild($1)->addChild($2)->addChild("TOKEN_LP" , $3)->addOthersChild($4)->addChild("TOKEN_RP" , $5)->addChild($6);
    $$->addChild(temp)->addOthersChild($7);} | 

  main_decl method_decls 
    {$$ = new tree("<decl_list>" , "<decl_list>");
    tree* temp = new tree("<method_decl>" ,  "<method_decl>");
    temp->addOthersChild($1);
    $$->addChild(temp)->addOthersChild($2);};




/*============================field decleration============================*/
field_decl : 
  type variables TOKEN_SEMICOLON 
    {$$ = new tree("<field_decl>" , "<field_decl>"); $$->addChild($1)->addOthersChild($2)->addChild("TOKEN_SEMICOLON" , $3);};


variables : 
  variable 
    {$$ = new tree("<variables>" , "<variables>"); $$->addOthersChild($1);} |

  variable TOKEN_COMMA variables 
    {$$ = new tree("<variables>" , "<variables>"); $$->addOthersChild($1)->addChild("TOKEN_COMMA" , $2)->addOthersChild($3);};


variable :  
  id 
    {$$ = new tree("<variable>" , "<variable>"); $$->addChild($1);} | 

  id TOKEN_LB int_literal TOKEN_RB 
    {$$ = new tree("<variable>" , "<variable>"); $$->addChild($1)->addChild("TOKEN_LB" , $2)->addChild($3)->addChild("TOKEN_RB" , $4);};





/*============================method decleration============================*/
method_decls : {$$ = new tree("<method_decls>" , "<method_decls>");} | 
  method_decl method_decls
    {$$ = new tree("<method_decls>" , "<method_decls>"); $$->addChild($1)->addOthersChild($2);};

method_decls1:
  method_decl method_decls1 
    {$$ = new tree("<method_decls1>" , "<method_decls1>"); $$->addChild($1)->addOthersChild($2);} |
  main_decl method_decls
    {$$ = new tree("<method_decls1>" , "<method_decls1>"); $$->addOthersChild($1)->addOthersChild($2);};

method_decl : 
  method_type id TOKEN_LP args TOKEN_RP block 
    {$$ = new tree("<method_decl>" , "<method_decl>"); $$->addOthersChild($1)->addChild($2)->addChild("TOKEN_LP" , $3)->addOthersChild($4)->addChild("TOKEN_RP" , $5)->addChild($6);};

main_decl:
  TOKEN_VOIDTYPE TOKEN_MAINFUNC TOKEN_LP TOKEN_RP block
    {$$ = new tree("<main_decls1>" , "<main_decls1>"); $$->addChild("TOKEN_VOIDTYPE" , $1)->addChild("TOKEN_MAINFUNC" , $2)->addChild("TOKEN_LP" , $3)->addChild("TOKEN_RP" , $4)->addChild($5);};

method_type : 
  type {$$ = new tree("<method_type>" , "<method_type>"); $$->addChild($1);} |
  TOKEN_VOIDTYPE {$$ = new tree("<method_type>" , "<method_type>"); $$->addChild("TOKEN_VOIDTYPE" , $1);};

args : {$$ = new tree("<args>" , "<args>");} |
  arg {$$ = new tree("<args>" , "<args>"); $$->addOthersChild($1);} |
  arg TOKEN_COMMA args {$$ = new tree("<args>" , "<args>"); $$->addOthersChild($1)->addChild("TOKEN_COMMA" , $2)->addOthersChild($3);};


arg : 
  type id {$$ = new tree("<arg>" , "<arg>"); $$->addChild($1)->addChild($2);};


/*============================block============================*/
block: TOKEN_LCB var_decls statements TOKEN_RCB
  {$$ = new tree("<block>" , "<block>"); $$->addChild("TOKEN_LCB" , $1)->addOthersChild($2)->addOthersChild($3)->addChild("TOKEN_RCB" , $4);};


/*============================variable decleration============================*/
var_decls: {$$ = new tree("<var_decls>" , "<var_decls>");} | 
  var_decl var_decls {$$ = new tree("<var_decls>" , "<var_decls>"); $$->addChild($1)->addOthersChild($2);};

var_decl: 
  type ids TOKEN_SEMICOLON {$$ = new tree("<var_decl>" , "<var_decl>"); $$->addChild($1)->addOthersChild($2)->addChild("TOKEN_SEMICOLON" , $3);};

ids: 
  id  {$$ = new tree("<ids>" , "<ids>"); $$->addChild($1);} | 
  id TOKEN_COMMA ids {$$ = new tree("<ids>" , "<ids>"); $$->addChild($1)->addChild("TOKEN_COMMA" , $2)->addOthersChild($3);};



/*============================type============================*/
type: 
  TOKEN_INTTYPE {$$ = new tree("<type>" , "<type>"); $$->addChild("TOKEN_INTTYPE" , $1);}| 
  TOKEN_BOOLEANTYPE {$$ = new tree("<type>" , "<type>"); $$->addChild("TOKEN_BOOLEANTYPE" , $1);};



/*============================statement============================*/
statements: {$$ = new tree("<statements>" , "<statements>");} | 
  statement statements {$$ = new tree("<statements>" , "<statements>"); $$->addChild($1)->addOthersChild($2);};

statement: 
  location assign_op expr TOKEN_SEMICOLON 
    {$$ = new tree("<statement>" , "<statement>"); $$->addChild($1)->addChild($2)->addChild($3)->addChild("TOKEN_SEMICOLON" , $4);}|
  
  method_call TOKEN_SEMICOLON 
    {$$ = new tree("<statement>" , "<statement>"); $$->addChild($1)->addChild("TOKEN_SEMICOLON" , $2);} |
  TOKEN_IFCONDITION TOKEN_LP expr TOKEN_RP block else_block 
    {$$ = new tree("<statement>" , "<statement>"); $$->addChild("TOKEN_IFCONDITION" , $1)->addChild("TOKEN_LP" , $2)->addChild($3)->addChild("TOKEN_RP" , $4)->addChild($5)->addOthersChild($6);} |
  
  TOKEN_LOOP id TOKEN_ASSIGNOP expr TOKEN_COMMA expr block 
    {$$ = new tree("<statement>" , "<statement>"); $$->addChild("TOKEN_LOOP" , $1)->addChild($2)->addChild("TOKEN_ASSIGNOP" , $3)->addChild($4)->addChild("TOKEN_COMMA" , $5)->addChild($6)->addChild($7);}|
  
  TOKEN_RETURN nexpr TOKEN_SEMICOLON {$$ = new tree("<statement>" , "<statement>"); $$->addChild("TOKEN_RETURN" , $1)->addOthersChild($2)->addChild("TOKEN_SEMICOLON" , $3);} |
  
  TOKEN_BREAKSTMT TOKEN_SEMICOLON {$$ = new tree("<statement>" , "<statement>"); $$->addChild("TOKEN_BREAKSTMT" , $1)->addChild("TOKEN_SEMICOLON" , $2);} |
  
  TOKEN_CONTINUESTMT TOKEN_SEMICOLON {$$ = new tree("<statement>" , "<statement>"); $$->addChild("TOKEN_CONTINUESTMT" , $1)->addChild("TOKEN_SEMICOLON" , $2);} |
  
  block {$$ = new tree("<statement>" , "<statement>"); $$->addChild($1);};


nexpr: {$$ = new tree("<nexpr>" , "<nexpr>");} | 
  expr {$$ = new tree("<nexpr>" , "<nexpr>"); $$->addChild($1);};

else_block: {$$ = new tree("<else_block>" , "<else_block>");} |  
  TOKEN_ELSECONDITION block {$$ = new tree("<else_block>" , "<else_block>"); $$->addChild("TOKEN_ELSECONDITION" , $1)->addChild($2);};


/*============================assignment operator============================*/
assign_op: 
  TOKEN_ASSIGNOP {$$ = new tree("<assign_op>" , "<assign_op>"); $$->addChild("TOKEN_ASSIGNOP" , $1);} | 
  TOKEN_MINUSASSIGNOP {$$ = new tree("<assign_op>" , "<assign_op>"); $$->addChild("TOKEN_MINUSASSIGNOP" , $1);} | 
  TOKEN_PLUSASSIGNOP {$$ = new tree("<assign_op>" , "<assign_op>"); $$->addChild("TOKEN_PLUSASSIGNOP" , $1);};



//method call
method_call: 
  method_name TOKEN_LP exprs TOKEN_RP 
    {$$ = new tree("<method_call>" , "<method_call>"); $$->addChild($1)->addChild("TOKEN_LP" , $2)->addOthersChild($3)->addChild("TOKEN_RP" , $4);} | 
  
  TOKEN_CALLOUT TOKEN_LP string_literal TOKEN_COMMA callout_args TOKEN_RP 
    {$$ = new tree("<method_call>" , "<method_call>"); $$->addChild("TOKEN_CALLOUT" , $1)->addChild("TOKEN_LP" , $2)->addChild($3)->addChild("TOKEN_COMMA" , $4)->addOthersChild($5)->addChild("TOKEN_RP" , $6);} | 
  
  TOKEN_CALLOUT TOKEN_LP string_literal TOKEN_RP 
    {$$ = new tree("<method_call>" , "<method_call>"); $$->addChild("TOKEN_CALLOUT" , $1)->addChild("TOKEN_LP" , $2)->addChild($3)->addChild("TOKEN_RP" , $4);}; 



/*============================method name============================*/
method_name: 
  id {$$ = new tree("<method_name>" , "<method_name>"); $$->addChild($1);};


/*============================location============================*/
location: 
  id  {$$ = new tree("<location>" , "<location>"); $$->addChild($1);} | 
  id TOKEN_LB expr TOKEN_RB {$$ = new tree("<location>" , "<location>"); $$->addChild($1)->addChild("TOKEN_LB" , $2)->addChild($3)->addChild("TOKEN_RB" , $4);};


/*============================expression============================*/
exprs: {$$ = new tree("<exprs>" , "<exprs>");} | 
  expr {$$ = new tree("<exprs>" , "<exprs>"); $$->addChild($1);} |
  expr TOKEN_COMMA exprs {$$ = new tree("<exprs>" , "<exprs>"); $$->addChild($1)->addChild("TOKEN_COMMA" , $2)->addOthersChild($3);};

expr: 
  expr bin_op expr1 {$$ = new tree("<expr>" , "<expr>"); $$->addChild($1)->addChild($2)->addChild($3);} | 
  expr1 {$$ = new tree("<expr>" , "<expr>"); $$->addOthersChild($1);};

expr1:  
  location {$$ = new tree("<expr>" , "<expr>"); $$->addChild($1);} |
  method_call {$$ = new tree("<expr>" , "<expr>"); $$->addChild($1);} |
  literal {$$ = new tree("<expr>" , "<expr>"); $$->addChild($1);} |
  TOKEN_MINUSOP expr1 {$$ = new tree("<expr>" , "<expr>"); $$->addChild("TOKEN_MiNUSOP" , $1)->addChild($2);} |
  TOKEN_LOGICOP expr1 {$$ = new tree("<expr>" , "<expr>"); $$->addChild("TOKEN_LOGICOP" , $1)->addChild($2);} |
  TOKEN_LP expr TOKEN_RP {$$ = new tree("<expr>" , "<expr>"); $$->addChild("TOKEN_LP" , $1)->addChild($2)->addChild("TOKEN_RP" , $3);};



/*============================callout argument============================*/
callout_args: {$$ = new tree("<callout_args>" , "<callout_args>");} |
  callout_arg {$$ = new tree("<callout_args>" , "<callout_args>"); $$->addChild($1);} |
  callout_arg TOKEN_COMMA callout_args 
    {$$ = new tree("<callout_args>" , "<callout_args>"); $$->addChild($1)->addChild("TOKEN_COMMA" , $2)->addOthersChild($3);};

callout_arg: 
  expr {$$ = new tree("<callout_arg>" , "<callout_arg>"); $$->addChild($1);} | 
  string_literal {$$ = new tree("<callout_arg>" , "<callout_arg>"); $$->addChild($1);};



/*============================binary operator============================*/
bin_op: 
  arith_op {$$ = new tree("<bin_op>" , "<bin_op>"); $$->addChild($1);} | 
  rel_op {$$ = new tree("<bin_op>" , "<bin_op>"); $$->addChild($1);} | 
  eq_op {$$ = new tree("<bin_op>" , "<bin_op>"); $$->addChild($1);} | 
  cond_op{$$ = new tree("<bin_op>" , "<bin_op>"); $$->addChild($1);};


/*============================arithmetic operator============================*/
arith_op: 
  TOKEN_MODULSOP {$$ = new tree("<arith_op>" , "<arith_op>"); $$->addChild("TOKEN_MODULSOP" , $1);} | 
  TOKEN_DIVISIONOP {$$ = new tree("<arith_op>" , "<arith_op>"); $$->addChild("TOKEN_DIVISIONOP" , $1);} | 
  TOKEN_MULTIPLEOP {$$ = new tree("<arith_op>" , "<arith_op>"); $$->addChild("TOKEN_MULTIPLEOP" , $1);} | 
  TOKEN_MINUSOP {$$ = new tree("<arith_op>" , "<arith_op>"); $$->addChild("TOKEN_MINUSOP" , $1);} | 
  TOKEN_PLUSOP {$$ = new tree("<arith_op>" , "<arith_op>"); $$->addChild("TOKEN_PLUSOP" , $1);};



/*============================relation operator============================*/
rel_op: 
  TOKEN_RELATIONOP {$$ = new tree("<rel_op>" , "<rel_op>"); $$->addChild("TOKEN_RELATIONOP" , $1);};


/*============================equality operator============================*/
eq_op: 
  TOKEN_EQUALITYOP {$$ = new tree("<eq_op>" , "<eq_op>"); $$->addChild("TOKEN_EQUALITYOP" , $1);};


/*============================conditional operator============================*/
cond_op: 
  TOKEN_CONDITIONOP {$$ = new tree("<cond_op>" , "<cond_op>"); $$->addChild("TOKEN_CONDITIONOP" , $1);};


/*============================literal============================*/
literal: 
  int_literal {$$ = new tree("<literal>" , "<literal>"); $$->addChild($1);} | 
  char_literal {$$ = new tree("<literal>" , "<literal>"); $$->addChild($1);} | 
  bool_literal {$$ = new tree("<literal>" , "<literal>"); $$->addChild($1);};


/*============================id============================*/
id: 
  TOKEN_ID {$$ = new tree("<id>" , "<id>"); $$->addChild("TOKEN_ID" , $1);};

/*============================int literal============================*/
int_literal: 
  deciamla_literal {$$ = new tree("<int_literal>" , "<int_literal>"); $$->addChild($1);}| 
  hex_literal {$$ = new tree("<int_literal>" , "<int_literal>"); $$->addChild($1);};

/*============================program============================*/
deciamla_literal: 
  TOKEN_DECIMALCONST {$$ = new tree("<decimal_literal>" , "<decimal_literal>"); $$->addChild("<TOKEN_DECIMALCONST>" , $1);};

/*============================hex literal============================*/
hex_literal: 
  TOKEN_HEXADECIMALCONST {$$ = new tree("<hex_literal>" , "<string_literal>"); $$->addChild("TOKEN_HEXADECIMALCONST" , $1);};

/*============================bool literal============================*/
bool_literal: 
  TOKEN_BOOLEANCONST {$$ = new tree("<string_literal>" , "<string_literal>"); $$->addChild("TOKEN_BOOLEANCONST" , $1);};

/*============================char literal============================*/
char_literal: 
  TOKEN_CHARCONST {$$ = new tree("<char_literal>" , "<char_literal>"); $$->addChild("TOKEN_CHARCONST" , $1);};

/*============================string literal============================*/
string_literal: 
  TOKEN_STRINGCONST {$$ = new tree("<string_literal>" , "<string_literal>"); $$->addChild("TOKEN_STRINGCONST" , $1);};
%%


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
