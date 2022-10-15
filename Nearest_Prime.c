#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        int n,a,b;
        scanf("%d",&n);
        int is_prime;
        a=n;
        while(1)
        {
            is_prime=0;
            for(int i=2;i<a;i++)
            {
                if(a%i==0)
                {
                    is_prime=1;
                    break;
                }
            }
            if(is_prime==0)
            {
                break;
            }
            else
            {
                a=a+1;
            }
        }
        b=n;
        while(1)
        {
            is_prime=0;
            for(int i=2;i<b;i++)
            {
                if(b%i==0)
                {
                    is_prime=1;
                    break;
                }
            }
            if(is_prime==0)
            {
                break;
            }
            else
            {
                b=b-1;
            }
        }
    if((a-n)>(n-b))
    {
        printf("%d
",b);
    }
    else if((a-n)==(n-b))
    {
        printf("%d
",b);
    }
    else
    {
        printf("%d
",a);
    }
    }
}