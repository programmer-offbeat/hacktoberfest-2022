
/*
Q) Given a string containing alphanumeric characters, 
calculate sum of all numbers present in the string

Input:  1abc23
Output: 24

Input:  123abc
Output: 123

NOTE : The only tricky part in this question is that multiple 
consecutive digits are considered as one number.
The idea is very simple. We scan each character of the input 
string and if a number is formed by consecutive characters of 
the string, we increment the result by that amount. 
*/
//atoi = character to integer

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int findSum(string s){

    //temporary string
    string temp = "";

    //hold sum of integer
    int sum = 0;

    for(char ch : s){

        //if current char is digit
        if(isdigit(ch)){
            temp+=ch;
        }

        //if current char is alphabet
        else{
            //increment sum by number found earlier(if any)
            sum += atoi(temp.c_str());

            //reset temp string to empty
            temp = "";
        }
    }
    // atoi(temp.c_str()) takes care of trailing numbers
    return sum + atoi(temp.c_str());
}
int main(){
    string s = "12abc20yz68";

    cout<<findSum(s);
}   

//Time complexity : O(n)