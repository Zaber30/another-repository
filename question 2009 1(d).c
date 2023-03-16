#include<stdio.h>
int main()
{
    int x=10;
    int y=20;
    int p,q;
    p=prod(x,y);
    q=prod(p,prod(x,2));
    printf("%d\n%d\n",p,q);

}
int prod(int a,int b)
{
    return a*b;
}
