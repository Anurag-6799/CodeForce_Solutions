#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc=1;
    cin>>tc;
    while(tc--){
        int len;
        cin>>len;
        string str;
        cin>>str;
        char last_char = str[str.size()-1];
        int count=0;
        for(auto&i:str){
            if(i==last_char) count++;
        }
        cout << str.size()-count<<"\n";
    }
    return 0;
}

// problem link : https: // codeforces.com/problemset/problem/2166/A 