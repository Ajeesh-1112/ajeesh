#include<stdio.h>
int sub(int m,int n,int o);
int add(int a,int b);
void main()
{

    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int sum1,sum2;
    sum1=sub(x,y,z);
    sum2=add(x,y);
    printf("%d%d",sum1,sum2);
    //return 0;
}

int add(int a,int b)

{
  return a+b;
}
int sub(int m,int n,int o)
{
    return m+n+o;
}


