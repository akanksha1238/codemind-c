#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n;
    vector<int>v;
    int a=0,b=1;
    v.push_back(0);
    v.push_back(1);
    for(int i=2;i<=n;i++)
    {
       c=a+b;
       v.push_back(c);
       a=b;
       b=c;
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}