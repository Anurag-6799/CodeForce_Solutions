#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    vector<int>arr1(a);
    vector<int>arr2(b);
    for(auto &i:arr1){
        cin>>i;
    }
    for(auto &i:arr2){
        cin>>i;
    }
    int p1 = 0, p2 = 0;
    vector<int>arr3;
    vector<int>ans;
    int counter = 0;
    while (p1 < a or p2 < b)
    {
        if (p1 < a and p2 < b)
        {
            if (arr1[p1] < arr2[p2])
            {
                ans.push_back(arr1[p1]);
                p1++;
                counter++;
            }
            else
            {
                ans.push_back(arr2[p2]);
                arr3.push_back(counter);
                p2++;
            }
        }
        else if (p1 < a and p2 >= b)
        {
            while (p1 < a)
            {
                ans.push_back(arr1[p1]);
                counter++;
                p1++;
            }
        }
        else
        {
            while (p2 < b)
            {
                ans.push_back(arr2[p2]);
                arr3.push_back(counter);
                p2++;
            }
        }
    }
    for(auto &i:arr3){
        cout<<i<<" ";
    }
    return 0;
}

// Problem link : https: // codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B