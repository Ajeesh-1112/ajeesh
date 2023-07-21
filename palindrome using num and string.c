#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter the string=");
    char a[40];
    gets(a);
    int b,c,d=0;
    b=strlen(a)-1;
    c=0;
    while(b>c)
    {
        if(a[b--]!=a[c++])
        {
          d++;
        }
    }
    if(d==0)
    {
        printf("pal");
    }
    else{
        printf("not pal");
    }

}
