
/*
Q) Pangram is a sentence containing every letter in the English alphabet.
Given a string, find all characters that are missing from the string, 
i.e., the characters that can make the string a Pangram. We need to 
print output in alphabetic order.

Input : The quick brown fox jumps
Output : adglvyz
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

string missingChar(string s){

    int max_char = 26;
    //boolean array to store  char in string
    bool present[max_char] = {false};

    //traverse string to mark chars
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' and s[i] <= 'z'){
            present[s[i] - 'a'] = true;
        }
        else if(s[i] >= 'A' and s[i] <= 'Z'){
            present[s[i] - 'A'] = true;
        }
    }
    //store missing char in alphab order
    string res = "";
    for(int i = 0; i < max_char; i++){
        if(present[i] == false){
            res.push_back((char)(i + 'a'));
        }
    }
    return res;
}
int main(){
    string s = "The quick brown fox jumps over the dog";
    cout<<missingChar(s);
}

/*
Time Complexity: O(n) 
Auxiliary Space: O(1)
*/