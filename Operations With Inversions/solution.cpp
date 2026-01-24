#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc=1;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        stack<int>st;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            if(st.empty()) st.push(val);
            else{
                if(st.top()>val){
                    continue;
                }
                else{
                    st.push(val);
                }
            } 
        }
        cout<< n-st.size()<<"\n";
    }
    return 0;
}

// problem link : https: // codeforces.com/problemset/problem/2176/A 