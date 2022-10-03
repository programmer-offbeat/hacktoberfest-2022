
/*
Q) Given an array arr[] of size n and integer k such that k <= n.

Input:  arr[] = {3, 7, 5, 20, -10, 0, 12}, k = 2
Output: Subarray between [4, 5] has minimum average

algorithm : Using Sliding window technique

*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

void findAv(int arr[], int n, int k){

    //beginning of index of result
    int res_index = 0;

    //sum of first subarr of size k
    int curr_sum = 0;
    for(int i = 0; i < k; i++){
        curr_sum += arr[i];
    }

    //initialise min_sum as curr_sum
    int min_sum = curr_sum;

    //traverse from (k+1)th to n
    for(int i = k; i < n; i++){

        //add current and remove prev;
        curr_sum += arr[i] - arr[i-k];

        //update result if needed
        if(curr_sum < min_sum){
            min_sum = curr_sum;
            res_index = (i-k+1);
        }
    }
    cout<<"Subarray :"<<" ["<<res_index<<", "<<res_index + k - 1<<"]";
}
int main(){
    int arr[] = { 3, 7, 90, 20, 10, 50, 40 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    findAv(arr, n, k);
}

/*
Time Complexity: O(n);
Auxiliary Space: O(1);
*/