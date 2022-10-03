
/*
Given two matrices, the task to multiply them. Matrices can 
either be square or rectangular.

Input : mat1[][] = {{1, 2}, 
                   {3, 4}}
        mat2[][] = {{1, 1}, 
                    {1, 1}}
Output : {{3, 3}, 
          {7, 7}}
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

void multiply(int mat1[][4], int mat2[][4], int res[][4]){
    
    int i,j,k;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            res[i][j] = 0;
            for(k = 0; k < 4; k++){
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main(){
    int i,j;
    int res[4][4]; //to store result
    int mat1[4][4] = { { 1, 1, 1, 1 },
                       { 2, 2, 2, 2 },
                       { 3, 3, 3, 3 },
                       { 4, 4, 4, 4 } };
 
    int mat2[4][4] = { { 1, 1, 1, 1 },
                       { 2, 2, 2, 2 },
                       { 3, 3, 3, 3 },
                       { 4, 4, 4, 4 } };
    
    multiply(mat1, mat2, res);

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }
}

//Time complexity = O(n^3)