#include <stdio.h>
#include <string.h>
int main() {
 char name[10] = "Hello";
 char copy[10];
 strncpy(copy, name, 2);
 copy[2] = '\0';
 printf("%s", copy);
 return 0;
}