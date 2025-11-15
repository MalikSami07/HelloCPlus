#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {       // Passes
        for (int j = 0; j < size - i - 1; j++) { // Comparisons
            if (arr[j] > arr[j + 1]) {          // Swap if out of order
                swap(arr[j], arr[j + 1]);       // Built-in swap function
            }
        }
    }
}

void Unsortedarray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int s;   
    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> s;   
    int arr[s]; // Define the array of size 's'   
    // Input elements into the array
    cout << "Enter " << s << " integers:" << endl;
    for (int i = 0; i < s; i++) {
        cin >> arr[i];
    }    
    // Display the unsorted array
    cout << "Unsorted array: ";
    Unsortedarray(arr, s);
	}
	    // Sort the array using Bubble Sort
    bubbleSort(arr, s);
    
    // Display the sorted array
    cout << "Sorted array: ";
    displayArray(arr, s);
    
    return 0;
}
