#include<bits/stdc++.h>
using namespace std;
int arr[1000];

void merge(int left[], int l, int right[], int r, int A[]){
	int i=0, j=0, k=0;
	while(i<l && j<r){
		if(left[i] <= right[j]){
			A[k] = left[i];
			i++;
		}
		else{
			A[k] = right[j];
			j++;
		}
		k++;
	}
	while(i<l){
		A[k] = left[i];
		i++; k++;
	}
	while(j<r){
		A[k] = right[j];
		j++; k++;
	}
}

class Sorting{
	public:				
		void printArray(int arr[], int n);
		
		void mergeSortRecur(int arr[], int n);
};

void Sorting::printArray(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

void Sorting::mergeSortRecur(int arr[], int n){
	if(n<2){
		return;
	}
	int i, mid = n/2, midr = n - mid, left[mid], right[midr];
	
	for(i=0; i<n; i++){
		if(i<mid){
			left[i] = arr[i];
		}
		else{
			right[i-mid] = arr[i];
		}
	}
	
	mergeSortRecur(left, mid);
	mergeSortRecur(right, n-mid);
	merge(left, mid, right, n-mid, arr);
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
	
	s.mergeSortRecur(arr, n);
	
	cout<<"\n\nAfter sorting : \n";
	s.printArray(arr, n);
	
	return 0;
}

