#include<stdio.h>
void main()
{

    int a[]={1,2,0,-3,4,0,5,-1,-3,-6,-7},k=0;
    int len=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<len;i++)

    {
        if(a[i]>0)
        {
            printf("%d ",a[i]);
        }

    }
     printf("\n\n");
    for(int i=0;i<len;i++)
    {

        if(a[i]<0)
        {

            printf("%d ",a[i]);
        }
    }
    printf("\n");
 for(int i=0;i<len;i++)
    {

        if(a[i]==0)
        {

            k++;
        }
    }
     printf("%d",k);




}
