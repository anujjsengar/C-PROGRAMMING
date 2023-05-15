//write a non Argumented non return function to find number os even or odd
#include <stdio.h>
void even();
int main()
{
    even();
    return 0;
}
void even(){
    int a;
    scanf("%d",a);
    if(a%2==0){
        printf("EVEN NUMBER")
    }
    else{
        printf("ODD NUMBER")
    }
}
