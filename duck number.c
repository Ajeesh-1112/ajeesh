#include<stdio.h>
void main()
{

    int n,i=10,j,a,m;
    printf("the value of n is:");
    scanf("%d",&n);
    while(i<=n)
    {
        j=i;
        a=0;
        while(j!=0)
        {

            m=j%10;

          if(m==0)
          {
              a++;

          }
          j=j/10;
        }

          if(a!=0)
          {
              printf("\n%d",i);
          }
       i++;
        }




    }


