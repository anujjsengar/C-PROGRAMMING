//program to reverse a string
#include <stdio.h>
#include <string.h>

void main()
{
    char a[20];
    gets(a);
    char b[20];
    for(int i=0;a[i];i++){
        b[i]=a[i-strlen(a)];
    }
    printf("%s",b);
}
