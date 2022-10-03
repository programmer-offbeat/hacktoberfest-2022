#include <iostream>

using namespace std;

int solve(int n)
{
    int max = 0;
    int curr = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            curr++;
            if (curr > max)
            {

                max = curr;
            }
        }
        else
        {

            if (curr > max)
            {

                max = curr;
            }
            curr = 0;
        }
        n = n >> 1;
    }
    return max;
}
int main()
{
    int x = solve(156);
    cout << x;
    return 0;
}