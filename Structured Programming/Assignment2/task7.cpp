#include <iostream>
using namespace std;

int main() {
    int age;
    char isCitizen;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Are you a citizen of the country? (y/n): ";
    cin >> isCitizen;

    if (age >= 18 && (isCitizen == 'y' || isCitizen == 'Y'))
        cout << "You are eligible to vote." << endl;
    else
        cout << "You are not eligible to vote." << endl;

    return 0;
}
