// write a argumented return function to calculate diameter of a circle
#include <stdio.h>
int diameter(int r);
int main()
{
    int r;
    scanf("%d",&r);
    int x;
    x=diameter(r);
    printf("%d",x);
    return 0;
}
int diameter(int r){
    return 2*r;
}
