#include <bits/stdc++.h>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[3]={2,3,5};
    for(int i=0;i<3;i++)
    {
        while(n%a[i]==0)
        {
            n=n/a[i];
        }
    }
    if(n==1)
    {
        cout<<"Ugly Number";
    }
    else
    {
        cout<<"Not Ugly Number";
    }
}