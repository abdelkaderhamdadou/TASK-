#include <iostream>
using namespace std;

int main() {
    double kilometers, miles, feet, inches;
    cout << "Enter distance in kilometers: ";
    cin >> kilometers;

    miles = kilometers * 0.621371;
    feet = miles * 5280;
    inches = feet * 12;

    cout << "Miles: " << miles << endl;
    cout << "Feet: " << feet << endl;
    cout << "Inches: " << inches << endl;

    return 0;
}
