// program to find sum of all elemt of an array
#include <stdio.h>
int sum(int a[3][3]){
    int s=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            s=s+a[i][j];
        }
    }
    return s;
}

void main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("%d",sum(arr));
}
