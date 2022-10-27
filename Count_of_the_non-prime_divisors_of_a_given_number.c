#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int fun(int n)
{
    if(n<=1)
    {
        return 0;
    }
    else
    {
        
        int k1=(int)sqrt(n)+1;
        for(int i=2;i<k1;i++)
        {
            if(n%i==0){
               return 0;
            }
        }
        return 1;
    }
}


int fun1(int m1)
{
    int s=0;
    int p=0;
    int m=m1;
    while(m!=0)
    {
        int g=m%10;
        p=p*10+g;
        m=m/10;
    }
    if(m1==p)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    
int t1,t2;
cin>>t1;
int c=0;
for(int i=1;i<=t1;i++)
{
    if(t1%i==0 and fun(i)==0)
    {
        c=c+1;
    }
}
cout<<c;
return 0;
}