#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void toUpperCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    // Dynamic memory allocation for the string
    char *str = new char[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Find the length of the string
    cout << "Length of the string: " << strlen(str) << endl;

    // Append another string
    char *appendStr = new char[50];
    cout << "Enter another string to append: ";
    cin.getline(appendStr, 50);
    strcat(str, appendStr);
    cout << "String after appending: " << str << endl;

    // Convert to uppercase
    toUpperCase(str);
    cout << "String in uppercase: " << str << endl;

    // Display final length
    cout << "Final length of the string: " << strlen(str) << endl;

    // Free allocated memory
    delete[] str;
    delete[] appendStr;

    return 0;
}
