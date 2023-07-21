#include<stdio.h>
int main()
{
int a[]={10,20,30,40,50};
int i,sum=0;
int len=sizeof(a)/sizeof(a[0]);
for(i=0;i<=len-1;i++)
{

    sum=sum+a[i];

}
 printf("%d\n",sum);

}
