#include <bits/stdc++.h>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    vector<int>v;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=1000;
    for(int i=0;i<n;i++)
    {
        if(c>a[i])
        {
            c=a[i];
        }
    }
    int g;
    for(int i=1;i<=c;i++)
    {
        g=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]%i==0)
            {
               g++; 
            }
        }
        if(g==n)
        {
        v.push_back(i);
        }
  }
  cout<<*max_element(v.begin(),v.end());
}