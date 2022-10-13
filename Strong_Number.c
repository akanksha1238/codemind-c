#include<stdio.h>
int main()
{
    int n,fact,rem,s=0,t;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        rem=n%10;
        fact=1;
        for(int i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        s+=fact;
        n=n/10;
    }
    if(s==t)
    {
        printf("The number %d is a strong number",t);
    }
    else
    {
        printf("The number %d is not a strong number",t);
    }
}