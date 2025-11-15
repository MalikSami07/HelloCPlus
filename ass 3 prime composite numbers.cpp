#include <iostream>
using namespace std;
bool isprime(int n){
	
	if(n<=1)
	return false;
	for(int i=2 ; i<n ; i++){
		if(n%i==0)
		return false;
	}
	return true;
}
int main(){
	int n=500;
	cout<<"Prime number : ";
	for(int i=0 ; i<=n ; i++){
		if(isprime(i))
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"composite number : ";
	for(int i=2 ; i<=n ; i++){
		if(!isprime(i))
	cout<<i<<" ";
	}
	
}
