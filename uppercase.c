//program to convert lowercase  to  uppercase string and take string input from user.

#include <stdio.h>
#include <string.h>

void main()
{
    char a[20];
    gets(a);
    for(int i=0;a[i];i++){
        if(a[i]>95 && a[i]<121){
            a[i]=a[i]-32;
        }
    }
    printf("%s",a);
}
