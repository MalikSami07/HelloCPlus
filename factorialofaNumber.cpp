#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int p=1;
	int i=1;
	while(i<=n){
		p=p*i;
		i++;
	}cout<<p;
}