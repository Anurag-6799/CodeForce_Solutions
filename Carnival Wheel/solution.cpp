#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc=1;
    cin>>tc;
    const int MAX_SIZE = 5007;
    while(tc--)
    {
        long l, a, b;
        cin >> l >> a >> b;
        bool visited[MAX_SIZE] = {false};
        long curr = a;
        long mx = -1;
        for (long i = 0; i <= l; i++)
        {
            if (visited[curr])
            {
                break;
            }
            visited[curr] = true;
            if (curr > mx)
            {
                mx = curr;
            }
            curr = (curr + b) % l;
        }
        cout << mx << "\n";
    }
}

// problem link : https: // codeforces.com/problemset/problem/2180/A