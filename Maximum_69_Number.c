#include <bits/stdc++.h>
#include<string>
#include <cmath>
using namespace std;
int main()
{
    string n;
    int i;
    cin>>n;
    int h=n.length();
    for(i=0;i<h;i++)
    {
        if(n[i]=='6')
        {
            n[i]='9';
            break;
        }
    }
    cout<<n;
}