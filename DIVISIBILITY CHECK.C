#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// DIVISIBILTY CHECK OF A NUMBER BY TWO OTHER NUMBER FROM TAKING 3 INPUT FROM USER
int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a%b==0 && a%c==0){
        printf("Yes.");
    }
    else{
        printf("No.");
    }
    return 0;
}
