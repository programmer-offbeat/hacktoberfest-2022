
/*
Q) Find a Fixed Point (Value equal to index) in a given array

Input: arr[] = {-10, -5, 0, 3, 7}
Output: 3  // arr[3] == 3 

*/

// 1) Binary Search(Recursive) (only if array is sorted)

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int FixPoint(int arr[], int low, int high){
    
    if(low <= high){
        //find mid point
        int mid = (low + high)/2;

        if(mid == arr[mid]){
            return mid;
        }
        else if(mid > arr[mid]){
            return FixPoint(arr, (mid+1), high);
        }
        else{
            return FixPoint(arr, low, high-1);
        }
    }
    return -1;
}
int main(){
    int arr[] = {-10, -1, 0, 3, 10, 11, 30, 50, 100};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Fixed point : "<<FixPoint(arr, 0, n-1);
    
}
/*
Time complexity: O(logn)
Space complexity: O(1)
*/