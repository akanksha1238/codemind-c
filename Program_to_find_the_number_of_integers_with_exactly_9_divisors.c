#include<iostream>
using namespace std;
int main()
{
    int n,c,d=0,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c=c+1;
            }
        }
        if(c==9)
        {
            cout<<i<<" ";
            d++;
        }
    }
    printf("
");
    cout<<"Total="<<d;
}