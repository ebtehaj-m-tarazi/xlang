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
  node *root;
%}


%union{
  char *str;
  long long int number;
  tree* nonTerminal;
  node* terminal;
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
%type<nonTerminal>inTOKEN_literal 
%type<nonTerminal>literal
%type<nonTerminal>callouTOKEN_args
%type<nonTerminal>callouTOKEN_arg
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
%type<nonTerminal>method_namee
%type<nonTerminal>args
%type<nonTerminal>arg
%type<nonTerminal>variables
%type<nonTerminal>variable
%type<nonTerminal>field_decl
%type<nonTerminal>program
%type<nonTerminal>decl_list

%type<terminal>id 
%type<terminal>deciamla_literal 
%type<terminal>hex_literal
%type<terminal>bool_literal 
%type<terminal>char_literal
%type<terminal>string_literal
%type<terminal>rel_op
%type<terminal>eq_op
%type<terminal>cond_op
%type<terminal>arith_op
%type<terminal>assign_op
%type<terminal>type





%%
/*============================program============================*/
program:  
  TOKEN_CLASS TOKEN_PROGRAMCLASS TOKEN_LCB decl_list TOKEN_RCB {$$ = new tree("<program>" , "<program>"); $$->addChild("TOKEN_CLASS" , $1)->addChild("TOKEN_PROGRAMCLASS" , $2)->addChild("TOKEN_LCB" , $3)->addOthersChild($4->getRoot())->addChild("TOKEN_RCB" , $5);
  root = $$->getRoot();};
  

decl_list:  {$$ = new tree("<decl_list>" , "<decl_list>");} | 
  field_decl decl_list {$$ = new tree("<decl_list>" , "<decl_list>"); $$->addChild($1->getRoot())->addOthersChild($2->getRoot());} |
   
  TOKEN_VOIDTYPE method_namee TOKEN_LP args TOKEN_RP block method_decls
    {$$ = new tree("<decl_list>" , "<decl_list>");
    node* temp = new node("<method_decl>" ,  "<method_decl>");
    temp->addChild("TOKEN_VOIDTYPE" , $1)->addOthersChild($2->getRoot())->addChild("TOKEN_LP" , $3)->addOthersChild($4->getRoot())->addChild("TOKEN_RP" , $5)->addChild($6->getRoot());
    $$->addChild(temp)->addOthersChild($7->getRoot());} |

  type TOKEN_MAINFUNC TOKEN_LP args TOKEN_RP block  method_decls 
    {$$ = new tree("<decl_list>" , "<decl_list>");
    node* temp = new node("<method_decl>" ,  "<method_decl>");
    temp->addChild($1)->addChild("TOKEN_MAINFUNC" , $2)->addChild("TOKEN_LP" , $3)->addOthersChild($4->getRoot())->addChild("TOKEN_RP" , $5)->addChild($6->getRoot());
    $$->addChild(temp)->addOthersChild($7->getRoot());} |

  type id  TOKEN_LP args TOKEN_RP block method_decls 
    {$$ = new tree("<decl_list>" , "<decl_list>");
    node* temp = new node("<method_decl>" ,  "<method_decl>");
    temp->addChild($1)->addChild($2)->addChild("TOKEN_LP" , $3)->addOthersChild($4->getRoot())->addChild("TOKEN_RP" , $5)->addChild($6->getRoot());
    $$->addChild(temp)->addOthersChild($7->getRoot());};




/*============================field decleration============================*/
field_decl : 
  type variables TOKEN_SEMICOLON 
    {$$ = new tree("<field_decl>" , "<field_decl>"); $$->addChild($1)->addOthersChild($2->getRoot())->addChild("TOKEN_SEMICOLON" , $3);};


variables : 
  variable 
    {$$ = new tree("<variables>" , "<variables>"); $$->addOthersChild($1->getRoot());} |

  variable TOKEN_COMMA variables 
    {$$ = new tree("<variables>" , "<variables>"); $$->addOthersChild($1->getRoot())->addChild("TOKEN_COMMA" , $2)->addOthersChild($3->getRoot());};


variable :  
  id 
    {$$ = new tree("<variable>" , "<variable>"); $$->addChild($1);} | 

  id TOKEN_LB inTOKEN_literal TOKEN_RB 
    {$$ = new tree("<variable>" , "<variable>"); $$->addChild($1)->addChild("TOKEN_LB" , $2)->addChild($3->getRoot())->addChild("TOKEN_RB" , $4);};





/*============================method decleration============================*/
method_decls : {$$ = new tree("<method_decls>" , "<method_decls>");} | 
  method_decl method_decls
    {$$ = new tree("<method_decls>" , "<method_decls>"); $$->addChild($1->getRoot())->addOthersChild($2->getRoot());};


method_decl : 
  method_type method_namee TOKEN_LP args TOKEN_RP block 
    {$$ = new tree("<method_decl>" , "<method_decl>"); $$->addOthersChild($1->getRoot())->addOthersChild($2->getRoot())->addChild("TOKEN_LP" , $3)->addOthersChild($4->getRoot())->addChild("TOKEN_RP" , $5)->addChild($6->getRoot());};


method_type : 
  type {$$ = new tree("<method_type>" , "<method_type>"); $$->addChild($1);} |

  TOKEN_VOIDTYPE {$$ = new tree("<method_type>" , "<method_type>"); $$->addChild("TOKEN_VOIDTYPE" , $1);};


method_namee : 
  TOKEN_MAINFUNC {$$ = new tree("<method_namee>" , "<method_namee>"); $$->addChild("TOKEN_MAINFUNC" , $1);}| 
  id {$$ = new tree("<method_namee>" , "<method_namee>"); $$->addChild($1);};


args : {$$ = new tree("<args>" , "<args>");} | 
  arg TOKEN_COMMA args {$$ = new tree("<args>" , "<args>"); $$->addChild($1->getRoot())->addChild("TOKEN_COMMA" , $2)->addOthersChild($3->getRoot());};


arg : 
  type id {$$ = new tree("<arg>" , "<arg>"); $$->addChild($1)->addChild($2);};


/*============================block============================*/
block: TOKEN_LCB var_decls statements TOKEN_RCB
  {$$ = new tree("<block>" , "<block>"); $$->addChild("TOKEN_LCB" , $1)->addOthersChild($2->getRoot())->addOthersChild($3->getRoot())->addChild("TOKEN_RCB" , $4);};


/*============================variable decleration============================*/
var_decls: {$$ = new tree("<var_decls>" , "<var_decls>");} | 
  var_decl var_decls {$$ = new tree("<var_decls>" , "<var_decls>"); $$->addChild($1->getRoot())->addOthersChild($2->getRoot());};

var_decl: 
  type ids TOKEN_SEMICOLON {$$ = new tree("<var_decl>" , "<var_decl>"); $$->addChild($1)->addOthersChild($2->getRoot())->addChild("TOKEN_SEMICOLON" , $3);};

ids: 
  id  {$$ = new tree("<ids>" , "<ids>"); $$->addChild($1);} | 
  id TOKEN_COMMA ids {$$ = new tree("<ids>" , "<ids>"); $$->addChild($1)->addChild("TOKEN_COMMA" , $2)->addOthersChild($3->getRoot());};



/*============================type============================*/
type: 
  TOKEN_INTTYPE {$$ = new node("<type>" , "<type>"); $$->addChild("TOKEN_INTTYPE" , $1);}| 
  TOKEN_BOOLEANTYPE {$$ = new node("<type>" , "<type>"); $$->addChild("TOKEN_BOOLEANTYPE" , $1);};



/*============================statement============================*/
statements: {$$ = new tree("<statements>" , "<statements>");} | 
  statement statements {$$ = new tree("<statements>" , "<statements>"); $$->addChild($1->getRoot())->addOthersChild($2->getRoot());};;

statement: 
  location assign_op expr TOKEN_SEMICOLON 
    {$$ = new tree("<statement>" , "<statement>"); $$->addChild($1->getRoot())->addChild($2)->addChild($3->getRoot())->addChild("TOKEN_SEMICOLON" , $4);}|
  
  method_call TOKEN_SEMICOLON 
    {$$ = new tree("<statement>" , "<statement>"); $$->addChild($1->getRoot())->addChild("TOKEN_SEMICOLON" , $2);} |
  TOKEN_IFCONDITION TOKEN_LP expr TOKEN_RP block else_block 
    {$$ = new tree("<statement>" , "<statement>"); $$->addChild("TOKEN_IFCONDITION" , $1)->addChild("TOKEN_LP" , $2)->addChild($3->getRoot())->addChild("TOKEN_RP" , $4)->addChild($5->getRoot())->addOthersChild($6->getRoot());} |
  
  TOKEN_LOOP id TOKEN_ASSIGNOP expr TOKEN_COMMA expr block 
    {$$ = new tree("<statement>" , "<statement>"); $$->addChild("TOKEN_LOOP" , $1)->addChild($2)->addChild("TOKEN_ASSIGNOP" , $3)->addChild($4->getRoot())->addChild("TOKEN_COMMA" , $5)->addChild($6->getRoot())->addChild($7->getRoot());}|
  
  TOKEN_RETURN nexpr TOKEN_SEMICOLON {$$ = new tree("<statement>" , "<statement>"); $$->addChild("TOKEN_RETURN" , $1)->addOthersChild($2->getRoot())->addChild("TOKEN_SEMICOLON" , $3);} |
  
  TOKEN_BREAKSTMT TOKEN_SEMICOLON {$$ = new tree("<statement>" , "<statement>"); $$->addChild("TOKEN_BREAKSTMT" , $1)->addChild("TOKEN_SEMICOLON" , $2);} |
  
  TOKEN_CONTINUESTMT TOKEN_SEMICOLON {$$ = new tree("<statement>" , "<statement>"); $$->addChild("TOKEN_CONTINUESTMT" , $1)->addChild("TOKEN_SEMICOLON" , $2);} |
  
  block {$$ = new tree("<statement>" , "<statement>"); $$->addChild($1->getRoot());};


nexpr: {$$ = new tree("<nexpr>" , "<nexpr>");} | 
  expr {$$ = new tree("<nexpr>" , "<nexpr>"); $$->addChild($1->getRoot());};

else_block: {$$ = new tree("<else_block>" , "<else_block>");} |  
  TOKEN_ELSECONDITION block {$$ = new tree("<else_block>" , "<else_block>"); $$->addChild("TOKEN_ELSECONDITION" , $1)->addChild($2->getRoot());};


/*============================assignment operator============================*/
assign_op: 
  TOKEN_ASSIGNOP {$$ = new node("<assign_op>" , "<assign_op>"); $$->addChild("TOKEN_ASSIGNOP" , $1);} | 
  TOKEN_MINUSASSIGNOP {$$ = new node("<assign_op>" , "<assign_op>"); $$->addChild("TOKEN_MINUSASSIGNOP" , $1);} | 
  TOKEN_PLUSASSIGNOP {$$ = new node("<assign_op>" , "<assign_op>"); $$->addChild("TOKEN_PLUSASSIGNOP" , $1);};



//method call
method_call: 
  method_name TOKEN_LP exprs TOKEN_RP 
    {$$ = new tree("<method_call>" , "<method_call>"); $$->addChild($1->getRoot())->addChild("TOKEN_LP" , $2)->addOthersChild($3->getRoot())->addChild("TOKEN_RP" , $4);} | 
  
  TOKEN_CALLOUT TOKEN_LP string_literal TOKEN_COMMA callouTOKEN_args TOKEN_RP 
    {$$ = new tree("<method_call>" , "<method_call>"); $$->addChild("TOKEN_CALLOUT" , $1)->addChild("TOKEN_LP" , $2)->addChild($3)->addChild("TOKEN_COMMA" , $4)->addOthersChild($5->getRoot())->addChild("TOKEN_RP" , $6);} | 
  
  TOKEN_CALLOUT TOKEN_LP string_literal TOKEN_RP 
    {$$ = new tree("<method_call>" , "<method_call>"); $$->addChild("TOKEN_CALLOUT" , $1)->addChild("TOKEN_LP" , $2)->addChild($3)->addChild("TOKEN_RP" , $4);}; 



/*============================method name============================*/
method_name: 
  id {$$ = new tree("<method_name>" , "<method_name>"); $$->addChild($1);};


/*============================location============================*/
location: 
  id  {$$ = new tree("<location>" , "<location>"); $$->addChild($1);};| 
  id TOKEN_LB expr TOKEN_RB {$$ = new tree("<location>" , "<location>"); $$->addChild($1)->addChild("TOKEN_LB" , $2)->addChild($3->getRoot())->addChild("TOKEN_RB" , $4);};;


/*============================expression============================*/
exprs: {$$ = new tree("<exprs>" , "<exprs>");} | 
  expr TOKEN_COMMA exprs {$$ = new tree("<exprs>" , "<exprs>"); $$->addChild($1->getRoot())->addChild("TOKEN_COMMA" , $2)->addOthersChild($3->getRoot());};

expr: 
  expr bin_op expr1 {$$ = new tree("<expr>" , "<expr>"); $$->addChild($1->getRoot())->addChild($2->getRoot())->addChild($3->getRoot());} | 
  expr1 {$$ = new tree("<expr>" , "<expr>"); $$->addOthersChild($1->getRoot());};

expr1:  
  location {$$ = new tree("<expr>" , "<expr>"); $$->addChild($1->getRoot());} |
  method_call {$$ = new tree("<expr>" , "<expr>"); $$->addChild($1->getRoot());} |
  literal {$$ = new tree("<expr>" , "<expr>"); $$->addChild($1->getRoot());} |
  TOKEN_MINUSOP expr1 {$$ = new tree("<expr>" , "<expr>"); $$->addChild("TOKEN_MiNUSOP" , $1)->addChild($2->getRoot());} |
  TOKEN_LOGICOP expr1 {$$ = new tree("<expr>" , "<expr>"); $$->addChild("TOKEN_LOGICOP" , $1)->addChild($2->getRoot());} |
  TOKEN_LP expr TOKEN_RP {$$ = new tree("<expr>" , "<expr>"); $$->addChild("TOKEN_LP" , $1)->addChild($2->getRoot())->addChild("TOKEN_RP" , $3);};



/*============================callout argument============================*/
callouTOKEN_args: {$$ = new tree("<callouTOKEN_args>" , "<callouTOKEN_args>");} |
  callouTOKEN_arg TOKEN_COMMA callouTOKEN_args 
    {$$ = new tree("<callouTOKEN_args>" , "<callouTOKEN_args>"); $$->addChild($1->getRoot())->addChild("TOKEN_COMMA" , $2)->addOthersChild($3->getRoot());};

callouTOKEN_arg: 
  expr {$$ = new tree("<callouTOKEN_arg>" , "<callouTOKEN_arg>"); $$->addChild($1->getRoot());} | 
  string_literal {$$ = new tree("<callouTOKEN_arg>" , "<callouTOKEN_arg>"); $$->addChild($1);};



/*============================binary operator============================*/
bin_op: 
  arith_op {$$ = new tree("<bin_op>" , "<bin_op>"); $$->addChild($1);} | 
  rel_op {$$ = new tree("<bin_op>" , "<bin_op>"); $$->addChild($1);} | 
  eq_op {$$ = new tree("<bin_op>" , "<bin_op>"); $$->addChild($1);} | 
  cond_op{$$ = new tree("<bin_op>" , "<bin_op>"); $$->addChild($1);};


/*============================arithmetic operator============================*/
arith_op: 
  TOKEN_MODULSOP {$$ = new node("<arith_op>" , "<arith_op>"); $$->addChild("TOKEN_MODULSOP" , $1);} | 
  TOKEN_DIVISIONOP {$$ = new node("<arith_op>" , "<arith_op>"); $$->addChild("TOKEN_DIVISIONOP" , $1);} | 
  TOKEN_MULTIPLEOP {$$ = new node("<arith_op>" , "<arith_op>"); $$->addChild("TOKEN_MULTIPLEOP" , $1);} | 
  TOKEN_MINUSOP {$$ = new node("<arith_op>" , "<arith_op>"); $$->addChild("TOKEN_MINUSOP" , $1);} | 
  TOKEN_PLUSOP {$$ = new node("<arith_op>" , "<arith_op>"); $$->addChild("TOKEN_PLUSOP" , $1);};



/*============================relation operator============================*/
rel_op: 
  TOKEN_RELATIONOP {$$ = new node("<rel_op>" , "<rel_op>"); $$->addChild("TOKEN_RELATIONOP" , $1);};


/*============================equality operator============================*/
eq_op: 
  TOKEN_EQUALITYOP {$$ = new node("<eq_op>" , "<eq_op>"); $$->addChild("TOKEN_EQUALITYOP" , $1);};


/*============================conditional operator============================*/
cond_op: 
  TOKEN_CONDITIONOP {$$ = new node("<cond_op>" , "<cond_op>"); $$->addChild("TOKEN_CONDITIONOP" , $1);};


/*============================literal============================*/
literal: 
  inTOKEN_literal {$$ = new tree("<literal>" , "<literal>"); $$->addChild($1->getRoot());} | 
  char_literal {$$ = new tree("<literal>" , "<literal>"); $$->addChild($1);} | 
  bool_literal {$$ = new tree("<literal>" , "<literal>"); $$->addChild($1);};


/*============================id============================*/
id: 
  TOKEN_ID {$$ = new node("<id>" , "<id>"); $$->addChild("TOKEN_ID" , $1);};

/*============================int literal============================*/
inTOKEN_literal: 
  deciamla_literal {$$ = new tree("<inTOKEN_literal>" , "<inTOKEN_literal>"); $$->addChild($1);}| 
  hex_literal {$$ = new tree("<inTOKEN_literal>" , "<inTOKEN_literal>"); $$->addChild($1);};

/*============================program============================*/
deciamla_literal: 
  TOKEN_DECIMALCONST {$$ = new node("<decimal_literal>" , "<decimal_literal>"); $$->addChild("<TOKEN_DECIMALCONST>" , $1);};

/*============================hex literal============================*/
hex_literal: 
  TOKEN_HEXADECIMALCONST {$$ = new node("<hex_literal>" , "<string_literal>"); $$->addChild("TOKEN_HEXADECIMALCONST" , $1);};

/*============================bool literal============================*/
bool_literal: 
  TOKEN_BOOLEANCONST {$$ = new node("<string_literal>" , "<string_literal>"); $$->addChild("TOKEN_BOOLEANCONST" , $1);};

/*============================char literal============================*/
char_literal: 
  TOKEN_CHARCONST {$$ = new node("<char_literal>" , "<char_literal>"); $$->addChild("TOKEN_CHARCONST" , $1);};

/*============================string literal============================*/
string_literal: 
TOKEN_STRINGCONST {$$ = new node("<string_literal>" , "<string_literal>"); $$->addChild("TOKEN_STRINGCONST" , $1);};
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