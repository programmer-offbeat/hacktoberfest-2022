#include<bits/stdc++.h>
using namespace std;

int solve(int n, int curr, int prev, vector<int>& nums, vector<vector<int>>& dp){
      if(curr==n) return 0;
      if(dp[curr][prev+1]!=-1) return dp[curr][prev+1];
      int inc=0;
      if(prev==-1 || nums[curr]>nums[prev])
          inc=1+solve(n,curr+1,curr,nums,dp);
      int exc=solve(n,curr+1,prev,nums,dp);
      dp[curr][prev+1]=max(inc,exc);
      return dp[curr][prev+1];
  }
  int lengthOfLIS(vector<int>& nums) {
      int n=nums.size();
      vector<vector<int>> dp(n, vector<int>(n,-1));
      int ans=solve(n,0,-1,nums,dp);
      return ans;
  }
int main(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0 ; i<n ; i++) cin>>a[i];
  int ans=lengthOfLIS(a);
  cout<<ans;
}
