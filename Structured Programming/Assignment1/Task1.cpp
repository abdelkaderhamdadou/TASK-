#include <iostream>
using namespace std;

int main() {
    double usd, euros, yen, pounds;
    const double USD_TO_EUROS = 0.85;
    const double USD_TO_YEN = 109.57;
    const double USD_TO_POUNDS = 0.73;

    cout << "Enter amount in USD: ";
    cin >> usd;

    euros = usd * USD_TO_EUROS;
    yen = usd * USD_TO_YEN;
    pounds = usd * USD_TO_POUNDS;

    cout << "Equivalent in Euros: " << euros << endl;
    cout << "Equivalent in Yen: " << yen << endl;
    cout << "Equivalent in Pounds: " << pounds << endl;

    return 0;
}
