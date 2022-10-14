#include<stdio.h>
int main()
{
    int n,rem,rev=0,t;
    scanf("%d",&n);
    t=n;
    if(n<0)
    {
        n=n*(-1);
    }
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(t<0)
    {
        printf("%d",rev*(-1));
    }
    else
    {
        printf("%d",rev);
    }
}