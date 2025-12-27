#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc=1;
    cin>>tc;
    while(tc--){
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        map<char, int> m1, m2;
        for (auto i : s)
            ++m1[i];
        for (auto i : t)
            ++m2[i];
        int f = 0;
        for (auto [k, v] : m1)
        {
            if (m2[k] != v)
            {
                f = 1;
                break;
            }
        }
        if (f)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}