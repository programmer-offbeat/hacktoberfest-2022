/*
Q) Given an array, print the Next Greater Element (NGE) for every element. 
The Next greater Element for an element x is the first greater element on 
the right side of x in the array. Elements for which no greater element exist, 
consider the next greater element as -1. 

    
Input: [4, 5, 2, 25]

Output: [5, 25, 25, -1]


1) Brute force approach:
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

void find(int arr[], int n){
    int next, i, j;
    for(i = 0; i < n; i++){
        next = -1;
        for(j = i+1; j < n; j++){
            if(arr[j] > arr[i]){
                next = arr[j];
                break;
            }
        }
        cout << next << " ";
    }
}

int main(){
    int arr[] = {11, 13, 21, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    find(arr,n);

}
//Time Complexity: O(n^2)

