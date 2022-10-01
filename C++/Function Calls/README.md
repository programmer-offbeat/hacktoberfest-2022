# Ways to Call a Function in CPP

## 1. Call by Value

- The call/pass by value method of passing arguments to a function copies the *actual value of an argument* into the formal parameter of the function.

- In this case, changes made to the parameter inside th function have no effect on the argument.

- By default, C++ uses call by value to pass arguments. 

- In general, this means that code within a function cannot alter the arguments used to call the function.

[See code file here](https://github.com/ShubhamJagtap2000/hacktoberfest-2022/blob/FunctionCalls/C%2B%2B/Function%20Calls/ByValue.cpp)

## 2. Call by Reference

- The call/pass by reference method of passing arguments to a function copies the *reference of an argument* into the formal parameter.

- Inside the function, the reference is used to access the actual argument used in the call. This means that changes made to the parameter affect the passed argument.

- To pass the value by reference, argument reference is passed to the functions just like any other value.

[See code file here](https://github.com/ShubhamJagtap2000/hacktoberfest-2022/blob/FunctionCalls/C%2B%2B/Function%20Calls/ByReference.cpp)

## 3. Call by Address

- The call/pass by pointer/address method of passing arguments to a function copies the *address of an argument* into the formal parameter.

- Inside the function, the address is used to access the actual argument used in the call. This means that changes made to parameter affect the passed argument.

- To pass the value by pointer, argument pointers are passed to the functions just like any other value.

[See code file here](https://github.com/ShubhamJagtap2000/hacktoberfest-2022/blob/FunctionCalls/C%2B%2B/Function%20Calls/ByAddress.cpp)
