// PROGRAM TOTAKE INPUT OF TWO 2D ARRAY AND PRINT ARRAY EQUAl to sum of two array.
#include <stdio.h>

int main()
{
    int a[2][2];
    int b[2][2];
    int s[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("   %d",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("   %d",b[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            s[i][j]=a[i][j]+b[i][j];
        }
        printf("\n");
        printf("\n");
        printf("\n");
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("   %d",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
