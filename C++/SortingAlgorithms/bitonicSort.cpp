// bitonic sort
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bitonicMerge(vector<int> &arr, int low, int count, int dir)
{
    if (count > 1)
    {
        int k = count / 2;
        for (int i = low; i < low + k; i++)
        {
            if ((arr[i] > arr[i + k]) == dir)
                swap(arr[i], arr[i + k]);
        }
        bitonicMerge(arr, low, k, dir);
        bitonicMerge(arr, low + k, k, dir);
    }
}

void bitonicSort(vector<int> &arr, int low, int count, int dir)
{
    if (count > 1)
    {
        int k = count / 2;
        bitonicSort(arr, low, k, 1);
        bitonicSort(arr, low + k, k, 0);
        bitonicMerge(arr, low, count, dir);
    }
}

void sort(vector<int> &arr, int N, int up)
{
    bitonicSort(arr, 0, N, up);
}

int main()
{
    vector<int> arr = {3, 7, 4, 8, 6, 2, 1, 5};
    int N = arr.size();
    int up = 1; // means sorting in ascending order

    sort(arr, N, up);
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    return 0;
}