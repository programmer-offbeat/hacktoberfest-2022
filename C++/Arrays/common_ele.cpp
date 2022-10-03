
/*
Q) Given three arrays sorted in non-decreasing order, 
print all common elements in these arrays.

Input: 
ar1[] = {1, 5, 10, 20, 40, 80} 
ar2[] = {6, 7, 20, 80, 100} 
ar3[] = {3, 4, 15, 20, 30, 70, 80, 120} 
Output: 20, 80
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

voif find(int a1[], int a2[], int a3[], int n1, int n2, int n3){

    //Initialise
    int i = 0, j = 0, k = 0;

    while(i < n1 and j < n2 and k < n3){

        if(a1[i] == a2[j] and a2[j] == a3[k]){
            cout<<a1[i]<<" "<<a2[j]<<" "<<a3[k];
        }
        else if(a1[i] < a2[j]){
            i++;
        }
        else if(a2[j] < a3[k]){
            j++;
        }
        else{
            k++;
        }
    }
}

int main(){
    int a1[] = {1, 5, 10, 20, 40, 80};
    int a2[] = {6, 7, 20, 80, 100};
    int a3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = sizeof(a1)/sizeof(ar1[0]);
    int n2 = sizeof(a2)/sizeof(ar2[0]);
    int n3 = sizeof(a3)/sizeof(ar3[0]);

    cout<<"Common Elements : "<<find(a1,a2,a3,n1,n2,n3);
}

//time = O(n1+n2+n3)