#include <iostream>
using namespace std;

int swap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
	return x,y;
}
int main() {
	int x = 4;
	int y = 7;
    cout <<x<<""<<y<<endl;
	swap(x,y); 
	cout << x << "" << y<<endl;
}
