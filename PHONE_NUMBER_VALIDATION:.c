#include<stdio.h>
int main()
{
    long long int n,rev=0,rem;
    int d=0;
    scanf("%lld",&n);
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        d++;
        n=n/10;
    }
    if(rev%10==0 || d!=10)
    {
        printf("Invalid");
    }
    else{
        printf("Valid");
    }
}