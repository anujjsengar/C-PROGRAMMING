#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//This challenge requires you to print Hello, World! on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command.*two strings: * "Hello, World!" on one line and the input string on the next line.
int main(){
    char a[500];
    gets(a);
    scanf("%s",a);
    printf("Hello, World!\n");
    printf("%s",a);
    return 0;
}
