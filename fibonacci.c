#include<stdio.h>
void main()
{

    int n,a=0,b=1,c,i=2;
    printf("enter the n value");
    scanf("%d",&n);
    printf("%d %d",a,b);
    //for(int i=3;i<=n;i++)
    while(i<=n)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d",c);
        i=i+1;
        /*i++;
        a=a+1*/

    }
}
