#include<bits/stdc++.h>
using namespace std;
int dp[1002][1002];
int lcs(string s1,string s2,int m,int n)
{
    if(m==0||n==0)
    {
        return dp[m][n] = 0;
    }
    if(dp[m][n]!=-1)
    {
        return dp[m][n];
    }
    if(s1[m-1]==s2[n-1])
    {
        return dp[m][n] = 1+lcs(s1,s2,m-1,n-1);
    }
    else
    {
        return dp[m][n] = max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
    }
}
int main()
{
    string s1,s2;
    memset(dp,-1,sizeof(dp));
    cin>>s1>>s2;
    cout<<lcs(s1,s2,s1.length(),s2.length());
}
