#include<bits/stdc++.h>
using namespace std;

class BubbleSort{
public:
    int key;
    void input(){
    	cout<<"Enter size of array : ";
    	cin>>n;
    	int arr[n];
    	cout<<"Enter array elements";
        for(int i=0; i<5; ++i){
            cin>>arr[i];
        }
    }
    void bubbleSort(){
        for (int i = 0; i <5-1; i++)     
            for (int j = 0; j < 5-i-1; j++) 
                if (arr[j] > arr[j+1]) 
                    swap(arr[j], arr[j+1]); 
    }
    void print(){
        for(int i=0; i<5; ++i){
            cout<<arr[i]<<" ";
        }
    }
    
};

int main(){
    BubbleSort bs;
    bs.input();
    bs.bubbleSort();
    bs.print();
    return 0;
}

