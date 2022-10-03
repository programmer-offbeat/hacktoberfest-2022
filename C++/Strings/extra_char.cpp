
/*
Q) Given two strings which are of lengths n and n+1.
The second string contains all the character of the first string. 
Your task to find the extra character in the second string.

Input : string strA = "abcd";
        string strB = "cbdae";
Output : e
string B contain all the element 
there is a one extra character which is e

Method 1) Hashmap (Efficient)
Algorithm : Create an empty hash table and insert all character of 
            second string. Now remove all characters of first string. 
            Remaining character is the extra character 
*/

#include<bits/stdc++.h>
using namespace std;

char findExtraCharcter(string s1, string s2){

    //store string value in map
    unordered_map<char, int>m1;

    //store second string in map with freq
    for(int i = 0; i < s2.length(); i++){
        m1[s2[i]]++;
    }
    //store first string in map with freq
    for(int i = 0; i < s1.length(); i++){
        m1[s1[i]]--;
    }
    for(auto it : m1){
        if(it.second == 1){
            return it.first;
        }
    }
    return -1;
}
int main(){
    string strA = "abcd";
    string strB = "cbdad";
    cout<<findExtraCharcter(strA, strB);
}

/*
Time Complexity:- O(n) 
Auxiliary Space:- O(n). 
*/