
/*
Q) Given a number, the task is to check if a number is divisible by 4 or 
not. The input number may be large and it may not be possible to store 
even if we use long long int.

Input : n = 1124
Output : Yes

Input  : n = 363588395960667043875487
Output : No

Algorithm : A number is divisible by 4 if number formed by last two 
digits of it is divisible by 4.
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

bool check(string s){
    int n = s.length();
    
    if(n == 1){
        return ((s[0] - '0')%4 == 0);
    }

    //if no formed by last two digit id divisible by 4
    int last = s[n-1] - '0';
    int sec_last = s[n-2] - '0';

    return ((sec_last*10 + last) % 4 == 0);
}
int main(){
    string s = "76952";

    check(s) ? cout<<"YES" : cout<<"NO";
}
//Time Complexity: O(1)