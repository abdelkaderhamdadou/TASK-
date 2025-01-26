#include <iostream>
using namespace std;

int main() {
    int numArrays;
    cout << "Enter the number of arrays: ";
    cin >> numArrays;

    // Dynamic array of pointers
    int **arrays = new int *[numArrays];
    int *sizes = new int[numArrays];

    for (int i = 0; i < numArrays; i++) {
        cout << "Enter the size of array " << i + 1 << ": ";
        cin >> sizes[i];
        arrays[i] = new int[sizes[i]];

        cout << "Enter " << sizes[i] << " elements for array " << i + 1 << ": ";
        for (int j = 0; j < sizes[i]; j++) {
            cin >> arrays[i][j];
        }
    }

    // Display arrays and calculate their sums
    for (int i = 0; i < numArrays; i++) {
        int sum = 0;
        cout << "Array " << i + 1 << ": ";
        for (int j = 0; j < sizes[i]; j++) {
            cout << arrays[i][j] << " ";
            sum += arrays[i][j];
        }
        cout << " | Sum: " << sum << endl;
    }

    // Free allocated memory
    for (int i = 0; i < numArrays; i++) {
        delete[] arrays[i];
    }
    delete[] arrays;
    delete[] sizes;

    return 0;
}
