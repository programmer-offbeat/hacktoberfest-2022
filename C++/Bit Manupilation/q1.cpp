#include <iostream>
using namespace std;

int findDuplicate(int *arr, int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int *hash = new int[(max == 0) ? 1 : max];

    for (int j = 0; j < n; j++)
    {
        hash[arr[j]]++;
        if (hash[arr[j]] == 2)
        {
            cout << arr[j] << "\n";
        }
    }
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        cout << findDuplicate(input, size) << endl;
    }

    return 0;
}