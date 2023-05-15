//program to take two string as user input and print greater string among them
#include <stdio.h>
#include <string.h>

void main()
{
    char a[20];
    gets(a);
    char b[20];
    gets(b);
    if(strlen(a)>strlen(b)){
        printf("%s",a);
    }
    else if(strlen(b)>strlen(a)){
        printf("%s",b);
    }
    else{
        printf("SAME");
    }
}

