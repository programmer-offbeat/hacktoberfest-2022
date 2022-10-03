
/*
Q) Given a string, write a program to count the occurrence of 
Lowercase characters, Uppercase characters, Special characters, 
and Numeric values. 

Input : #YasKs01nOr@YasK07
Output : 
Upper case letters : 5
Lower case letters : 7
Numbers : 4
Special Characters : 2

Algorithm : 1) Scan string str from 0 to length-1.
               check one character at a time on the basis of ASCII values 
            2) if(str[i] >= 65 and str[i] <=90), then it is uppercase letter, 
 
            3) if(str[i] >= 97 and str[i] <=122), then it is lowercase letter, 
 
            4) if(str[i] >= 48 and str[i] <=57), then it is number, 
 
            5) else it is a special character
               Print all the counters.
*/

#include<bits/stdc++.h>
using namespace std;

void countChar(string s){

    int up = 0, low = 0, num = 0, special = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' and s[i] <= 'Z'){
            up++;
        }
        else if(s[i] >= 'a' and s[i] <= 'z'){
            low++;
        }
        else if(s[i] >= '0' and s[i] <= '9'){
            num++;
        }
        else{
            special++;
        }
    }
    cout << "Upper case letters: " << up << endl;
    cout << "Lower case letters : " << low << endl;
    cout << "Number : " << num << endl;
    cout << "Special characters : " << special << endl;
}
int main(){
    string s = "#YasKs01nOr@YasK07";
    countChar(s);
}

//Time Complexity: O(n)