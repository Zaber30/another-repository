#include<stdio.h>
int returns(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n+(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);

    printf("%d",returns(n));
}
