#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int w;
    cin>>w;
    while(w--)
    {
int n,t;
cin>>n;
t=sqrt(n);
    
    if (n!=t*t)
    cout<<"False"<<endl;
    else
    cout<<"True"<<endl;
}
}