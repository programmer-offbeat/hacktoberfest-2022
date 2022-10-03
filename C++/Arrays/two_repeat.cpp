/*
Q) You are given an array of n+2 elements. All elements of the array are 
in range 1 to n. And all elements occur once except two numbers which occur 
twice. Find the two repeating numbers. 

    Input: 
    arr = [4, 2, 4, 5, 2, 3, 1] 
    n = 5
    Output:
    4 2
*/

#include<bits/stdc++.h>
using namespace std;

void printRepeating(int arr[], int size){
    vector<int> v(size-2);
    for(int i=0; i<size; i++){
        if(v[arr[i]] == 1){
            cout<<arr[i]<<" ";
        }
        else{
            v[arr[i]] = 1;
        }
    }
}
int main(){
    int arr[] = {4, 2, 4, 5, 2, 3, 1}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
    printRepeating(arr, arr_size);
}

/*
    Time Complexity: O(n) 
    Auxiliary Space: O(n)
*/