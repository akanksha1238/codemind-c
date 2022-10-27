#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,e;
    cin>>s;
    cin>>e;
    for(int i=s;i<=e;i++){
        int c = 0;
        int t =i;
        while(t>0){
         int r = t%10;
         if (r == 0 || i%r != 0) {
            c = 1;
            break;
         }
         t /= 10;
        }
        if(c==0){
            cout<<i<<" ";
        }
    }
    return 0;
}