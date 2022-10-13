#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,rem,rev=0,t;
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
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}