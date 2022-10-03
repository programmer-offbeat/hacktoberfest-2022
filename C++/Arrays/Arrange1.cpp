
 /* Q) Given an array of elements of length N, ranging from 0 to N – 1.
All elements may not be present in the array. If the element is 
not present then there will be -1 present in the array. Rearrange 
the array such that A[i] = i and if i is not present, display -1 at 
that place.

Input : arr = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1}
Output : [-1, 1, 2, 3, 4, -1, 6, -1, -1, 9]

Method 1 => using Hashing (Best)
Algorithm => Step 1) store all numbers in hashSet
               Step 2) iterate through array, if corresponding
                       position element is present in hashset
                       then set arr[i]=i, else -1;  
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

void FixArray(int arr[], int n){
    //initialise hashmap
    unordered_map<int, int>hmap;
    
    //store each element in hashmap
    for(int i = 0; i < n; i++){
        if(arr[i] != -1){
            hmap[arr[i]] = 1;
        }
    }
    //iterate through map and put arr[i]=i, if is present
    for(int  i = 0; i < n; i++){
        if(hmap.find(i)!=hmap.end()){
            arr[i] = i;
        }
        else{
            arr[i] = -1;
        }
    }

}
int main(){
    int arr[] = {-1,-1,6,1,9,3,2,-1,4,-1};
    int n = sizeof(arr)/sizeof(arr[0]);

    FixArray(arr,n);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" "; 
    }
}

//Time complexity : O(n)