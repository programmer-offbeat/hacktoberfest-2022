/*
Q) Given an array A[] consisting 0s, 1s and 2s. The task is to write a 
function that sorts the given array. The functions should put all 0s first, 
then all 1s and all 2s in last.

Input: {0, 1, 2, 0, 1, 2}
Output: {0, 0, 1, 1, 2, 2}
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

void sortArray(int arr[], int n){
    int low = 0, high = n-1, mid = 0;

    while(mid <= high){
        switch(arr[mid]){
            case 0:
                swap(arr[low++], arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high--]);
                break;
        }
    }
}
int main(){
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    sortArray(arr,n);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" "; 
    }
}

/*
Time Complexity: O(n). 
Only one traversal of the array is needed.
Space Complexity: O(1). 
No extra space is required.
*/