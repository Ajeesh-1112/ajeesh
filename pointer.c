#include<stdio.h>
void main()
{
  /*  int a=5;
     int *p;
      p=&a;
  printf("%d\n",*p);
  printf("%p\n",&p);
    printf("%p\n",p);*/
    char *ptr;
    char string[]="nothing";
    ptr=&string;
    ptr+=4;//ptr=ptr+4
    printf("%s",ptr);

}
