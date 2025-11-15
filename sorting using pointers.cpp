#include <iostream>
using namespace std;

void bubblesort(int* ptr,int n){

 for(int i=0;i<n-1;i++){
 	for(int j=0;j<n-1;j++){
 		if(*(ptr)>*(ptr+1)){
	         swap( *(ptr),*(ptr+1) );
		 }
 		ptr++;
	 }
	 ptr=ptr+(n-1)	;
 }
 }
int main(){
	int n;
	int arr[n];
	cin >>n;
	
	for (int i=0; i<n ;i++)	{
		cin>>arr[i];
		
	}
		bubblesort(arr,n);
			for (int i=0; i<n ;i++)	{
		cout<<arr[i];
}}
