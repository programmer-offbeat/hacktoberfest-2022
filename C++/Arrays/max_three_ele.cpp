

/* Q) Given an array with all distinct elements, find the 
largest three elements.

Input: arr[] = {10, 4, 3, 50, 23, 90}
Output: 90, 50, 23
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

void max3ele(int arr[], int n){

    int first, second, third;
    first = second = third = INT_MIN;

    if(n < 3){
        return ;
    }

    for(int i = 0; i < n; i++){
        if(arr[i] > first){
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second){
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third){
            third = arr[i];
        }
    }

    //print max 3 elements
    cout<<first<<" "<<second<<" "<<third;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    max3ele(arr,n);
}

//Time complexity = O(n)