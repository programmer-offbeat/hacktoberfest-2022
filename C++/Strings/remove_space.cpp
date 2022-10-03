
/*
Q) C++ Program to remove spaces from a string

input : "che ta n"
output : "chetan"
*/

#include<bits/stdc++.h>
using namespace std;

char *removeSpace(char *s){
    int i = 0, j = 0;
    while(s[i]){
        if(s[i] != ' '){
            s[j++] = s[i];
        }
        i++;
    }
    s[j] = '\0';
    return s;
}
int main(){
    char s[] = "ya   s h";
    
    cout<<removeSpace(s);
}

//Time complexity : O(n)
