#include<stdio.h>
int main()
{
    int x=10,y=20;
    int p,q;
    p=prod(x,y);
    q=prod(prod,prod(x,2));
    printf("%d\n%d",p,q);
}
int prod(int a,int b)
{
    return(a*b);
}
