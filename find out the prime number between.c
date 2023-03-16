#include<stdio.h>
int main()
{
    int a[1002]={0},b[500];
    int i,j,k ,n=1000;
    for(i=2;i*i<=n;i++)
    {
        if(a[i]==0)
        {
            for(j=i*i;j<=n;j=j+i)
            {
                a[j]=1;
            }
        }
    }
    for(i=2;i<=n;i++)
    {
        if(a[i]==0)
        {
            printf("%d\n",i);
        }
    }


}
