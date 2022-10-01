#include<bits/stdc++.h>
using namespace std;
int eggDrop(int n,int k)
{
    int dp[n+1][k+1];
    int res,i,j,x;
    for(i = 1;i<=n;i++)
    {
        dp[i][1] = 1;
        dp[i][0] = 0;
    }
    for(j=1;j<=k;j++)
    {
        dp[1][j] = j;
    }
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=n;j++)
        {
            dp[i][j] = INT_MAX;
            for(x=1;x<=j;x++)
            {
                res = 1 + max(dp[i-1][x-1],dp[i][j-x]);
                if(res<dp[i][j])
                {
                    dp[i][j] = res;
                }
            }
        }
    } return dp[n][k];
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<eggDrop(n,k)<<endl;
    return 0;
}
