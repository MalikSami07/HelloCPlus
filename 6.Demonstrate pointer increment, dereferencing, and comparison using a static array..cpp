#include<iostream>
using namespace std;
int main(){
	
	int arr[5]={6,2,3,4,5};
	int *ptr= arr;sizeof(arr)/4;
	
	cout<<*ptr<<endl;
	ptr++;
	cout<<*ptr<<endl;
	//derefricing
	cout<<*ptr<<endl;
	*ptr=99;
	cout<<"ptr1 = 1 to 99"<<endl;
		cout<<arr[1]<<endl;
		//comparison 		
		int *start=&arr[0];	
	int *end=&arr[4];
		if(start<end){
			cout<<"start come before end in memory";
		}
}
