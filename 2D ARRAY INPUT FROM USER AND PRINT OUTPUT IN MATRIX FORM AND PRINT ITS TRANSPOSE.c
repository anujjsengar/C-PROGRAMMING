//PROGRAM TO TAKE 2D ARRAY INPUT FROM USER AND PRINT OUTPUT IN MATRIX FORM AND PRINT ITS TRANSPOSE

#include <stdio.h>

void main()
{
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("  %d",a[i][j]);
        }
        printf("\n");
       
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("  %d",a[j][i]);
        }
        printf("\n");
}
}
