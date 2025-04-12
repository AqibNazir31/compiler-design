// Lexical analyzer using Flex
/* lexer.l */
%{
#include <stdio.h>
%}
%%
int|float|if|else|return { printf("Keyword: %s\n", yytext); }
[0-9]+ { printf("Integer: %s\n", yytext); }
[A-Za-z_][A-Za-z0-9_]* { printf("Identifier: %s\n", yytext); }
[ \t\n]+ { /* ignore whitespace */ }
. { printf("Symbol: %s\n", yytext); }
%%
int main() {
Lexical Analysis Programs in C
 yylex();
 return 0;
}
