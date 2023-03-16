#include<stdio.h>
#define row 3
#define column 4
int main()
{
    int z[row][column]={1,2,3,4,5,6,7,8,9,10,11,12};
    int a,b,c;
    for(a=0;a<row;a++)
    {
        c=999;
        for(b=0;b<column;++b)
            if(z[a][b]<c)
            c=z[a][b];
        printf("%d ",c);
    }

}
