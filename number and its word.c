#include <stdio.h>
/*Given a positive integer n denoting , do the following:

If n<10, print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
If ,n>9 print Greater than 9*/
int main(){
    int a;
    scanf("%d",&a);
    if(a==1){
        printf("one");
    }
    else if(a==2){
        printf("two");
    }
    else if(a==3){
        printf("three");
    }
    else if(a==4){
        printf("four");
    }
    else if(a==5){
        printf("five");
    }
    else if(a==6){
        printf("six");
    }
    else if(a==7){
        printf("seven");
    }
    else if(a==8){
        printf("eight");
    }
    else if(a==9){
        printf("nine");
    }
    else if(a==0){
        printf("zero");
    }
    else{
        printf("Greater than 9");
    }
    return 0;    
}
