//Check if the entered string is a valid integer constant
#include <stdio.h>
#include <ctype.h>
int isInteger(char *str) {
 if (*str == '-' || *str == '+') str++;
 if (!*str) return 0;
 while (*str) {
 if (!isdigit(*str))
 return 0;
 str++;
 }
 return 1;
}
int main() {
 char str[50];
 printf("Enter a string: ");
 scanf("%s", str);
 if (isInteger(str))
 printf("Valid integer constant\n");
 else
 printf("Invalid integer constant\n");
Lexical Analysis Programs in C
 return 0;
}