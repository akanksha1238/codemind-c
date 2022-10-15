#include<stdio.h>
int main()
{
    int n,a,b,c,d=0;
    scanf("%d",&n);
    a=0;
    b=1;
    c=a+b;
    while(c<=n)
    {
        if(c==n)
        {
            printf("True");
            d++;
        }
        a=b;
        b=c;
        c=a+b;
    }
    if(d==0)
    {
        printf("False");
    }
    
}