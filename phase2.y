%{
  #include <iostream>
  using namespace std;

  extern int yylex();
  extern int yyparse();

  void yyerror(const char *s);
%}

%token TOKEN_BOOLEANTYPE
       TOKEN_BREAKSTMT
       TOKEN_CALLOUT
       TOKEN_CLASS
       TOKEN_CONTINUESTMT
       TOKEN_ELSECONDITION
       TOKEN_BOOLEANCONST
       TOKEN_LOOP
       TOKEN_IFCONDITION
       TOKEN_INTTYPE
       TOKEN_RETURN
       TOKEN_VOIDTYPE
       TOKEN_PROGRAMCLASS
       TOKEN_MAINFUNC
       TOKEN_ASSIGNOP
       TOKEN_EQUALITYOP
       TOKEN_RELATIONOP
       TOKEN_CONDITIONOP
       TOKEN_ARITHMATICOP
       TOKEN_LCB
       TOKEN_RCB
       TOKEN_LB
       TOKEN_RB
       TOKEN_LP
       TOKEN_RP
       TOKEN_SEMICOLON
       TOKEN_COMMA
       TOKEN_CHARCONST
       TOKEN_STRINGCONST
       TOKEN_HEXADECIMALCONST
       TOKEN_DECIMALCONST
       ERROR
       TYPE


%%
PROGRAM:
    TOKEN_CLASS TOKEN_PROGRAMCLASS '{' FIELD_DECL_PART METHOD_DECL_PART '}';

FIELD_DECL_PART : | FIELD_DECL FIELD_DECL_PART;

FIELD_DECL : TYPE VARIABLES;

VARIABLES : VARIABLE | VARIABLE VARIABLES;

VARIABLE :  ID | ID '[' TOKEN_DECIMALCONST ']';

METHOD_DECL_PART : | METHOD_DECL METHOD_DECL_PART;

METHOD_DECL : TYPE 




field_decl:  
      type { id | 






%%


int main(){
  yyparse();
}

void yyerror(const char *s){
  printf("EEK, parse error! Message: %s\n" , s);
}