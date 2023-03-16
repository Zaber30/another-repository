#include<stdio.h>
void minimum(int a[],int len,int *min)
{
    *min=a[0];
    int i;
    for(i=1;i<len;i++)
    {
        if(a[i]<*min)
        {
            *min=a[i];
        }
    }
}
int main()
{
    int n,min,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    minimum(a,n,&min);
     printf("%d",min);


}
