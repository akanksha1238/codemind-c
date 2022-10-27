#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,s=0,r=0;
    cin>>n;
    int a[30];
    for(int i=0;i<20;i++)
    {
        a[i]=(int)pow(2,i);
    }
    for(int i=0;i<20;i++)
    {
        if(a[i]==n)
        {
            cout<<0;
            break;
        }
        else if(a[i]>n)
        {
            s=abs(n-a[i]);
            r=abs(n-a[i-1]);
            if(s>r)
            {
                cout<<r;
                break;
            }
            else
            {
                cout<<s;
                break;
            }
    }   }
}