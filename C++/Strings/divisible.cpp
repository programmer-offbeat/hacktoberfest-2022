
/* Q) Find the smallest number such that the sum of 
its digits is N and it is divisible by 10^N 

Input : N = 5
Output : 500000
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

void find(int n){

    //if n==0 string will be 0
    if(n == 0){
        cout<<"0"<<endl;
    }
    //if (n%9!=0) output remainder
    if(n%9!=0){
        cout<<n%9;
    }

    //print 9 (n/9) times
    for(int i = 1; i <= (n/9); i++){
        cout<<"9";
    }
    //append 0 n times
    for(int i = 1; i <= n; i++){
        cout<<"0";
    }
}

int main(){
    int n = 5;
    find(n);
}

//Time complexity : O(n) 