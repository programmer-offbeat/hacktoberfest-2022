/*
Q) Given an array arr[], the task is to arrange the array in such a 
way that the absolute difference between the adjacent elements is in 
increasing order.

Input: arr[] = {8, 1, 2, 3, 0} 
Output: 2 3 1 8 0 
Explanation: 
|2-3| = 1, |3-1| = 2, |1-8| = 7, |8-0| = 8 
The absolute difference between the adjacent elements is in increasing order. 
*/

#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<int>res;
    int i=n-1, j=0;

    while(j < i){
        res.push_back(v[i]);
        i--;
        res.push_back(v[j]);
        j++;
    }
    if(i==j){
        res.push_back(v[i]);
    }
    reverse(res.begin(),res.end());
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    cout<<nl;
}

 
int main(){
    IOS
    int t; cin >> t;
    while(t--){
        solve();
    }
    // solve();
}

//Time Complexity: O(n*log(n))