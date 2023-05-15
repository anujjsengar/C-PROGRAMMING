//write a function using pointer varaible to pass an array and find the sum of its element of an array
#include<stdio.h>
int sum_array(int *arr){
    int s=0;
    for(int i=0;i<5;i++){
        s=s+arr[i];
    }
    return s;
}
void main(){
    int arr[5]={1,2,3,4,5};
    printf("%d",sum_array(arr));
}
