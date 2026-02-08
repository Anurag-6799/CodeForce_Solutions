#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc=1;
    // cin>>tc;
    while(tc--){
        int n;
        long long s;
        cin >> n >> s;

        vector<int> arr(n);
        for (auto &i : arr)
        {
            cin >> i;
        }

        int ans = 0;
        int l = 0;
        long long sum = 0;
        for (int r = 0; r < n; r++)
        {
            sum += arr[r];
            while (sum > s)
            {
                sum -= arr[l];
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        cout<<ans<<'\n';
    }
    return 0;
}

// problem link : https: // codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A