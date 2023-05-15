//program to convert particular index character to its vise verce case in a string.
#include <stdio.h>
#include <string.h>

void main()
{
    char a[20];
    gets(a);
    int b;
    scanf("%d",&b);
    if(a[b]>96 && a[b]<122){
            a[b]=a[b]-32;
        }
    else{
        a[b]=a[b]+32;
    }
    printf("%s",a);
}
