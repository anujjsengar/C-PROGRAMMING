// write a argumented return function to calculate area of circle
#include <stdio.h>
float area(float r);
int main()
{
    float r;
    scanf("%f",&r);
    float x;
    x=area(r);
    printf("%f",x);
    return 0;
}
float area(float r){
    return r*r*3.14;
}
