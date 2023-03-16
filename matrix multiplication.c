#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("enter the row and column numbero first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("enter the row and colmn number of second matrix: ");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
    {
        printf("invalid\n");

    }
    else
    {
        int a[r1][c1];
        int i,j;
        printf("enter the element for first matrix element:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        int b[r2][c2];
        int p,q;
        printf("enter the element for second matrix:\n");
        for(p=0;p<r2;p++)
        {
            for(q=0;q<c2;q++)
            {
                scanf("%d",&b[p][q]);
            }
            printf("\n");
        }
        int product[100][100];
        int c=0,sum=0;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(c=0;c<c1;c++)
                {
                    sum+=a[i][c]*b[c][j];
                }
                product[i][j]=sum;
                sum=0;

            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d ",product[i][j]);
            }
        }

    }
    return 0;
}
