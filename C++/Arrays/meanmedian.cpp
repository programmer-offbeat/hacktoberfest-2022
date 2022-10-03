
/* Q) Given n size unsorted array, find it’s mean and median. 

  Mean = (sum of all ele) / (no. of ele)

  Median : middle element if(n%2==0)

           average  of middle two element if(n%2!=0)

Input  : a[] = {1, 3, 4, 2, 6, 5, 8, 7}
Output : Mean = 4.5
         Median = 4.5
*/ 

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

double findMean(int arr[], int n){
    
    int sum = 0;

    for(int i = 0; i < n; i++) sum+=arr[i];

    return (double)(sum) / (double)(n); 
}

double findMedian(int arr[], int n){

    //sort the array
    sort(arr, arr+n);

    if(n%2 != 0){
        return (double)arr[n/2];
    }
    return (double)(arr[(n-1)/2] + arr[n/2])/2.0;
}

int main(){
    int arr[] = {12, 3, 5, 7, 3, 19 };
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<findMean(arr,n)<<endl;
    cout<<findMedian(arr,n);
}
/*
Time complexity for mean : O(n)

Time complexity for median : O(nLogn)
*/