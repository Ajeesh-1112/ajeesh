#include<stdio.h>
void main()
{
  int  n,i,s,j;
  printf("enter n value:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
   {
      for(s=0;s<n-i-1;s++)
      {
      printf("  ");
      }
      for(j=0;j<n+i-s;j++)
      {
          printf("* ");
      }
    printf("\n");
  }
}
