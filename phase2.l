%{
  #include "phase2.tab.h"
  #include <stdio.h>
  extern int yylval;
  int line_count=1;
%}

char [ -~]{-}[\\"']|\\t|\\n|\\\\|\\'|[\\]["]
%s ERROR_SKIP
%%


"//".*\n   /*ignore comments*/

boolean  {yylval.sval = "bool";               return T_BOOLEANTYPE;}
break    {yylval.sval = "break";              return T_BREAKSTMT;}
callout  {yylval.sval = "callout";            return T_CALLOUT;}
class    {yylval.sval = "class";              return T_CLASS;}
continue {yylval.sval = "continue";           return T_CONTINUESTMT;}
else     {yylval.sval = "else";               return T_ELSECONDITION;}
false    {yylval.sval = "false";              return T_BOOLEANCONST;}
for      {yylval.sval = "for";                return T_LOOP;}
if       {yylval.sval = "if";                 return T_IFCONDITION;}
int      {yylval.sval = "int";                return T_INTTYPE;}
return   {yylval.sval = "return";             return T_RETURN;}
true     {yylval.sval = "true";               return T_BOOLEANCONST;}
void     {yylval.sval = "void";               return T_VOIDTYPE;}
Program  {yylval.sval = "Program";            return T_PROGRAMCLASS;}
main     {yylval.sval = "main";               return T_MAINFUNC;}


("_"|[a-zA-Z])("_"|[a-zA-Z0-9])*    {yylval.sval = strdup(yytext);     return T_ID;}

"-="    {yylval.sval = strdup(yytext);        return T_MINUSASSIGNOP;}
"+="    {yylval.sval = strdup(yytext);        return T_PLUSASSIGNOP;}
"=="    {yylval.sval = strdup(yytext);        return T_EQUALITYOP;}
"<="    {yylval.sval = strdup(yytext);        return T_RELATIONOP;}
">="    {yylval.sval = strdup(yytext);        return T_RELATIONOP;}
"&&"    {yylval.sval = strdup(yytext);        return T_CONDITIONOP;}
"||"    {yylval.sval = strdup(yytext);        return T_CONDITIONOP;}
"!="    {yylval.sval = strdup(yytext);        return T_EQUALITYOP;}
"="     {yylval.sval = strdup(yytext);        return T_ASSIGNOP;}
"!"     {yylval.sval = strdup(yytext);        return T_LOGICOP;}
"<"     {yylval.sval = strdup(yytext);        return T_RELATIONOP;}
">"     {yylval.sval = strdup(yytext);        return T_RELATIONOP;}
"%"     {yylval.sval = strdup(yytext);        return T_MODULSOP;}
"/"     {yylval.sval = strdup(yytext);        return T_DIVISIONOP;}
"*"     {yylval.sval = strdup(yytext);        return T_MULTIPLEOP;}
"-"     {yylval.sval = strdup(yytext);        return T_MINUSOP;}
"+"     {yylval.sval = strdup(yytext);        return T_PLUSOP;}


"{"     {yylval.sval = strdup(yytext);        return T_LCB;}
"}"     {yylval.sval = strdup(yytext);        return T_RCB;}
"["     {yylval.sval = strdup(yytext);        return T_LB;}
"]"     {yylval.sval = strdup(yytext);        return T_RB;}
"("     {yylval.sval = strdup(yytext);        return T_LP;}
")"     {yylval.sval = strdup(yytext);        return T_RP;}
";"     {yylval.sval = strdup(yytext);        return T_SEMICOLON;}
","     {yylval.sval = strdup(yytext);        return T_COMMA;}



\n      {return NEW_LINE ;}
\t      /*ignore whitespaces*/
" "     /*ignore whitespaces*/

\'{char}\'   {yylval.sval = strdup(yytext);   return T_CHARCONST;}
\"{char}*\"  {yylval.sval = strdup(yytext);   return T_STRINGCONST;}


0x0+ {yylval.sval = strdup(yytext);                                return T_HEXADECIMALCONST;}
0x0*[a-fA-F1-9][a-fA-F0-9]{0,7} {yylval.sval = strdup(yytext);     return T_HEXADECIMALCONST; }




-?[0-9]+  {

    long long int num = atoll(yytext);
    if(num>2147483647 || num<-2147483647)
    {
        yylval.sval = "out of range number";     return ERROR
    }
    else
    {
          yylval.ival = num; return T_DECIMALCONST;
    }
}
0x0*[a-fA-F1-9][a-fA-F0-9]{8,}  {yylval.sval = "out of range hexadecimal"; return ERROR;}

[0-9]("_"|[0-9a-zA-Z])+     {yylval.sval = "wrong id definition";          return ERROR;}

<ERROR_SKIP>.*\n {BEGIN 0; printf("line skipped\n"); return NEW_LINE;}
. {yylval.sval = "invalid T line";    return ERROR     BEGIN ERROR_SKIP;}

%%    
