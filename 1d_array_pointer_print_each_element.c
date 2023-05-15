//write a function and use pointer varaIABLE TO PRINT ELEMENT OF AN ARRAY WITHOURT EFFECTING AN ARRAY

#include<stdio.h>
void array_reverse(int *arr){
    for(int i=4;i>=0;i--){
            printf("%d ",arr[i]);
       
    }
}
void main(){
    int arr[5]={1,2,3,4,5};
    array_reverse(arr);
}
