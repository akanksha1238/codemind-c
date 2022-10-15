#include<stdio.h>
int main()
{
    int n,a[20],t;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(int j=1;j<n;j++)
    {
        if(a[0]<a[j])
        {
            a[0]=a[j];
        }
    }
    for(int i=0;i<n;i++)
    {
        if((a[i]+t)>=a[0])
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}