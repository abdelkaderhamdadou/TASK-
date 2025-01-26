#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double weight, height, bmi;
    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (m): ";
    cin >> height;

    bmi = weight / pow(height, 2);
    cout << "BMI: " << bmi << endl;

    if (bmi < 18.5)
        cout << "Category: Underweight" << endl;
    else if (bmi < 24.9)
        cout << "Category: Normal weight" << endl;
    else if (bmi < 29.9)
        cout << "Category: Overweight" << endl;
    else
        cout << "Category: Obese" << endl;

    return 0;
}
