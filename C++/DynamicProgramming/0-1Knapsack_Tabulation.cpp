    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        int weight[n],value[n];
        for(int i=0;i<n;i++)
        {
            cin>>value[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>weight[i];
        }
        int capacity;
        cin>>capacity;
        int dp[n+1][capacity+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<capacity+1;j++)
            {
                if(i==0||j==0)
                {
                    dp[i][j]=0;
                }
                else if(weight[i-1]<=j)
                {
                    dp[i][j]= max(value[i-1]+dp[i-1][j-weight[i-1]],dp[i-1][j]);
                }
                else 
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        cout<<dp[n][capacity]<<endl;
        return 0;
    }
