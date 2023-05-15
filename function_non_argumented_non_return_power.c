//write a non argumented non return function to find a power of a number
#include <stdio.h>
#include <math.h>
void power();
void main()
{
    power();
}
void power(){
    float a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int x=pow(a,b);
    printf("YOUR ANSWER  %d",x);
}
