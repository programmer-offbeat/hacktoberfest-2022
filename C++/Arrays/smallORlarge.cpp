
/* Q)Given an array and a number k where k is smaller than
size of array, we need to find the k’th smallest element 
in the given array.

Note = > USING STL

Input : arr[] = {7, 10, 4, 3, 20, 15}
            k = 2
Output : 4

Algorithm => step 1) insert all the element in set
             step 2) print the kth small ele
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int kthsmall(int arr[], int n, int k){

    //initialise set
    set<int>s;

    for(int i = 0; i < n; i++){
        s.insert(arr[i]);
    }

    //traverse set to print kth small element
    auto it = s.begin();
    for(int i = 0; i < k - 1; i++){
        it++;
    }
    return *it;
}   

int main(){
    int arr[] = {12, 3, 5, 7, 3, 19 };
    int k = 2;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<kthsmall(arr,n,k);
}

/*
Time complexity = O(nLogn)

Note :  Note that set in STL uses a self-balancing BST internally 
and therefore time complexity of search and insert operations is O(log n).
*/