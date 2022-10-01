#include<iostream>
using namespace std;

void PassByValue(int x, int y)
{
  int temp;
  temp = x;
  x = y;
  y = z;
}

int main()
{
  int a = 5, b = 6;
  cout << "Before swapping " << endl << "a: " << a << endl << "b: " << b << endl << endl;
  //call function
  PassByValue(a, b);
  
  cout << "After swapping " << endl << "a: " << a << endl << "b: " << b << endl << endl;  //as they are, no change
  return 0;
}
