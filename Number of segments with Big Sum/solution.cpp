#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc=1;
    // cin>>tc;
    while(tc--){
        long long n,s;
        cin>>n>>s;
        vector<long long>arr(n);
        for(auto &i:arr){
            cin>>i;
        }
        long long sum=0,l=0,count=0;
        for(int r=0;r<n;r++){
            sum+=arr[r];
            while(sum>=s and l<=r){
                count+=(n-r);
                sum-=arr[l];
                l++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}

// problem link : https: // codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D 