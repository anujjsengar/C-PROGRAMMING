//write a argumented non return function to find the greater number between two number
#include <stdio.h>
void find_greater(int a, int b);

int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    find_greater(x,y);
    return 0;
}
void find_greater(int a,int b){
    if(a>b){
        printf("%d IS GREATER THAN  %d",a,b);
    }
    else if(a==b){
        printf("%d IS EQUAL TO  %d",a,b);
    }
    else{
        printf("%d IS GREATER THAN  %d",b,a);
    }
}
