
/*
Q) Given an array arr[] consisting of N positive integers and 
a positive integer K, the task is to find the maximum sum of the
subarray of size K such that it contains K consecutive elements in 
any combination.

Input: arr[] = {10, 12, 9, 8, 10, 15, 1, 3, 2}, K = 3
Output: 27

Explanation:
The subarray having K (= 3) consecutive elements is {9, 8, 10} 
whose sum of elements is 9 + 8 + 10 = 27, which is maximum.

*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int maxSum(vector<int>v, int n, int k){

    int curr_sum = 0;
    
    int max_sum = INT_MIN;

    for(int i = 0; i < n - k + 1; i++){

        //store k element of subarray
        vector<int>dup_arr(v.begin()+i, v.begin()+i+k);

        //sort in ascending order
        sort(dup_arr.begin(), dup_arr.end());

        //check element in subarray are consicutive or not
        bool flag = true;

        for(int j = 1; j < k; j++){
            if(dup_arr[j] - dup_arr[j-1] != 1){
                flag = false;
                break;
            }
        }

        //if flag is true update the max_sum
        if(flag){

            //store sum of element of current subarray
            curr_sum = accumulate(dup_arr.begin(), dup_arr.end(), 0);

            //update the maxsum
            max_sum = max(max_sum, curr_sum);


            curr_sum = 0;
        }
    }
    return max_sum;
}

int main(){
    vector<int>arr = {10, 12, 9, 8, 10, 15, 1, 3, 2 };
    int n = arr.size();
    int k = 3;
    cout<<maxSum(arr, n, k);
}

/*
Time Complexity: O(N*K*log K)
Auxiliary Space: O(K)
*/
