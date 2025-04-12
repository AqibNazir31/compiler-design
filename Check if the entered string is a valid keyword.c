//1. Check if the entered string is a valid keyword
#include <stdio.h>
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
int main() {
 char str[50];
 printf("Enter a string: ");
 scanf("%s", str);
 if (isKeyword(str))
 printf("Valid keyword\n");
 else
 printf("Not a keyword\n");
 return 0;
}