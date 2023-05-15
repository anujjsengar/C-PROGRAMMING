// program to increase 2d array(matrix) every element by 1
#include <stdio.h>
int increment(int a[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a[i][j]=a[i][j]+1;
        }
    }
    return 0;
}

void main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    increment(arr);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
