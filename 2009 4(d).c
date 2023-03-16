#include<stdio.h>
int main()
{
    char u,v='A';
    char *pu,*pv=&v;
    *pv=v+1;
    u=*pv+1;
    pu=&u;
    printf("%c\n",*pv);
    printf("%c\n",u);
    printf("%c\n",*pu);
}
