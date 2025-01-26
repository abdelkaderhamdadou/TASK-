#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool checkUpper(const string &password) {
    for (char c : password)
        if (isupper(c))
            return true;
    return false;
}

bool checkLower(const string &password) {
    for (char c : password)
        if (islower(c))
            return true;
    return false;
}

bool checkDigit(const string &password) {
    for (char c : password)
        if (isdigit(c))
            return true;
    return false;
}

bool checkSpecial(const string &password) {
    for (char c : password)
        if (ispunct(c))
            return true;
    return false;
}

void evaluatePassword(const string &password) {
    cout << "Password strength analysis:\n";

    if (checkUpper(password))
        cout << "- Contains uppercase letters.\n";
    else
        cout << "- No uppercase letters.\n";

    if (checkLower(password))
        cout << "- Contains lowercase letters.\n";
    else
        cout << "- No lowercase letters.\n";

    if (checkDigit(password))
        cout << "- Contains digits.\n";
    else
        cout << "- No digits.\n";

    if (checkSpecial(password))
        cout << "- Contains special characters.\n";
    else
        cout << "- No special characters.\n";

    if (password.length() >= 8 && checkUpper(password) && checkLower(password) && checkDigit(password) && checkSpecial(password))
        cout << "Password is strong.\n";
    else
        cout << "Password is weak. Improve it based on the analysis.\n";
}

int main() {
    string password;
    cout << "Enter your password: ";
    cin >> password;
    evaluatePassword(password);
    return 0;
}
