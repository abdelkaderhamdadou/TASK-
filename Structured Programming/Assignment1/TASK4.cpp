#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius, kelvin;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (5.0 / 9.0) * (fahrenheit - 32);
    kelvin = celsius + 273.15;

    cout << "Celsius: " << celsius << endl;
    cout << "Kelvin: " << kelvin << endl;

    return 0;
}
