#include <iostream>  
using namespace std;  
int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;
	int n = sizeof(arr) / 4;

	for (int i = 1; i <= n; i++) {
		cin >> *(ptr+i);
	}
	for (int i = 1; i <= n; i++) {
		cout << *(ptr + i);
	}
}
