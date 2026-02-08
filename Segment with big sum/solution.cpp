#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    // cin>>tc;
    while(tc--){
        long long n, s;
        cin>>n>>s;
        vector<long long>arr(n);
        for(auto &i:arr){
            cin>>i;
        }
        int ans = n+1, l = 0, r = 0;
        long long sum=0;
        for(int r=0;r<n;r++){
            sum+=arr[r];
            if(sum>=s){
                while(sum>=s and l<=r){
                    ans = min(ans,(r-l+1));
                    sum-=arr[l];
                    l++;
                }
            }
        }
        if(ans == n+1){
            cout<<-1<<"\n";
        }
        else
            cout<<ans<<"\n";
    }
    return 0;
}