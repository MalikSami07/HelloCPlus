#include<iostream>
using namespace std;

int bubblesort(int arr[], int size) {


	for (int j = 0; j < size - 1; j++) {

		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1])
			swap(arr[i], arr[i + 1]);

		}
	}
}
int main() {
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	bubblesort(arr, 10);
	for (int i = 0; i <= 10; i++) {
		cout << arr[i];
	}
} 
