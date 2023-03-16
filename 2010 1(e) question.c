#include<stdio.h>
int functl(int n);
int main()
{
    int n=10;
    printf("%d",functl(n));

}
int functl(int n)
{
    if(n>0)
    {
        return(n+functl(n-2));
    }
}
