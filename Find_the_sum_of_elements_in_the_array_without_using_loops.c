#include<iostream>
using namespace std;
int main()
{
    int i,n,ci=0;
    int a[n];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        ci=ci+a[i];
    }
    cout<<ci;
}