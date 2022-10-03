
/*
Q) Sliding Window Maximum (Maximum of all subarrays of size k)

Input: arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6}, K = 3 
Output: 3 3 4 5 5 5 6
*/

#include<bits/stdc++.h>
using namespace std;

void printKMax(int arr[], int size, int k){
    int j, max;
    for(int i=0;i<=size-k;i++){
        max = arr[i];
        for(int j=1;j<k;j++){
            if(arr[i+j]>max)
                max = arr[i+j];
        }
        cout<<max<<" ";
    }
}
int main(){
    int arr[] = {4, 2, 4, 5, 2, 3, 1}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int k = 3; 
    printKMax(arr, arr_size, k);
}

/*
Time Complexity: O(N * K). 
The outer loop runs n-k+1 times and the inner loop runs k times for every iteration of outer loop. So time complexity is O((n-k+1)*k) which can also be written as O(N * K).
Space Complexity: O(1). 
No extra space is required.
*/