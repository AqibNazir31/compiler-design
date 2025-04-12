//Check if the entered string is a valid identifier
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int isKeyword(char *str) {
 char *keywords[] = {"int", "float", "if", "else", "while", "return", "for", "break",
"continue"};
 for (int i = 0; i < 9; i++) {
 if (strcmp(str, keywords[i]) == 0)
 return 1;
 }
 return 0;
}
int isValidIdentifier(char *str) {
 if (!(isalpha(str[0]) || str[0] == '_'))
 return 0;
 for (int i = 1; str[i]; i++) {
 if (!(isalnum(str[i]) || str[i] == '_'))
 return 0;
 }
 return !isKeyword(str);
}
int main() {
 char str[50];
 printf("Enter a string: ");
 scanf("%s", str);
 if (isValidIdentifier(str))
 printf("Valid identifier\n");
 else
 printf("Invalid identifier\n");
 return 0;
}
