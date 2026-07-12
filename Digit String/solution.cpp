#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin>>tc;
    while (tc--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int find13 = 0;
        for (char c : s)
        {
            if (c == '1' || c == '3')
            {
                find13++;
            }
        }
        int stk = find13, crr_2 = 0, crr13 = 0;
        for (char c : s)
        {
            if (c == '2')
                crr_2++;
            if (c == '1' || c == '3')
                crr13++;
            int kept = crr_2 + (find13 - crr13);
            stk = max(stk, kept);
        }
        cout << n - stk << "\n";
    }
    return 0;
}

// problem link : https://codeforces.com/problemset/problem/2230/B