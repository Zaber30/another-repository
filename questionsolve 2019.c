#include<stdio.h>
int strlen(char s[])
{
    int n=0;
    for(;*s!='\0';s++)
    {
        n++;
    }
    return n;
}

int main()
{
    char s[30];
    scanf("%s",s);

    printf("%d",strlen(s+2));
}
