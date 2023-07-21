#include<stdio.h>
void main()
{
    int *p;
    int n;
    printf("enter the valuue of n :");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));


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

        scanf("%d",&p);
    }
     for(int i=0;i<n;i++)
     {

         printf("%d\n",p);

     }}



}
