#include<stdio.h>
void main()
{

    int n,s,rem=0,rev,ss;
    printf("enter the num n:");
    scanf("%d",&n);
    s=n*n;
    printf("%d",s);
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;

    }
    printf("\n%d",rev);

    ss=rev*rev;
    int j,rem1,rev1=0;
     while(ss!=0)
     {

        rem1=ss%10;
        rev1=rev1*10+rem1;
         ss/=10;
     }
     printf("\n%d\n",rev1);
     if(s==rev1)
     {
         printf(" adams num");
     }
     else{

        printf("not an adams");
     }

    }







