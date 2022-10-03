
/*
Q) Given a string, count number of words in it. The words are separated 
by following characters: space (‘ ‘) or new line (‘\n’) or tab (‘\t’) or 
a combination of these.

Input : Chetan Patil
Output : 2
*/
#include<bits/stdc++.h>
using namespace std;

int countWord(string s){

    int state = 0; //0 for out
    int cnt = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i]==' ' || s[i]=='\n' || s[i]=='\t'){
            state = 0;
        }
        else if(state == 0){
            state = 1;
            cnt++;
        }
    }
    return cnt;
}
int main(){
    string s = "Yash Lalpotu";
    cout<<"No. of words : "<<countWord(s);
}

//Time complexity: O(n)