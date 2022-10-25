#include <iostream>
#include<string>
#include <cmath>
using namespace std;
int main()
{
    int n,d,n1,n2,r=0,m;
    cin>>n>>m;
    n1=n;
    n2=n;
    d=(int)log10(n)+1;
    int a[d];
    int i=0;
    while(n>0)
    {
        int k=n%10;
        r=r*10+k;
        n=n/10;
    }
    while(r>0)
    {
        int g=r%10;
        a[i]=g;
        r=r/10;
        i++;
    }
    string s1,s2;
    for(int i=0;i<m;i++)
    {
    s1=s1+to_string(a[i]);
    s2=s2+to_string(a[d-m+i]);
    }
    cout<<abs(stoi(s1)-stoi(s2));
}