#include<stdio.h>
int main()
{
int a[]={10,20,30,40,50};
int len=sizeof(a)/sizeof(a[0]);
for(int i=len-1;i>=0;i--)
{
 printf("%d\n",a[i]);

    //sum=sum+a[i];

}
return 0;

}
