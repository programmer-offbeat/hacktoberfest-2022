/*
Q) Given an array of n positive integers. We are required to write 
a program to print the minimum product of k integers of the given array.

Input : 198 76 544 123 154 675
         k = 2
Output : 9348
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int minProd(int arr[], int n, int k){

    //sort the array
    sort(arr, arr+n);

    int min_prod = 1;
    for(int i = 0; i < k; i++){
        min_prod *= arr[i];
    }
    return min_prod;
}

int main(){
    int arr[] = {12, 3, 5, 7, 3, 19 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    cout<<minProd(arr,n,k)<<endl;
}

//Time complexity : O(n)