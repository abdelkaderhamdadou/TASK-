#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter rows and columns for the first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter rows and columns for the second matrix: ";
    cin >> rows2 >> cols2;

    if (cols1 != rows2) {
        cout << "Matrix multiplication is not possible.\n";
        return 1;
    }

    // Allocate memory for matrices
    int **mat1 = new int *[rows1];
    int **mat2 = new int *[rows2];
    int **result = new int *[rows1];

    for (int i = 0; i < rows1; i++) mat1[i] = new int[cols1];
    for (int i = 0; i < rows2; i++) mat2[i] = new int[cols2];
    for (int i = 0; i < rows1; i++) result[i] = new int[cols2];

    // Input first matrix
    cout << "Enter elements of the first matrix:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> mat1[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of the second matrix:\n";
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> mat2[i][j];
        }
    }

    // Matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display the resulting matrix
    cout << "Resulting matrix:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < rows1; i++) delete[] mat1[i];
    for (int i = 0; i < rows2; i++) delete[] mat2[i];
    for (int i = 0; i < rows1; i++) delete[] result[i];

    delete[] mat1;
    delete[] mat2;
    delete[] result;

    return 0;
}
