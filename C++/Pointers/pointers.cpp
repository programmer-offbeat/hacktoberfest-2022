#include<iostream>
using namespace std;

int main()
{
  int var = 5;
  
  //datatype pointerName*;
  int *ip;                                                //pointer to an integer
  double *dp;                                             //pointer to a double
  float *fp;                                              //pointer to a float
  char *ch;                                               //pointer to a character
  
  //integer pointer variable
  ip = &var; 
  
  cout << "Variable value: " << var << endl;              //value of variable = 5
  cout << "Address in pointer: " << ip << endl;           //address value
  cout << "Pointer pointing to value: " << *ip << endl;   //value at address = 5
  
  //change the value at address using pointer
  *ip = 6;
  
  cout << endl;   //After
  cout << "Variable value: " << var << endl;              //value of variable = 6
  cout << "Address in pointer: " << ip << endl;           //address value
  cout << "Pointer pointing to value: " << *ip << endl;   //value at address = 6
  
  return 0;
}
