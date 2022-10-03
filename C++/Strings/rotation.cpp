
/*
Q) check if strings are rotations of each other or not

(eg given s1 = ABCD and s2 = CDAB, return true, given s1 = ABCD, and s2 = ACBD , return false)
*/

#include<bits/stdc++.h>
using namespace std;

bool areRotations(string s1, string s2){
    if(s1.length() != s2.length())
        return false;

    string s3 = s1 + s1;
    return s3.find(s2) != string::npos;
}
int main(){
    string str1 = "AACD", str2 = "ACDA";
    if (areRotations(str1, str2))
        printf("Strings are rotations of each other");
    else
        printf("Strings are not rotations of each other");
}
// Time Complexity: O(n)