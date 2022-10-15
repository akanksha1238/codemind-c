#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int is_prime=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            is_prime=1;
            break;
        }
    }
    if(is_prime==0)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}