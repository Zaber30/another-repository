#include<stdio.h>
int funct1(int a);
int funct2(int a);
void main()
{
   int  a=0,b=1,count;
    for(count=1;count<=5;++count)
    {
        b+=funct1(a)+funct1(a);
        printf("%d\n",b);


    }
}
int funct1(int a)
{
    int b;
    b=funct2(a);
    return(b);

}
int funct2(int a)
{
    static int b=1;
    b+=1;
    return (b+a);
}
