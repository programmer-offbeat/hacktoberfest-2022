
/*
Q) Given an Array of integers. The task is to find the index i  
in the array at which the value of prefixSum(i) + suffixSum(i) is minimum.

Note : PrefixSum(i) = The sum of first i numbers of the array.
       SuffixSum(i) = the sum of last N – i + 1 numbers of the array.
       -based indexing is considered for the array. That is index of 
       the first element in array is 1.

Input : arr[] = {3, 5, 1, 6, 6 }
Output : 3
Explanation: 
        PrefixSum[] = {3, 8, 9, 15, 21}
        SuffixSum[] = { 21, 18, 13, 12, 6}
        PrefixSum[] + SuffixSum[] = {24, 26, 22, 27, 27}
        It is clear that the min value of sum of
        prefix and suffix sum is 22 at index 3.

Input : arr[] = { 3, 2, 5, 7, 3 }
Output : 2

Algo - As we need to minimize value of PrefixSum + SuffixSum
       we can observe
       PrefixSum[i] + SuffixSum[i] = sum of all elements + arr[i](ele at ith index)
since sum of all emement in array iss constant, therefore our ans should be
index of minimum value in array

*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int findIndex(int arr[], int n){

    //initialis min value
    int mini = arr[0];
    int index = 0;

    //find min value in array
    for(int i = 1; i < n; i++){
        if(arr[i] < mini){
            mini = arr[i];
            index = i;
        }
    }
    return index+1;
}

int main(){
    int arr[] = { 3, 2, 5, 7, 3 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findIndex(arr,n)<<endl;
}