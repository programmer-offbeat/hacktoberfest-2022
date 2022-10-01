#include<iostream>
#define size 5
using namespace std;

class InsertionSort{
public:
    int key;
    int arr[size];
    void input(){
        for(int i=0; i<size; ++i){
            cin>>arr[i];
        }
    }
    void sort(){
        int j, key;
        for (int i = 1; i < size; i++) {
            key = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }
    void print(){
        for(int i=0; i<size; ++i){
            cout<<arr[i]<<" ";
        }
    }
    
};

int main(){
    InsertionSort is;
    is.input();
    is.sort();
    is.print();
    return 0;
}

