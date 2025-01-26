#include <iostream>
using namespace std;

int main() {
    int minutes, days, hours;
    cout << "Enter time in minutes: ";
    cin >> minutes;

    days = minutes / (24 * 60);
    hours = (minutes % (24 * 60)) / 60;
    minutes = minutes % 60;

    cout << days << " days, " << hours << " hours, and " << minutes << " minutes" << endl;

    return 0;
}
