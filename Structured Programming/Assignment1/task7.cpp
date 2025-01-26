#include <iostream>
#include <cmath> // For pow function
using namespace std;

int main() {
    double principal, annualInterestRate, loanTermYears, monthlyPayment;
    cout << "Enter loan principal amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (in %): ";
    cin >> annualInterestRate;
    cout << "Enter loan term (in years): ";
    cin >> loanTermYears;

    double monthlyRate = (annualInterestRate / 100) / 12;
    int totalPayments = loanTermYears * 12;

    monthlyPayment = (principal * monthlyRate * pow(1 + monthlyRate, totalPayments)) / 
                     (pow(1 + monthlyRate, totalPayments) - 1);

    cout << "Monthly Payment: " << monthlyPayment << endl;

    return 0;
}
