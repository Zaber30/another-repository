#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,*a,n;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    /*
    a=realloc(a,(n+5)*sizeof(int));
    for(i=0;i<n+5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n+5;i++)

    {
        printf("%d",a[i]);
    }*/


}
