

/*
Q) Given N numbers and Q queries, each query consists of L and R. 
Task is to write a program which prints the count of numbers which 
divides all numbers in the given range L-R.

Input : a = {3, 4, 2, 2, 4, 6} 
        Q = 2
        L = 1 R = 4  
        L = 2 R = 6
    
Output :  0
          2

Explanation : The range 1-4 has {3, 4, 2, 2} 
which does not have any number that divides all the 
numbers in this range. 
The range 2-6 has {4, 2, 2, 4, 6} which has  2 numbers {2, 2} which divides 
all numbers in the given range. 
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int ans(int arr[], int n, int l, int r){

    int cnt = 0;

    //0 based index
    l = l-1;

    //iterate all elements
    for(int i = l; i < r; i++){
        int element = arr[i];
        int divisors = 0;

        //check if element divises all the element in range
        for(int j = l; j < r; j++){
            if(arr[j]%arr[i] == 0) divisors++;
            else break;
        }
        //if all the elements are divisible by arr[i]
        if(divisors == (r-l)) cnt++; 
    }
    //ans for every query
    return cnt;
}

int main(){
    int arr[] = {1, 2, 3, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);

    int l = 1, r = 4;
    cout << ans(arr, n, l, r) << endl;
 
    l = 2, r = 4;   
    cout << ans(arr, n, l, r) << endl;
}

//Time complexity : O(n)

//Note - I will be solved this que with more efficient algo