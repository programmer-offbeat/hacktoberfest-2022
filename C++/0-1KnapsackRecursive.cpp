#include<bits/stdc++.h>
using namespace std;
int solve(int weight[],int value[],int capacity,int n)
{
    if(n==0 || capacity==0)
    {
        return 0;
    }
    if(weight[n-1]<=capacity)
    {
        return max(value[n-1]+solve(weight,value,capacity-weight[n-1],n-1),solve(weight,value,capacity,n-1));
    }
    else if(weight[n-1]>capacity)
    {
        return solve(weight,value,capacity,n-1);
    }
}
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
    cout<<solve(weight,value,capacity,n);
    return 0;
}
