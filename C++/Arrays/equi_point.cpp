/*
Q) Equilibrium index of an array is an index such that the sum of elements 
at lower indexes is equal to the sum of elements at higher indexes. 
For example, in an array A:

Input: A[] = {-7, 1, 5, 2, -4, 3, 0} 
Output: 3 
3 is an equilibrium index, because: 
A[0] + A[1] + A[2] = A[4] + A[5] + A[6]

Input: A[] = {1, 2, 3} 
Output: -1 
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;
int equilibrium(int a[], int n){
    int sum = 0;
    int leftsum = 0;
    //find sum of all elements
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    for(int i = 0; i < n; i++){
        sum -= a[i];
        if(sum == leftsum){
            return i;
        }
        leftsum += a[i];
    }
    return -1;
}
int main(){
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << "First equilibrium index is " << equilibrium(arr, arr_size);
}
/*
First equilibrium index is 3

Time Complexity: O(n)
*/