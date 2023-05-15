//write a non agrumented return function to find cube of a number
#include <stdio.h>
int cube();

int main()
{
    int x;
    x=cube();
    printf("%d",x);
}

int cube(){
    int a;
    scanf("%d",&a);
    return a*a*a;
}
