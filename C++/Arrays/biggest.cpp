
/*
Q) Given an array of numbers, arrange them in a way
that yields the largest value.

For example, if the given numbers are {54, 546, 548, 60}, 
the arrangement 6054854654 gives the largest value. And if 
the given numbers are {1, 34, 3, 98, 9, 76, 45, 4}, then the 
arrangement 998764543431 gives the largest value.
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int compare(string X, string Y){
    //comparison func which is used by sort
    string XY = X.append(Y);

    string YX = Y.append(X);

    //to see which is greater
    return XY.compare(YX) ? 1 : 0;
}

void printArray(vector<string>v){
    
    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < v.size(); i++){
        cout<<v[i];
    }
}
int main(){
    vector<string>v;
    v.push_back("54");
    v.push_back("546");
    v.push_back("548");
    v.push_back("60");
    printArray(v);
}

/*
Time Complexity:  O(nlogn) ,sorting is considered to have running
time complexity of O(nlogn) and the for loop runs in O(n) time.

Auxiliary Space: O(1)
*/