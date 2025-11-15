#include <iostream>
using namespace std;
void maximum(int arr[],int s){
      
      for(int i=0;i<s;i++){
      	int mx=arr[0];
        mx= max(mx,arr[i]);
	  }
     cout<<mx;
}

int main(){
	int s;
	int arr[s];	
	cin>>s;
	for(int i=1 ;i<=s;i++){
		cin>>arr[i];		
	}
	maximum(arr,s);
}
