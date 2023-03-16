#include<stdio.h>
#include "file.h"
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int summition=sum(a,n);
    printf("%d",summition);
}
