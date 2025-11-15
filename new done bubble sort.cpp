#include <iostream>
using namespace std;
void bubblesort(int arr[],int size){
	for(int i=0 ; i<size-1 ; i++){
		for(int j=0 ; j<size-1 ;j++){
			if (arr[j]>arr[j+1])
			swap(arr[j],arr[j+1]);
		}
	}
}
int main(){
	int n;
	int arr[n];
	
	cin>>n;
	for(int i=0 ; i<n ; i++){
		cin>>arr[i];
	}
for(int i=0 ; i<n ; i++){
		cout<<arr[i]<<" "	;}
		cout<<endl;
	bubblesort(arr,n);
		for(int i=0 ; i<n ; i++){
		cout<<arr[i]<<" "	;}
}

