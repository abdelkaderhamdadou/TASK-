#include <iostream>
using namespace std;

int main() {
    double weight_pounds, height_inches, weight_kg, height_m, bmi;
    cout << "Enter weight in pounds: ";
    cin >> weight_pounds;
    cout << "Enter height in inches: ";
    cin >> height_inches;

    weight_kg = weight_pounds * 0.453592;
    height_m = height_inches * 0.0254;

    bmi = weight_kg / (height_m * height_m);
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
