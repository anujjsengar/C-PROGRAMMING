//function using pointer variable to find factroial of each element of an array and replace with corresponding element
#include<stdio.h>
void factorial_array(int *arr){
    int s=0;
    for(int i=0;i<5;i++){
        s=1;
        for(int j=1;j<=arr[i];j++){
            s=s*j;
        }
        arr[i]=s;
    }
}
void main(){
    int arr[5]={1,2,3,4,5};
    factorial_array(arr);
    for(int i=0;i<5;i++)
    printf("%d ",arr[i]);
}
