#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter kaif age: ";
	cin>>a;
	cout<<"enter baju: ";
	cin>>b;
	cout<<"enter rafu: ";
	cin>>c;
	if(a<b){
		if(a<c){cout<<"kaifis youngest";
		}
		else{cout<<"rafu is youngest";
		}
	}
	else {
		if(b<c){cout<<"baju is youngest";
		}
		else{cout<<"rafuis greater";
		}
	}
}
