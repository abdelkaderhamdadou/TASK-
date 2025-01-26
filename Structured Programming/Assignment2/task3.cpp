#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age >= 0 && age <= 12)
        cout << "Age Group: Child" << endl;
    else if (age >= 13 && age <= 19)
        cout << "Age Group: Teenager" << endl;
    else if (age >= 20 && age <= 64)
        cout << "Age Group: Adult" << endl;
    else if (age >= 65)
        cout << "Age Group: Senior" << endl;
    else
        cout << "Invalid age entered." << endl;

    return 0;
}
