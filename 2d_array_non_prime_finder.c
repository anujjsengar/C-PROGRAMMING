//program to check every element and find non prime element from 2d array(matrix) using function
#include <stdio.h>
void prime_matrix_check(int a[3][3]){
    int s=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            s=0;
            for(int x=2;x<a[i][j];x++){
                if(a[i][j]%x==0){
                    s=s+1;
                    break;
                }
            }
            if(s!=0)
            printf("%d ",a[i][j]);
        }
       
    }
}

void main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    prime_matrix_check(arr);
}
