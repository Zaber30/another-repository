#include<stdio.h>
int main()
{
    int arr[]={4,5,6};
    int *ptr,j;
    ptr=arr;
    for(j=0;j<3;j++)
    {
        printf("%d\n",*ptr++);
    }
}
