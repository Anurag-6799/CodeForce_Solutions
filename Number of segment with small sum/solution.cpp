#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc=1;
    // cin>>tc;
    while(tc--){
        long long n,target;
        cin>>n>>target;
        vector<long long>arr(n);
        for(auto &i:arr){
            cin>>i;
        }
        int l=0;
        long long sum=0,ans=0;
        for(int r=0;r<n;r++){
            sum+=arr[r];
            while(sum>target){
                sum-=arr[l];
                l++;
            }
            ans+=(r-l+1);
        }
        cout<<ans<<"\n";

    }
}

// problem link : https: // codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D
