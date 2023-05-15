//PROGRAM TO TAKE 2D ARRAY INPUT FROM USER AND PRINT OUTPUT IN MATRIX FORM AND PRINT ITS NON DIAGONAL ELEMENT IN FORM OF NON DIAGONAL

#include <stdio.h>

int main()
{
    int a[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("   %d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i!=j){
                printf(" %d",a[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
