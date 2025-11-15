#include <iostream>
using namespace std;
int main(){
	
//using  switch statement another replacecement of if else
int a;
cout<<"enter a"<<endl;
cin>>a;
char op;
cout<<"enter op "<<endl;
cin>>op;
float b;
//cout<<"enter b"<<endl;
//cin>>b;
//if (op=='+')cout<<a+b;
//if (op=='-')cout<<a*b;
//if (op=='/')cout<<a/b;
//if (op=='*')cout<<a*b;
//}
switch(op){
	case '+':
		cout<<a+b;
		break;
	case '-':
		cout<<a-b;
		break;
    case '*':
		cout<<a*b;
		break;
    case '/':	
		cout<<a/b;	
		break;
		defaut:	
		cout<<"invalid operater";
}}
