#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,n1=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        n1= __gcd(a[i],n1);
    
    }
    cout<<n1;
    
}