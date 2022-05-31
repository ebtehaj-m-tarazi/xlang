%{
  #include <stdio.h>
  #include <iostream>
  using namespace std;
  #include "phase2.tab.h"
%}

char [ -~]{-}[\\"']|\\t|\\n|\\\\|\\'|[\\]["]

%%


"//".*\n   /*ignore comments*/

boolean  {yylval.str = strdup(yytext);           return T_BOOLEANTYPE;}
break    {yylval.str = strdup(yytext);           return T_BREAKSTMT;}
callout  {yylval.str = strdup(yytext);           return T_CALLOUT;}
class    {yylval.str = strdup(yytext);           return T_CLASS;}
continue {yylval.str = strdup(yytext);           return T_CONTINUESTMT;}
else     {yylval.str = strdup(yytext);           return T_ELSECONDITION;}
false    {yylval.str = strdup(yytext);           return T_BOOLEANCONST;}
for      {yylval.str = strdup(yytext);           return T_LOOP;}
if       {yylval.str = strdup(yytext);           return T_IFCONDITION;}
int      {yylval.str = strdup(yytext);           return T_INTTYPE;}
return   {yylval.str = strdup(yytext);           return T_RETURN;}
true     {yylval.str = strdup(yytext);           return T_BOOLEANCONST;}
void     {yylval.str = strdup(yytext);           return T_VOIDTYPE;}
Program  {yylval.str = strdup(yytext);           return T_PROGRAMCLASS;}
main     {yylval.str = strdup(yytext);           return T_MAINFUNC;}


("_"|[a-zA-Z])("_"|[a-zA-Z0-9])*   {yylval.str = strdup(yytext);     return T_ID;}


"-="    {yylval.str = strdup(yytext);        return T_MINUSASSIGNOP;}
"+="    {yylval.str = strdup(yytext);        return T_PLUSASSIGNOP;}
"=="    {yylval.str = strdup(yytext);        return T_EQUALITYOP;}
"<="    {yylval.str = strdup(yytext);        return T_RELATIONOP;}
">="    {yylval.str = strdup(yytext);        return T_RELATIONOP;}
"&&"    {yylval.str = strdup(yytext);        return T_CONDITIONOP;}
"||"    {yylval.str = strdup(yytext);        return T_CONDITIONOP;}
"!="    {yylval.str = strdup(yytext);        return T_EQUALITYOP;}
"="     {yylval.str = strdup(yytext);        return T_ASSIGNOP;}
"!"     {yylval.str = strdup(yytext);        return T_LOGICOP;}
"<"     {yylval.str = strdup(yytext);        return T_RELATIONOP;}
">"     {yylval.str = strdup(yytext);        return T_RELATIONOP;}
"%"     {yylval.str = strdup(yytext);        return T_MODULSOP;}
"/"     {yylval.str = strdup(yytext);        return T_DIVISIONOP;}
"*"     {yylval.str = strdup(yytext);        return T_MULTIPLEOP;}
"-"     {yylval.str = strdup(yytext);        return T_MINUSOP;}
"+"     {yylval.str = strdup(yytext);        return T_PLUSOP;}


"{"     {yylval.str = strdup(yytext);        return T_LCB;}
"}"     {yylval.str = strdup(yytext);        return T_RCB;}
"["     {yylval.str = strdup(yytext);        return T_LB;}
"]"     {yylval.str = strdup(yytext);        return T_RB;}
"("     {yylval.str = strdup(yytext);        return T_LP;}
")"     {yylval.str = strdup(yytext);        return T_RP;}
";"     {yylval.str = strdup(yytext);        return T_SEMICOLON;}
","     {yylval.str = strdup(yytext);        return T_COMMA;}



\n      /*ignore whitespaces*/
\t      /*ignore whitespaces*/
" "     /*ignore whitespaces*/

\'{char}\'   {yylval.str = strdup(yytext);   return T_CHARCONST;}
\"{char}*\"  {yylval.str = strdup(yytext);   return T_STRINGCONST;}


-?0x[a-fA-F0-9]+ {yylval.str = strdup(yytext);     return T_HEXADECIMALCONST; }
-?[0-9]+  { yylval.number = atoll(yytext); return T_DECIMALCONST;}


[0-9]("_"|[0-9a-zA-Z])+     {cout << "wrong id definition" ;   exit(-1);}
%%    
