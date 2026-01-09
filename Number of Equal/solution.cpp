#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>a(n), b(m);
    for(auto &i:a){
        cin>>i;
    }
    for(auto &i:b){
        cin>>i;
    }
    int i = 0;
    int j = 0;
    long long ans = 0;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            long long countA = 0;
            long long countB = 0;
            int currentVal = a[i];

            while (i < n && a[i] == currentVal)
            {
                countA++;
                i++;
            }

            while (j < m && b[j] == currentVal)
            {
                countB++;
                j++;
            }
            ans += (countA * countB);
        }
    }

    cout << ans << "\n";
    return 0;
}