#include<stdio.h>
int main()
{
    int n,rev=0,rem;
    int t;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}