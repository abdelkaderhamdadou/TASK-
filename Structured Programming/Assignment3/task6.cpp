#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool isValidPassword(const string &password) {
    if (password.length() < 8)
        return false;

    bool hasUpper = false, hasLower = false, hasDigit = false;
    for (char ch : password) {
        if (isupper(ch))
            hasUpper = true;
        if (islower(ch))
            hasLower = true;
        if (isdigit(ch))
            hasDigit = true;
    }

    return hasUpper && hasLower && hasDigit;
}

int main() {
    string password;

    cout << "Enter your password: ";
    cin >> password;

    if (isValidPassword(password))
        cout << "Password is valid." << endl;
    else
        cout << "Password is invalid. It must be at least 8 characters long, contain at least one uppercase letter, one lowercase letter, and one digit." << endl;

    return 0;
}
