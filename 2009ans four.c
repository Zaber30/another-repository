#include<stdio.h>
int c[10]={0,9,8,7,6,5,3,2,1};
int main()
{
    int a,b=0;
    for(a=0;a<10;++a)
    {
        if((c[a]%3%2)==1)
        {
            b=+c[a];
        }
    }
    printf("%d",b);


   return 0;


}
