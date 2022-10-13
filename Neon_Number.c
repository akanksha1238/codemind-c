#include<stdio.h>
int main()
{
    int n,rem,t,s=0;
    scanf("%d",&n);
    t=n*n;
    while(t>0)
    {
        rem=t%10;
        s+=rem;
        t=t/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}