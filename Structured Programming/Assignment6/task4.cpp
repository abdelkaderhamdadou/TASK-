#include <iostream>
using namespace std;

int main() {
    int size, newSize;
    cout << "Enter the initial size of the array: ";
    cin >> size;

    // Allocate memory for the array
    int *arr = new int[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Resize the array
    cout << "Enter the new size of the array: ";
    cin >> newSize;
    int *newArr = new int[newSize];

    for (int i = 0; i < min(size, newSize); i++) {
        newArr[i] = arr[i];
    }

    if (newSize > size) {
        cout << "Enter values for new elements: ";
        for (int i = size; i < newSize; i++) {
            cin >> newArr[i];
        }
    }

    // Display the resized array
    cout << "Resized array: ";
    for (int i = 0; i < newSize; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    // Free memory
    delete[] arr;
    delete[] newArr;

    return 0;
}
