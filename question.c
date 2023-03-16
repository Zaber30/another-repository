#include<stdio.h>
void main()
{
    char x[10]="F.Y.BSc.";
    char *p;
    int i=0;
    p=x;
    while(i!=10)
    {
        i=i+2;
        p++;
        printf("%c",*p);
    }
    return 0;


}
