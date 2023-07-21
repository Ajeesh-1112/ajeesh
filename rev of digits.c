#include<stdio.h>
void main()
{

    int a,rev=0,r,n;
    int c=0;
    printf("enter the value of a:");
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
        c++;

    }
    printf("%d\n",rev);
    printf("%d",c);
}
