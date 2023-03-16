#include<stdio.h>
int main()
{
    int z[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int a,b,c;
    for(b=0;b<4;b++)
    {
        c=0;
        for(a=0;a<3;a++)

            if(z[a][b]>c)

                c=z[a][b];
                printf("%d\n",c);


    }
}
