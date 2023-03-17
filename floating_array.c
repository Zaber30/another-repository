#include<stdio.h>
int main()
{
   char string[]="withoutpractise";
   char *ptr;
   ptr=string;
   ptr+=6;
   printf("%s",ptr);
   return 0;

}
