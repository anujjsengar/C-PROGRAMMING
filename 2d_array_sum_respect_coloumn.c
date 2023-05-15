//PROGRAM TO TAKE 2D ARRAY INPUT FROM USER AND PRINT OUTPUT IN MATRIX FORM AND CALCULATE SUM OF ARRAY ELEMENT RESPECT TO COLOUMN
#include <stdio.h>


int main()
{
    int a[4][4];
    int s=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("   %d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    for(int j=0;j<4;j++){
    for(int i=0;i<4;i++){
        s=s+a[i][j];
    }
    printf("%d\n",s);
    s=0;
    }
    return 0;
}
