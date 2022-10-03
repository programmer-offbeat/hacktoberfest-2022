/*
Q) Program to find second most frequent character

Input: str = "aabababa";
Output: b
*/

#include<bits/stdc++.h>
using namespace std;

char find(string s){

    //count no of occurance of every char
    int count[256] = {0};
    for(int i = 0; i < s.length(); i++){
        count[s[i]]++;
    }

    int first = 0, second = 0;
    for(int i = 0; i < 256; i++){
        if(count[i] > count[first]){
            second = first;
            first = i;
        }
        else if(count[i] > count[second] && count[i] != count[first]){
            second = i;
        }
    }
    return second;
}
int main(){
    string s = "yyaash";

    char res = find(s);
    if(res != '\0'){
        cout<<res<<endl;
    }
    else{
        cout<<"No second most char";
    }
}
//Time complexity : O(n)