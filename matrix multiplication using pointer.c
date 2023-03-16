#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a,r1,c1,r2,c2;
    int i,j,k;
    int **b;
    printf("enter the number of row and column for first matrix:\n");
    scanf("%d%d",&r1,&c1);
    printf("enter the number of row and column for second matrix:\n");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
    {
        printf("invalid\n");
    }
    else
    {
        a=(int**)malloc(r1*sizeof(int*));
        for(i=0;i<r1;i++)
        {
            a[i]=(int*)malloc(c1*sizeof(int));
        }
        b=(int**)malloc(r2*sizeof(int*));
        for(j=0;j<r2;j++)
        {
            b[j]=(int*)malloc(c2*sizeof(int));
        }
        printf("enter the element of first matrix:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }

        }
        printf("enter the element of second matrix:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        int product[100][100],sum=0;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<r2;k++)
                {
                    sum+=a[i][k]*b[k][j];
                }
                product[i][j]=sum;
                sum=0;
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ",product[i][j]);
            }
            printf("\n");

        }
    }
}
