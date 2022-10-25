#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    if(m%2==0 || n%2==0)
    {
        printf("Player 1");
    }
    else
    {
        printf("Player 2");
    }
}