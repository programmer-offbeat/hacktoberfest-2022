#include<bits/stdc++.h>
using namespace std;
int arr[1000];

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int left[], int start, int end){
	int i, pivot = arr[end], pIndex = start;
	for(i=start; i<end; i++){
		if(arr[i] <= pivot){
			swap(&arr[i], &arr[pIndex]);
			pIndex++;
		}
	}
	swap(&arr[pIndex], &arr[end]);
	return pIndex;
}

class Sorting{
	public:				
		void printArray(int arr[], int n);
		
		void quickSortRecur(int arr[], int start, int end);
};

void Sorting::printArray(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

void Sorting::quickSortRecur(int arr[], int start, int end){
	if(start < end){
		int pIndex = partition(arr, start, end);
		quickSortRecur(arr, start, pIndex-1);
		quickSortRecur(arr, pIndex+1, end);
	}
}

int main(){
	Sorting s;
	int i, n;
	cout<<"Enter size of array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of array : ";
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<"\n\nBefore sorting : \n";
	s.printArray(arr, n);
	
	s.quickSortRecur(arr, 0, n-1);
	
	cout<<"\n\nAfter sorting : \n";
	s.printArray(arr, n);
	
	return 0;
}

