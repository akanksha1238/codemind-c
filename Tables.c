#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d%d",&n,&r);
    for(int i=1;i<=r;i+=2)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}