#include <iostream>
using namespace std;

int main() {
    double homework, midterm, finalExam, finalGrade;

    cout << "Enter homework score (out of 100): ";
    cin >> homework;
    cout << "Enter midterm score (out of 100): ";
    cin >> midterm;
    cout << "Enter final exam score (out of 100): ";
    cin >> finalExam;

    finalGrade = (homework * 0.4) + (midterm * 0.3) + (finalExam * 0.3);

    cout << "Final Grade: " << finalGrade << endl;

    if (finalGrade >= 60)
        cout << "You have passed the course." << endl;
    else
        cout << "You have failed the course." << endl;

    return 0;
}
