//find the frequency of a character inside a string
#include <stdio.h>
#include <string.h>

void main()
{
    char a[20];
    gets(a);
    char b;
    gets(b);
    int s=0;
    for(int i=0;a[i];i++){
        if(a[i]==b){
            s++;
        }
    }
    printf("%d",s);
}
