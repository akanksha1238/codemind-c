#include<stdio.h>
int main()
{
    int n,p=1,rem,s=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        s+=rem;
        p*=rem;
        n=n/10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}