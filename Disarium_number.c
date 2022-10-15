#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,d=0,r,s=0;
    scanf("%d",&n);
    int t=n,m=n;
    while(n>0)
    {
        rem=n%10;
        d+=1;
        n=n/10;
    }
    while(t>0)
    {
        r=t%10;
        s+=round(pow(r,d));
        t=t/10;
        d--;
    }
    if(s==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}