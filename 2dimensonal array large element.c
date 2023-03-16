#include<stdio.h>
int func(int a,int b)
{
    return a+b;
}
double funb(int x)
{
    int m=func(x*x,x*3);

        return sqrt(m);

}
int funa(int a)
{
    int y=funb(a*3);
    return func(y+1,a*2);

}

 int main()
{
    int a;
    a=func(10,20)+funb(100)+funa(30);
    printf("%d",a);
    return 0;



}
