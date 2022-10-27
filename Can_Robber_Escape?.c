#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a1,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            c++;
        }
    }
    if(c<=2)
    {
        cout<<("YES");
        
    }
    else
    {
        cout<<("NO");
    }
}