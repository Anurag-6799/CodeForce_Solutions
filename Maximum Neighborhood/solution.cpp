#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc=1;
    cin>>tc;
    while(tc--){
        long long n;
        cin >> n;
        if (n == 1)
        {
            cout << "1\n";
        }
        else if (n == 2)
        {
            cout << "9\n";
        }
        else if (n < 5)
        {
            cout << (4 * n * n - n - 4) << "\n";
        }
        else
        {
            cout << (5 * n * n - 5 * n - 5) << "\n";
        }
    }
}