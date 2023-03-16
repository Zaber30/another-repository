#include<stdio.h>
int main()
{
    int *p,a,b;
    a=8;
    b=6;
    p=&a;
    *p=*p*b;
    b=a+3;
    printf("%d\n%d\n%d\n%d\n",p,*p,a,b);
    return 0;
}
