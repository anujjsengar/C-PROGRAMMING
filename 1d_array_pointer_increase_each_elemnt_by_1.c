//write a c function using pointer variable to increase by 1 to each element of an array
#include<stdio.h>
void element_increase(int *arr){
    for(int i=0;i<5;i++){
        arr[i]=arr[i]+1;
        }
}
void main(){
    int arr[5]={1,2,3,4,5};
    element_increase(arr);
    for(int i=0 ; i<5;i++){
        printf("%d ",arr[i]);
    }
}
