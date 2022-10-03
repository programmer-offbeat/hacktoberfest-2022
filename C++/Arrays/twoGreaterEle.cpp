 
/* Q) Given an array of n distinct elements the task is to 
find all elements in array which have at-least two greater 
elements than themselves.

Input : arr[] = {2, 8, 7, 1, 5};
Output : 2  1  5  

Algorithm : step 1) find second largest element in array        
            step 2) print all element less then second largest
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

void twoGreaterEle(int arr[], int n){
    
    int first, second;
    
    first = second = INT_MIN;

    //find second largest element 
    for(int i = 0; i < n; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second){
            second = arr[i];
        }
    }

    //print elements
    for(int i = 0; i < n; i++){
        if(arr[i] < second){
            cout<<arr[i]<<" ";
        }
    }
}   

int main(){
    int arr[] = {12, 3, 5, 7, 3, 19 };
    int n = sizeof(arr)/sizeof(arr[0]);

    twoGreaterEle(arr,n);
}

//Time complexity = O(n)