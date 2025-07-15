#include <iostream>
using namespace std;

// Function to reverse the array
void reversArray(int arr[], int len) {
    for (int i = 0; i < len / 2; ++i) {
        swap(arr[i], arr[len - i - 1]);
    }
}

int main() {
    int n;
    
    // Take input for array size
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];  // Declare array

    // Take array input
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Reverse the array
    reversArray(arr, n);

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
