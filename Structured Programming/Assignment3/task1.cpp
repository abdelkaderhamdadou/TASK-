#include <iostream>
#include <iomanip> // For formatting
using namespace std;

int main() {
    const int size = 10;

    // Print header row
    cout << "    ";
    for (int i = 1; i <= size; ++i)
        cout << setw(4) << i;
    cout << endl;

    // Print separator
    cout << "   ";
    for (int i = 1; i <= size; ++i)
        cout << "----";
    cout << endl;

    // Generate multiplication table
    for (int i = 1; i <= size; ++i) {
        cout << setw(2) << i << " |";
        for (int j = 1; j <= size; ++j)
            cout << setw(4) << i * j;
        cout << endl;
    }

    return 0;
}
