#include <iostream>>
using namespace std;
int main(){
	int x;
	cout<<"enter number";
	cin>>x;
	if((x%5==0 || x%3==0 ) && (x%15!=0))
	{cout<<"its devisible by 5 or 3 and not divisble by 15";
	}
}
