#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    printf("enter two values to swap:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("values after swapping:");
    printf("%d%d\n",a,b);
    return 0;
}
