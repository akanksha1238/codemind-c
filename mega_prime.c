#include<stdio.h>
int main()
{
    int n,c=0,d=0,r;
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
        while(n>0)
        {
            r=n%10;
            d++;
            if(r==2||r==3||r==5||r==7)
            {
                c++;
            }
            n=n/10;
        }
        if(d==c)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
}