#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Function to display the seating arrangement
void displaySeating(const vector<vector<char>> &seating) {
    cout << "\nSeating Arrangement:\n";
    cout << "   ";
    for (int j = 0; j < 10; j++) {
        cout << setw(3) << j + 1;
    }
    cout << endl;

    for (int i = 0; i < 10; i++) {
        cout << setw(2) << i + 1 << " ";
        for (int j = 0; j < 10; j++) {
            cout << setw(3) << seating[i][j];
        }
        cout << endl;
    }
}

// Function to reserve a seat
void reserveSeat(vector<vector<char>> &seating, int row, int col) {
    if (row < 1 || row > 10 || col < 1 || col > 10) {
        cout << "Invalid seat number. Please try again.\n";
        return;
    }

    if (seating[row - 1][col - 1] == 'R') {
        cout << "Seat already reserved. Please choose a different seat.\n";
    } else {
        seating[row - 1][col - 1] = 'R';
        cout << "Seat reserved successfully.\n";
    }
}

// Function to cancel a reservation
void cancelReservation(vector<vector<char>> &seating, int row, int col) {
    if (row < 1 || row > 10 || col < 1 || col > 10) {
        cout << "Invalid seat number. Please try again.\n";
        return;
    }

    if (seating[row - 1][col - 1] == 'A') {
        cout << "Seat is already available. No reservation to cancel.\n";
    } else {
        seating[row - 1][col - 1] = 'A';
        cout << "Reservation canceled successfully.\n";
    }
}

// Main function
int main() {
    vector<vector<char>> seating(10, vector<char>(10, 'A')); // Initialize all seats as available ('A')

    int choice, row, col;

    do {
        cout << "\nTheater Seating Management System\n";
        cout << "1. Display Seating Arrangement\n";
        cout << "2. Reserve a Seat\n";
        cout << "3. Cancel a Reservation\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displaySeating(seating);
                break;

            case 2:
                cout << "Enter the row (1-10): ";
                cin >> row;
                cout << "Enter the column (1-10): ";
                cin >> col;
                reserveSeat(seating, row, col);
                break;

            case 3:
                cout << "Enter the row (1-10): ";
                cin >> row;
                cout << "Enter the column (1-10): ";
                cin >> col;
                cancelReservation(seating, row, col);
                break;

            case 4:
                cout << "Exiting the program. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
