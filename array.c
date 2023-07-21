#include <stdio.h>
int main()
{
  int a[]={10,20,30,40};
  //printf("%d",a[2]);
  //int len=*a;
  int len=sizeof(a)/sizeof(a[0]);
 // for(int i=0;i<len;i--)
 printf("Length: %d\n",len);
 printf("Length: %d\n",len-1);
   for(int i=len-1;i>=0;i--)
  {
      printf("%d\n",a[i]);
  }

  return 0;}

