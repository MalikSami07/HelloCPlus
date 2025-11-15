#include <iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c,d;
	float root1,root2;
	cin>>a>>b>>c;
	d=(b*b)-(4*a*c);
	cout<<d;
	if(d>=0){
	root1=(-b+sqrt(d))/(2*a);
	root2=(-b-sqrt(d))/(2*a);	
	}
	cout<<root1<<endl;
	cout<<root2<<endl;
}

