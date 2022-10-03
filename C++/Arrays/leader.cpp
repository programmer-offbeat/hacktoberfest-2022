/*
Q) Write a program to print all the LEADERS in the array. 
An element is leader if it is greater than all the elements 
to its right side. And the rightmost element is always a leader. 
For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2

Input : 16 17 4 3  5 2
        
Output : 2 5 17
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;
void leader(int a[], int n){

    int max_from_right = a[n-1]; 

    //rightmost element is always a leader
    cout<<max_from_right<<" ";

    for(int i=n-2; i>=0; i--){
        if(a[i] > max_from_right){
            max_from_right = a[i];
            cout<<max_from_right<<" ";
        }
    }
}
int main(){
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    leader(arr,n);
}

//Time complexity : O(n)