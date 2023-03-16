#include<stdio.h>
int main()
{
    int i=4,j=5,k;
    ++i;
    k=i;
    j=j+k+(i++);
    --j;
    printf("%d%d%d",i,j,k);
    return 0;
}
