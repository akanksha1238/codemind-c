#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int n1 = sizeof(a) / sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        a1=count(a,a+n,a[i]);
        if(a1==1)
        {
            cout<<(a[i]);
            break;
        }
    }
}
