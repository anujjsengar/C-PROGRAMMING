#include <stdio.h>

void main()
{
    int a[10],f[20]={0};
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
    int x=a[0];
    for(int j=0;j<10;j++){
        if(x<a[j])
        x=a[j];
    }
    x++;
   
    for(int k=0;k<10;k++)
    f[a[k]]++;
    for(int m=0;m<10;m++){
        if(f[m]>1)
        printf("%d-%d\n",m,f[m]);
    }
}
