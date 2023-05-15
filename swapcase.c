//program to convert lower to upper or upper to lower an in indivisual character of string
#include <stdio.h>
#include <string.h>

void main()
{
    char a[20];
    gets(a);
    for(int i=0;a[i];i++){
        if(a[i]>96 && a[i]<122){
            a[i]=a[i]-32;
        }
        else if(a[i]>64 && a[i]<91){
            a[i]=a[i]+32;
        }
    }
    printf("%s",a);
}
