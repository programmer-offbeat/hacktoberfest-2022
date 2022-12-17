/*
Find the smallest positive number missing from an unsorted array

You are given an unsorted array with both positive and negative elements. You have to find the smallest positive number missing from the array in O(n) time using constant extra space. You can modify the original array.

Examples 
 Input:  {2, 3, 7, 6, 8, -1, -10, 15}
 Output: 1

 Input:  { 2, 3, -7, 6, 8, 1, -10, 15 }
 Output: 4

 Input: {1, 1, 0, -1, -2}
 Output: 2
 */

#include <bits/stdc++.h>
using namespace std;

int firstMissingPositive(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        while (arr[i] >= 1 && arr[i] <= n
               && arr[i] != arr[arr[i] - 1]) {
            swap(arr[i], arr[arr[i] - 1]);
        }
    }
  
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }
   
    return n + 1;
}

int main()
{
    int arr[] = { 2, 3, -7, 6, 8, 1, -10, 15 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = firstMissingPositive(arr, n);
    cout << ans;
    return 0;
}

/*
Complexity Analysis:

Time Complexity: O(n). 
Only two traversals are needed. So the time complexity is O(n).
Auxiliary Space: O(1). 
No extra space is needed, so the space complexity is constant.
*/
