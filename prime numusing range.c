#include<stdio.h>
void main()
{
int n,beg,end,r,j,i,flag=0;
printf("enter the beg value:");
scanf("%d",&beg);
printf("enter the end value:");
scanf("%d",&end);
for(i=beg;i<=end;i++)
{
    {
        for(j=2;j<end;j++)
        {
         r=i%j;
        if(r==0)

       {
           break;
       }}
       if(i==j)
       {

        printf("%d\n",i);
        }}}}
/*if(flag==0)
{
    printf("it is prime ");
}
else{

    printf("not prime");
}

}*/

