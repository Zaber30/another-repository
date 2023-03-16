#include<stdio.h>
double average(double a,double b);
int main(void)
{
    double x,y,z;
    printf("enter the number\n");
    scanf("%lf%lf%lf",&x,&y,&z);
    printf("average of %lf and %lf: %lf\n",x,y,average(x,y));
    printf("average of %lf and %lf: %lf\n",y,z,average(y,z));
    printf("average of %lf anf %lf: %lf\n",z,x,average(z,x));
    return 0;

}
double average (double a,double b)
{
    static int count=0;
    count++;
    printf("%d",count);
    return (a+b)/2;

}
