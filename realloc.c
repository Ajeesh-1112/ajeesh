
#include<stdio.h>
void main()
{
    int* p;
    int n,m;
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

        scanf("%d",&p[i]);
    }
     for(int i=0;i<n;i++)
     {

         printf("%d  ",p[i]);

     }}
    printf(" the memory are" );
    scanf("%d",&m);
    p=realloc(p,m*sizeof(int));
    if(p==NULL)
    {

        printf("the memory is not allocated");
        exit(0);
    }
    else
    {

        printf("the alloacated memory is :");
        for(int i=n;i<m;i++)

    {

        scanf("%d",&p[i]);
    }
     for(int i=0;i<m;i++)
     {

         printf("%d  ",p[i]);
     }}

     free(p);



     }




