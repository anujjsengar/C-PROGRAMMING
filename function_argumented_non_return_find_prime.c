//write argumented non return function to find the prime number between a range
#include <stdio.h>
void prime_list(int x, int y);
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    prime_list(a,b);
    return 0;
}
void prime_list(int x, int y){
    int s=0;
    for(int i=x+1;i<y;i++){
        s=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                s=1;
            }
        }
    if(s==0){
        printf("%d  ",i);
    }
    }
}
