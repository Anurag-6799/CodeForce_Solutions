#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc=1;
    cin>>tc;
    while(tc--){
        int a,b,c;
        cin>>a>>b>>c;
        int mx=max(a,max(b,c));
        int mn=min(a,min(b,c));
        if(mx-mn<=10) {cout<<"check again"; return;}
        else{
              
        }
    }
}