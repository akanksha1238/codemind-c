#include <bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n,e=0;
    cin>>n;
    int d=(int)log10(n)+1;
    int a[d];
    while(n>0)
    {
        int i=0;
        a[i]=n%10;
        n=n/10;
    }
    for(int i=0;i<d;i++)
    {
        int g=count(a,a+d,a[i]);
        if(g==1)
        {
            e++;
        }
    }
    if(d==e)
    {
        cout<<"Unique Number";
    }
    else
    {
        cout<<"Not Unique Number";
    }
}