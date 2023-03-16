#include<stdio.h>
int with(int n)
{
    if(n==1)
    {
        return 1;
    }
    return (n+with(n-1));
}
int main()
{
    int n;
    scanf("%d",&n);
    int m=with(n);
    printf("%d",m);
}
