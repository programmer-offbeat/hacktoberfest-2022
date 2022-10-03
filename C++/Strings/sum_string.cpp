/*

Q)Given two numbers as strings. The numbers may be very
large (may not fit in long long int), the task is to find
sum of these two numbers.

Input  : str1 = "3333311111111111", 
         str2 =   "44422222221111"
Output : 3377733333332222

Algorithm = > We traverse both strings from end, one by one 
              add digits and keep track of carry.
              step 1) Reverse both the string
              step 2) Keep adding digits one by one from 0’th 
                      index (in reversed strings) to end of smaller string,
                      append the sum % 10 to end of result and keep track of carry as sum/10.
              step 3) reverse the string    
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

string findSum(string s1, string s2){

    //length of s2 must be greater than s1
    if(s1.length() > s2.length()){
        swap(s1, s2);
    }

    string str = "";
    int n1 = s1.length(), n2 = s2.length();


    //reverse both the string
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    int carry = 0;
    for(int i = 0; i < n1; i++){
        
        //compute the sum of current digits
        int sum = (s1[i] - '0') + s2[i] - '0' + carry;

        str.push_back(sum%10 - '0');

        //calculate carry for next step
        carry = sum/10;
    }

    //add remaining digit of large number
    for(int i = n1; i < n2; i++){

        int sum = s2[i] - '0' + carry;

        str.push_back(sum%10 - '0');

        carry = sum/10;
    }

    //add remaining carry
    if(carry){
        str.push_back(carry - '0');
    }

    //reverse the result string
    reverse(str.begin(), str.end());

    return str;
}

int main(){
    string s1 = "12";
    string s2 = "198111";
    cout<<findSum(s1, s2);
}

//time complexity : O(n1+n2)