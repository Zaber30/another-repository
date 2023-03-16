#include<stdio.h>
int a=100,b=200;
int funct1(int c);
void main()
{
    int count, c;
    for(count=1;count<=5;++count)
    {
        c=4*count*count;
        printf("%d\n",funct1(c));


    }

}
int funct1(int x)
{
    int c;
    c=(x<50)?(a+x):(b-x);
    return c;
}
