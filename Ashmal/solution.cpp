#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc=1;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<string>str(n);
        for(auto &i:str){
            cin>>i;
        }
        string ans;
        for(auto &i:str){
            if(ans.size()==0) ans+=i;
            else{
                if(ans+i<i+ans) ans+=i;
                else{
                    i+=ans;
                    ans=i;
                }
            }
        }
        cout<<ans<<"\n";

    }
    return 0;
}

// Problem link : https: // codeforces.com/problemset/problem/2180/B 
 