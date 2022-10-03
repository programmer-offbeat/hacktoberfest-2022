#include <iostream>
using namespace std;

int hammingDistance(int x, int y)
{
    int distance = 0;
    while (x || y)
    {
        int x_dig;
        int y_dig;

        x_dig = x & 1;
        y_dig = y & 1;
        if (x_dig != y_dig)
        {
            distance++;
        }
        x = x >> 1;
        y = y >> 1;
    }
    return distance;
}
int main()
{
    cout << hammingDistance(1, 4);
    return 0;
}