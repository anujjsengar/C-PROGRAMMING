//write a program using pointer variable in c to change the initial value of an array using function
#include<stdio.h>

void func(int *arr){
    for(int i=0;i<10;i++){
        int x=0;
        scanf("%d",&x);
        arr[i]=arr[i]+x;
    }
}

void main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    func(arr);
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
