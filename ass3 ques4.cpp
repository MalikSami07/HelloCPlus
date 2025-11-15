#include<iostream>
#include<cmath>
using namespace std;
int fact(int n){
	int f=1;
	for(int i=1 ; i<=n ; i++){
		f*=i;
	}
		return f;
}

double sin_x(float x){
	double a;
	int f=1;
	for(int i=1 ; i<=x ; i+=2){
		if(f==1){
		a=a+pow(x,i)/fact(i);
	}
       else{
       	a=a-pow(x,i)/fact(i);
	   }
	   f=f*(-1);
	}
     return a;	
}

int main(){
    int x,y;
    cin>>x;
    y=(x*3.14)/180;
    cout<<sin_x(y);
}
