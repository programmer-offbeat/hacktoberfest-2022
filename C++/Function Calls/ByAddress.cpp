#include<iostream>
using namespace std;

void PassByValue(int x, int y)
{
  int temp = x;
  x = y;
  y = temp;
}

void PassByReference(int &x, int &y)
{
  int temp = x;
  x = y;
  y = temp;
}
//Call By Pointer
void PassByAddress(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main()
{
  int a = 5, b = 6;
  cout << "Before swapping " << endl << "a: " << a << endl << "b: " << b << endl << endl;
  //function call
  PassByAddress(&a, &b);
  cout << "After swapping " << endl << "a: " << a << endl << "b: " << b << endl << endl;
  return 0;
}
