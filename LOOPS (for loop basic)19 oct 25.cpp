#include <iostream>
using namespace std;
int main(){
	for(int i=1;i<=3;i++){
	cout<<"hello world"<<endl;
	}	
		//printing 1 to 100
	for(int i=1;i<=100;i++){
		cout<<i<<" ";
	}
	cout<<endl;
	//print even number 0 to 100
    for(int i=1;i<=100;i++){
	 if(i%2==0)cout<<i<<" ";		
}cout<<endl;
	//print odd number 0 to 100
    for(int i=1;i<=100;i++){
	 if(i%2!=0)cout<<i<<" "	;
}cout<<endl;
	//print table of a19
    for(int i=19;i<=19*10;i++){
	 if(i%19==0)cout<<i<<" ";	
}cout<<endl;
	//print table of a given user input number
	int n;
	cin>>n;
    for(int i=1;i<=10*n;i++){
	 if(i%n==0)cout<<i<<" ";	
}cout<<endl;
}
