#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter student's score (0-100): ";
    cin >> score;

    if (score >= 90 && score <= 100)
        cout << "Grade: A - Excellent performance!" << endl;
    else if (score >= 80)
        cout << "Grade: B - Good job!" << endl;
    else if (score >= 70)
        cout << "Grade: C - Satisfactory." << endl;
    else if (score >= 60)
        cout << "Grade: D - Needs improvement." << endl;
    else
        cout << "Grade: F - Fail." << endl;

    return 0;
}
