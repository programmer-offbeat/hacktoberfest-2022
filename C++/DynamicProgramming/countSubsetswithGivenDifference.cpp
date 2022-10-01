#include<bits/stdc++.h>
using namespace std;
int CountSubsetSum(int arr[],int n,int sum)
{
    int dp[n+1][sum+1];
    dp[0][0] = 1;
    for (int i=1;i<=sum;i++)
    {
        dp[0][i] = 0;
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++){
            if(arr[i-1]<=j)
            {
                dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    } return dp[n][sum];
}
int main()
{
    int n;
    cin>>n;
    int sum=0,arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int difference;
    cin>>difference;
    int s1 = (sum+difference)/2;
    cout<<CountSubsetSum(arr,n,s1);
    return 0;
}
