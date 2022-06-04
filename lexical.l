%{
  #include "tree.h"
  #include <stdio.h>
  #include <iostream>
  using namespace std;

  #include "parser.tab.h"
%}

char [ -~]{-}[\\"']|\\t|\\n|\\\\|\\'|[\\]["]

%option noyywrap
%option yylineno

%%
"//".*\n   /*ignore comments*/

boolean  {yylval.str = strdup(yytext);           return TOKEN_BOOLEANTYPE;}
break    {yylval.str = strdup(yytext);           return TOKEN_BREAKSTMT;}
callout  {yylval.str = strdup(yytext);           return TOKEN_CALLOUT;}
class    {yylval.str = strdup(yytext);           return TOKEN_CLASS;}
continue {yylval.str = strdup(yytext);           return TOKEN_CONTINUESTMT;}
else     {yylval.str = strdup(yytext);           return TOKEN_ELSECONDITION;}
false    {yylval.str = strdup(yytext);           return TOKEN_BOOLEANCONST;}
for      {yylval.str = strdup(yytext);           return TOKEN_LOOP;}
if       {yylval.str = strdup(yytext);           return TOKEN_IFCONDITION;}
int      {yylval.str = strdup(yytext);           return TOKEN_INTTYPE;}
return   {yylval.str = strdup(yytext);           return TOKEN_RETURN;}
true     {yylval.str = strdup(yytext);           return TOKEN_BOOLEANCONST;}
void     {yylval.str = strdup(yytext);           return TOKEN_VOIDTYPE;}
Program  {yylval.str = strdup(yytext);           return TOKEN_PROGRAMCLASS;}
main     {yylval.str = strdup(yytext);           return TOKEN_MAINFUNC;}


("_"|[a-zA-Z])("_"|[a-zA-Z0-9])*   {yylval.str = strdup(yytext);     return TOKEN_ID;}


"-="    {yylval.str = strdup(yytext);        return TOKEN_MINUSASSIGNOP;}
"+="    {yylval.str = strdup(yytext);        return TOKEN_PLUSASSIGNOP;}
"=="    {yylval.str = strdup(yytext);        return TOKEN_EQUALITYOP;}
"<="    {yylval.str = strdup(yytext);        return TOKEN_RELATIONOP;}
">="    {yylval.str = strdup(yytext);        return TOKEN_RELATIONOP;}
"&&"    {yylval.str = strdup(yytext);        return TOKEN_CONDITIONOP;}
"||"    {yylval.str = strdup(yytext);        return TOKEN_CONDITIONOP;}
"!="    {yylval.str = strdup(yytext);        return TOKEN_EQUALITYOP;}
"="     {yylval.str = strdup(yytext);        return TOKEN_ASSIGNOP;}
"!"     {yylval.str = strdup(yytext);        return TOKEN_LOGICOP;}
"<"     {yylval.str = strdup(yytext);        return TOKEN_RELATIONOP;}
">"     {yylval.str = strdup(yytext);        return TOKEN_RELATIONOP;}
"%"     {yylval.str = strdup(yytext);        return TOKEN_MODULSOP;}
"/"     {yylval.str = strdup(yytext);        return TOKEN_DIVISIONOP;}
"*"     {yylval.str = strdup(yytext);        return TOKEN_MULTIPLEOP;}
"-"     {yylval.str = strdup(yytext);        return TOKEN_MINUSOP;}
"+"     {yylval.str = strdup(yytext);        return TOKEN_PLUSOP;}


"{"     {yylval.str = strdup(yytext);        return TOKEN_LCB;}
"}"     {yylval.str = strdup(yytext);        return TOKEN_RCB;}
"["     {yylval.str = strdup(yytext);        return TOKEN_LB;}
"]"     {yylval.str = strdup(yytext);        return TOKEN_RB;}
"("     {yylval.str = strdup(yytext);        return TOKEN_LP;}
")"     {yylval.str = strdup(yytext);        return TOKEN_RP;}
";"     {yylval.str = strdup(yytext);        return TOKEN_SEMICOLON;}
","     {yylval.str = strdup(yytext);        return TOKEN_COMMA;}



\n      /*ignore whitespaces*/
\t      /*ignore whitespaces*/
" "     /*ignore whitespaces*/

\'{char}\'   {yylval.str = strdup(yytext);   return TOKEN_CHARCONST;}
\"{char}*\"  {yylval.str = strdup(yytext);   return TOKEN_STRINGCONST;}


-?0x[a-fA-F0-9]+ {yylval.str = strdup(yytext);     return TOKEN_HEXADECIMALCONST; }
-?[0-9]+  { yylval.str = strdup(yytext); return TOKEN_DECIMALCONST;}


[0-9]("_"|[0-9a-zA-Z])+     {cout << "wrong id definition in line" << yylineno << endl;   exit(-1);}
%%    
