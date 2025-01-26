#include <iostream>
using namespace std;

int main() {
    double number, sum = 0, count = 0;

    cout << "Enter numbers (negative number to stop): ";
    while (true) {
        cin >> number;
        if (number < 0)
            break;
        sum += number;
        count++;
    }

    if (count > 0) {
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    } else {
        cout << "No positive numbers were entered." << endl;
    }

    return 0;
}
