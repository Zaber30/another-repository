#include<stdio.h>
int main()
{
    int n1=5,n2=8,temp;
    while(n2!=0)
    {
        temp=n1%n2;
        n1=n2;
        n2=temp;
    }
    printf("%d",n1);

}
