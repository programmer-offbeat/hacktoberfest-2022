

/*
Q)Given an array of positive numbers, find the maximum sum of a 
subsequence with the constraint that no 2 numbers in the sequence 
should be adjacent in the array. So 3 2 7 10 should return 13 
(sum of 3 and 10) or 3 2 5 10 7 should return 15 (sum of 3, 5 and 7).

input : arr[] = {5,  5, 10, 40, 50, 35}
output : 80

*/
#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int findMaxSum(int arr[], int n){

    int incl = arr[0];
    int excl = 0;
    int excl_new, i;

    for(i = 1; i < n; i++){

        //current max excluding i
        excl_new = (incl > excl) ? incl : excl;

        //current max including i
        incl = excl + arr[i];
        excl = excl_new;
    }

    //return max of excl and incl
    return ((incl > excl) ? incl : excl);
}

int main(){
    int arr[] = {5, 5, 10, 100, 10, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findMaxSum(arr,n)<<endl;
}

//Time Complexity: O(n)