
/* Q) Given an array, find the largest element in it. 
Input : arr[] = {20, 10, 20, 4, 100}
Output : 100
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int maxElement(int arr[], int n){

    int max_ele = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] >= max_ele){
            max_ele = arr[i];
        }
    }
    return max_ele;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maxElement(arr,n);
}
//Time complexity = O(n)

/* Method 2) using in-built function (vector) (recommended)

    lets vector = v;

    max_ele = *max_element(v.begin(), v.end());
    
*/