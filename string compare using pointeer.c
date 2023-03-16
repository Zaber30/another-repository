#include<stdio.h>
int strcp(char *s,char*t)
{
    int i;
    for(;*s==*t;s++,t++)
    {
        if(*s=='\0');
        {
            return 0;
        }
    }
    return *s-*t;
}
int main()
{
    char a[100],b[100],*s,*t;
    scanf("%s",a);
    scanf("%s",b);
    s=&a[0];
    t=&b[0];
    if(strcp(s,t)==0)
    {
        printf("equal\n");
    }
    else if(strcp(s,t)>0)
    {
        printf("s is greater ");
    }
    else
    {
        printf("t is greater");
    }
}

