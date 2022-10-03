
/* Q) Write a function rotate(ar[], d, n) that 
rotates arr[] of size n by d elements. 

Input : arr[] = [1,2,3,4,5], d = 2, n = 7;
Output = arr[] = [3,4,5,1,2]


METHOD 1 => Using Temp array[]

Algorithm => Step 1) store the first d element in temp array
               Step 2) shift rest of original array
               Step 3) store back d elements  
            
            Time complexity = O(n)
            Spce complexity = O(d)
*/

//Method 2 => Rotate one-by-one

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

//function to left rotate  by 1
void leftRotatebyOne(int arr[], int n){
    int temp = arr[0];
    for(int i = 0; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

//function to rotate array d times
void leftRotate(int arr[], int d, int n){
    for(int i = 0; i < d; i++){
        leftRotatebyOne(arr, n);
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 3;
    leftRotate(arr,d,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//Time Complexity = O(n*d)