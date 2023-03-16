#include<stdio.h>
int main()
{
    FILE *ptr,*wptr;
    ptr=fopen("\\input.txt","r");
    wptr=fopen("\\output.txt","w");
    int n,i;
    fscanf(ptr,"%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        fscanf(ptr,"%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        fprintf(wptr,"%d",a[i]);
    }
    fclose(ptr);
    fclose(wptr);



}

