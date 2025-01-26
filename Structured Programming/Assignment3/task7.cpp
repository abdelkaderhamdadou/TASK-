#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the maximum number: ";
    cin >> n;

    cout << "Number  Square  Cube" << endl;
    for (int i = 1; i <= n; ++i) {
        cout << i << "       " << i * i << "       " << i * i * i << endl;
    }

    return 0;
}
