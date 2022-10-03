
/*
Q) Check if a Given String is Palindrome

input : "malayalam"
output : true
*/

#include<bits/stdc++.h>
using namespace std;

bool isPal(string s){
    int l = 0, r = s.length()-1;
    while(l < r){
        if(s[l] != s[r]){
            return false;
        }
    }
    return true;
}
int main(){
    string s = "malayalam";
    if(isPal(s))
        cout<<"Yes";
    else
        cout<<"No";
}
// Time Complexity : O(n)