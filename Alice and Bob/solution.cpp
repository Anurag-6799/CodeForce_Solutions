#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc=1;
    cin>>tc;
    while(tc--){
        int n, alice;
        cin>>n>>alice;
        vector<int>val(n);
        int cnt=0;
        for (auto &i : val)
        {
            cin >> i;
            if (i > alice)
                cnt++;
            else if (i < alice)
                cnt--;
        }

        cout << alice - 1 + 2 * (cnt > 0) << endl;
    }
}

// problem link : https: // codeforces.com/problemset/problem/2169/A