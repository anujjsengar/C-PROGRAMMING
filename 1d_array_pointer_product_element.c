//function using pointer variable to find product of element of an array
#include<stdio.h>
int product_array(int *arr){
    int s=1;
    for(int i=0;i<5;i++){
        s=s*arr[i];
    }
    return s;
}
void main(){
    int arr[5]={1,2,3,4,5};
    printf("%d",product_array(arr));
}
