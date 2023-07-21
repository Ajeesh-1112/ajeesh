#include<stdio.h>
#define n 30
int c=n*n;
//#undef n
void main()
{

   //printf("%d",c);
   #if (c ==10)

       printf("helo");
     #else
       printf("ollla");
   #endif
}
