// Tokenize a given string
#include <stdio.h>
#include <string.h>
int main() {
 char str[100], *token;
 printf("Enter a line of code: ");
 fgets(str, sizeof(str), stdin);
 token = strtok(str, " \t\n;(){}");
Lexical Analysis Programs in C
 while (token != NULL) {
 printf("Token: %s\n", token);
 token = strtok(NULL, " \t\n;(){}");
 }
 return 0;
}
5. Coun