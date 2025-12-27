#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == b and b == c and c == d)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}