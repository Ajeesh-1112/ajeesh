#include<stdio.h>
void main()
{
    int *p;
    int n;
    printf("enter the valuue of n :");
    scanf("%d",&n);
    p=(int*)calloc (n,sizeof(int));


    if(p==NULL)
    {

        printf("the memory is not allocated");
        exit(0);
    }
    else
    {

        printf("the alloacated memory is :");
        for(int i=0;i<n;i++)

    {

        scanf("%d",&p[i]);
    }
     for(int i=0;i<n;i++)
     {

         printf("%d\n",p[i]);

     }}



}
