#include<stdio.h>
void main()
{
int a=10;
int *p1;
int **p2;
int ***p3;
p1=&a;
p2=&p1;
p3=&p2;
printf("%p\n",p1);
printf("%d\n",*p1);
printf("%d\n",**p2);
printf("%p\n",p2);
printf("%d\n",***p3);
printf("%p\n",p3);

}
