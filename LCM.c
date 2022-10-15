#include<stdio.h>
int main()
{
    int a,b,p,gcd;
    scanf("%d%d",&a,&b);
    p=a*b;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    gcd=a;
    printf("%d",p/gcd);
}