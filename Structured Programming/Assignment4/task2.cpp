#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Expense {
    string type;
    double amount;
};

void addExpense(vector<Expense> &expenses) {
    Expense expense;
    cout << "Enter expense type (e.g., food, transport): ";
    cin >> expense.type;
    cout << "Enter expense amount: ";
    cin >> expense.amount;
    expenses.push_back(expense);
    cout << "Expense added successfully.\n";
}

void viewExpenses(const vector<Expense> &expenses) {
    double total = 0;
    cout << "Expenses:\n";
    for (const auto &expense : expenses) {
        cout << "- " << expense.type << ": $" << expense.amount << endl;
        total += expense.amount;
    }
    cout << "Total expenditure: $" << total << endl;
}

int main() {
    vector<Expense> expenses;
    int choice;

    do {
        cout << "\nExpense Tracker Menu:\n"
             << "1. Add Expense\n"
             << "2. View Expenses\n"
             << "3. Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addExpense(expenses);
                break;
            case 2:
                viewExpenses(expenses);
                break;
            case 3:
                cout << "Exiting tracker. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);

    return 0;
}
