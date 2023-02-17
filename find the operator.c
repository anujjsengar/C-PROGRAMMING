#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Find The Operator
//You are given two integers A and B. Your friend have applied some operator on those integers and produced some result R. You have to find the operator. Note: 1. Operator can be one of the + - / * % only. 2. In case of division compare only quotient. 3. If operator is not commutative, you have to check every possible combination of operands with operator.

int main() {
    int a,b,r;
    scanf("%d%d%d",&a,&b,&r);
    if(a+b==r){
        printf("+");
    }
    if(a-b==r){
        printf("-");
    }
    if(a*b==r){
        printf("*");
    }
    if(a%b==r){
        printf("%%");
    }
    if(a/b==r){
        printf("/");
    }
    return 0;
}
