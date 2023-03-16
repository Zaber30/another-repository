#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("a&b operation %d\n",a&b);
    printf("a|b operation %d\n",a|b);
    printf("a^b operation %d\n",a^b);
    int s;
    scanf("%d",&s);
    printf("a>>n operation :%d\n",a<<s);
    printf("a<<n operation :%d\n",a>>s);
    printf("~a operation :%d\n",~a);
    return 0;

}
