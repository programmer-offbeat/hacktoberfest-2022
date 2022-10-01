#include<bits/stdc++.h>
using namespace std;

class SelectionSort{
public:
    int key;
    int arr[size];
    void input(){
        for(int i=0; i<size; ++i){
            cin>>arr[i];
        }
    }
    void sort(){
        int m_ind;
        for (int i = 0; i < size-1; i++) {
            m_ind = i;
            for (int j = i+1; j < size; j++)
                if (arr[j] < arr[m_ind])
                    m_ind = j;
                swap(arr[m_ind], arr[i]);
        }
    }
    void print(){
        for(int i=0; i<size; ++i){
            cout<<arr[i]<<" ";
        }
    }
    
};

int main(){
    SelectionSort ss;
    ss.input();
    ss.sort();
    ss.print();
    return 0;
}

