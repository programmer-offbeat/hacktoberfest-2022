
//Q) Given an array (or string), the task is to reverse the array/string.

/*
Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Method 1) Iterative Way
Algorithm => step 1) initialise start = 0, end = size_of_arr-1
             step 2) in loop, swap arr[start] and arr[end] 
             && start++ , end--
*/   

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

void reverse(int arr[], int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    reverse(arr,0, n-1);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
//Time complexity : O(n) 

//Method 2) Recursive method
/* Algorithm => step 1) initialise start = 0, end = size_of_arr-1
             step 2) in loop, swap arr[start] and arr[end] 
             && start++ , end--
             3) Recursively call funcn
*/

/* Psedo code => 
void reverse(int arr[], int start, int end){
    if(start>=end){
        return ;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverse(arr, start+1, end-1);
}
*/

//Recursive approach req more space