#include<stdio.h>
int main()
{
    int n,rem,s=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        s+=rem*rem;
        n=n/10;
        if(n==0 && s>9)
        {
            n=s;
            s=0;
        }
    }
    if(s==1 || s==7)
    {
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}