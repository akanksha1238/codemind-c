#include<bits/stdc++.h>
using namespace std;

void findfront(int n,int &frontp)
{
  int c=0;
  for(int i=n;i<1746;i++)
  {
    for(int j=1;j<=i;j++)
    {
      if(i%j==0)
      {
        c++;
      }
    }
    if(c==2)
    {
      frontp=i;
      //cout<<frontp<<" ";
      break;
    }
    c=0;
  }
}


void findback(int n,int &backp)
{
  int c=0;
  for(int i=n;i>=1;i--)
  {
    for(int j=1;j<=i;j++)
    {
      if(i%j==0)
      {
        c++;
      }
    }
    if(c==2)
    {
      backp=i;
      //cout<<backp<<" ";
      break;
    }
    c=0;
  }
}





int main()
{
  int n;
  cin>>n;
  
  int frontp,backp;
  
  findfront(n,frontp);
  
  findback(n,backp);
  
  
  int d1,d2;
  d1=n-backp;
  d2=frontp-n;
  if(d1>d2)
  {
    cout<<d2;
  }
  else
  {
    cout<<d1;
  }
  }