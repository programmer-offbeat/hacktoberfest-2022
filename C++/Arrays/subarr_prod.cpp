
/* Sliding window technique */
/*
Q)Given an array consisting of n positive integers, 
and an integer k. Find the largest product subarray 
of size k, i.e., find maximum produce of k contiguous 
elements in the array where k <= n.

Input: arr[] = {2, 5, 8, 1, 1, 3};
       k = 3             
Output:   80  
The subarray is {2, 5, 8}

*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int maxProd(int arr[], int n, int k){

    int max_prod = 1;
    
    for(int i = 0; i < k; i++){
        max_prod *= arr[i];
    }

    int prev_prod = max_prod;

    for(int i = 1; i <= n - k; i++){

        int curr_prod = (prev_prod/arr[i-1])*arr[i+k-1];

        max_prod = max(max_prod, curr_prod);

        prev_prod = curr_prod;
    }
    return max_prod;
}
int main(){
    int arr[] = {2, 5, 8, 1, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    cout<<maxProd(arr, n, k);
}

//Time complexity : O(n)