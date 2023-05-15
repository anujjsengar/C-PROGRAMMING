//wrtie a argumented return function to find sum of two number
#include <stdio.h>
int sum(int a,int b);
void main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int a;
    a=sum(x,y);
    printf("%d",a);
}
int sum(int x,int y){
    return x+y;
}
