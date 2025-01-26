#include <iostream>
#include <thread>   // For sleep
#include <chrono>   // For chrono::seconds
#include <iomanip>  // For formatting
using namespace std;

void updateAndDisplayClock(int &hours, int &minutes) {
    while (true) {
        // Display current time
        cout << setw(2) << setfill('0') << hours << ":"
             << setw(2) << setfill('0') << minutes << endl;

        // Increment time
        this_thread::sleep_for(chrono::seconds(1));
        minutes++;
        if (minutes == 60) {
            minutes = 0;
            hours++;
        }
        if (hours == 24) {
            hours = 0;
        }
    }
}

int main() {
    int hours = 0, minutes = 0;
    cout << "Starting digital clock..." << endl;
    updateAndDisplayClock(hours, minutes);
    return 0;
}
