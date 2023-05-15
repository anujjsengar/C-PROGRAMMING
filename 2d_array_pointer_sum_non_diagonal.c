//sum of non diagonal element of an 2d array matrix using a function
#include <stdio.h>
int sum_non_diagonal(int a[3][3]){
    int s=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i!=j)
            s=s+a[i][j];
        }
    }
    return s;
}

void main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("%d",sum_non_diagonal(arr));
}
