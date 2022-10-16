#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,fact=1;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("%d
",fact);
    }
}