#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc=1;
    cin>>tc;
    while(tc--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans = 0;
        int must_stay_awake_until = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                must_stay_awake_until = i + k;
            }
            else
            {
                if (i > must_stay_awake_until)
                {
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

// problem link : https: // codeforces.com/problemset/problem/2173/A