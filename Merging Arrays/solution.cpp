#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    vector<int>arr1(a);
    vector<int>arr2(b);
    vector<int> ans;
    for(int i=0;i<a;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<b;i++){
        cin>>arr2[i];
    }
    int p1=0, p2=0;
    while(p1<a or p2<b){
        if(p1<a and p2<b){
            if(arr1[p1]<=arr2[p2]){
                ans.push_back(arr1[p1]);
                p1++;
            }
            else{
                ans.push_back(arr2[p2]);
                p2++;
            }
        }
        else if(p1<a and p2>=b){
            while(p1<a){
                ans.push_back(arr1[p1]);
                p1++;
            }
        }
        else{
            while(p2<b){
                ans.push_back(arr2[p2]);
                p2++;
            }
        }
    }
    for(auto &i:ans){
        cout<<i<<" ";
    }
    return 0;
}

// problem link : https: // codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A