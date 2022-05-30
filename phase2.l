%{
  #include "phase2.tab.h"
  #include <stdio.h>
  extern int yylval;
  int line_count=1;
%}

char [ -~]{-}[\\"']|\\t|\\n|\\\\|\\'|[\\]["]
%s ERROR
%%


"//".*\n   /*ignore comments*/

boolean  {yylval.sval = "bool";               return TOKEN_BOOLEANTYPE;}
break    {yylval.sval = "break";              return TOKEN_BREAKSTMT;}
callout  {yylval.sval = "callout";            return TOKEN_CALLOUT;}
class    {yylval.sval = "class";              return TOKEN_CLASS;}
continue {yylval.sval = "continue";           return TOKEN_CONTINUESTMT;}
else     {yylval.sval = "else";               return TOKEN_ELSECONDITION;}
false    {yylval.sval = "false";              return TOKEN_BOOLEANCONST;}
for      {yylval.sval = "for";                return TOKEN_LOOP;}
if       {yylval.sval = "if";                 return TOKEN_IFCONDITION;}
int      {yylval.sval = "int";                return TOKEN_INTTYPE;}
return   {yylval.sval = "return";             return TOKEN_RETURN;}
true     {yylval.sval = "true";               return TOKEN_BOOLEANCONST;}
void     {yylval.sval = "void";               return TOKEN_VOIDTYPE;}
Program  {yylval.sval = "Program";            return TOKEN_PROGRAMCLASS;}
main     {yylval.sval = "main";               return TOKEN_MAINFUNC;}


("_"|[a-zA-Z])("_"|[a-zA-Z0-9])*    {yylval.sval = strdup(yytext);     return TOKEN_ID;}

"-="    {yylval.sval = strdup(yytext);        return TOKEN_ASSIGNOP;}
"+="    {yylval.sval = strdup(yytext);        return TOKEN_ASSIGNOP;}
"=="    {yylval.sval = strdup(yytext);        return TOKEN_EQUALITYOP;}
"<="    {yylval.sval = strdup(yytext);        return TOKEN_RELATIONOP;}
">="    {yylval.sval = strdup(yytext);        return TOKEN_RELATIONOP;}
"&&"    {yylval.sval = strdup(yytext);        return TOKEN_CONDITIONOP;}
"||"    {yylval.sval = strdup(yytext);        return TOKEN_CONDITIONOP;}
"!="    {yylval.sval = strdup(yytext);        return TOKEN_EQUALITYOP;}
"="     {yylval.sval = strdup(yytext);        return TOKEN_ASSIGNOP;}
"!"     {yylval.sval = strdup(yytext);        return TOKEN_ASSIGNOP;}
"<"     {yylval.sval = strdup(yytext);        return TOKEN_RELATIONOP;}
">"     {yylval.sval = strdup(yytext);        return TOKEN_RELATIONOP;}
"%"     {yylval.sval = strdup(yytext);        return TOKEN_ARITHMATICOP;}
"/"     {yylval.sval = strdup(yytext);        return TOKEN_ARITHMATICOP;}
"*"     {yylval.sval = strdup(yytext);        return TOKEN_ARITHMATICOP;}
"-"     {yylval.sval = strdup(yytext);        return TOKEN_ARITHMATICOP;}
"+"     {yylval.sval = strdup(yytext);        return TOKEN_ARITHMATICOP;}


"{"     {yylval.sval = strdup(yytext);        return TOKEN_LCB;}
"}"     {yylval.sval = strdup(yytext);        return TOKEN_RCB;}
"["     {yylval.sval = strdup(yytext);        return TOKEN_LB;}
"]"     {yylval.sval = strdup(yytext);        return TOKEN_RB;}
"("     {yylval.sval = strdup(yytext);        return TOKEN_LP;}
")"     {yylval.sval = strdup(yytext);        return TOKEN_RP;}
";"     {yylval.sval = strdup(yytext);        return TOKEN_SEMICOLON;}
","     {yylval.sval = strdup(yytext);        return TOKEN_COMMA;}



\n      {return NEW_LINE ;}
\t      /*ignore whitespaces*/
" "     /*ignore whitespaces*/

\'{char}\'   {yylval.sval = strdup(yytext);   return TOKEN_CHARCONST;}
\"{char}*\"  {yylval.sval = strdup(yytext);   return TOKEN_STRINGCONST;}


0x0+ {yylval.sval = strdup(yytext);                             return TOKEN_HEXADECIMALCONST;}
0x0*[a-fA-F1-9][a-fA-F0-9]{0,7} {yylval.sval = strdup(yytext);  return TOKEN_HEXADECIMALCONST; }




-?[0-9]+  {

    long long int num = atoll(yytext);
    if(num>2147483647 || num<-2147483647)
    {
        yylval.sval = "out of range number";     return ERROR
    }
    else
    {
          yylval.ival = num; return TOKEN_DECIMALCONST;
    }
}
0x0*[a-fA-F1-9][a-fA-F0-9]{8,}  {yylval.sval = "out of range hexadecimal"; return ERROR;}

[0-9]("_"|[0-9a-zA-Z])+     {yylval.sval = "wrong id definition";          return ERROR;}

<ERROR_SKIP>.*\n {BEGIN 0; printf("line skipped\n"); return NEW_LINE;}
. {yylval.sval = "invalid token line";    return ERROR     BEGIN ERROR_SKIP;}

%%    
