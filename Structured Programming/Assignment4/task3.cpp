#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

struct Account {
    string name;
    double balance;
};

void createAccount(unordered_map<int, Account> &accounts) {
    int accountNumber;
    Account account;
    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter account holder's name: ";
    cin >> account.name;
    account.balance = 0;
    accounts[accountNumber] = account;
    cout << "Account created successfully.\n";
}

void deposit(unordered_map<int, Account> &accounts) {
    int accountNumber;
    double amount;
    cout << "Enter account number: ";
    cin >> accountNumber;

    if (accounts.find(accountNumber) != accounts.end()) {
        cout << "Enter deposit amount: ";
        cin >> amount;
        accounts[accountNumber].balance += amount;
        cout << "Deposit successful. New balance: $" << accounts[accountNumber].balance << endl;
    } else {
        cout << "Account not found.\n";
    }
}

void withdraw(unordered_map<int, Account> &accounts) {
    int accountNumber;
    double amount;
    cout << "Enter account number: ";
    cin >> accountNumber;

    if (accounts.find(accountNumber) != accounts.end()) {
        cout << "Enter withdrawal amount: ";
        cin >> amount;
        if (amount <= accounts[accountNumber].balance) {
            accounts[accountNumber].balance -= amount;
            cout << "Withdrawal successful. New balance: $" << accounts[accountNumber].balance << endl;
        } else {
            cout << "Insufficient funds.\n";
        }
    } else {
        cout << "Account not found.\n";
    }
}

void checkBalance(const unordered_map<int, Account> &accounts) {
    int accountNumber;
    cout << "Enter account number: ";
    cin >> accountNumber;

    if (accounts.find(accountNumber) != accounts.end()) {
        cout << "Account balance: $" << accounts.at(accountNumber).balance << endl;
    } else {
        cout << "Account not found.\n";
    }
}

int main() {
    unordered_map<int, Account> accounts;
    int choice;

    do {
        cout << "\nBanking System Menu:\n"
             << "1. Create Account\n"
             << "2. Deposit\n"
             << "3. Withdraw\n"
             << "4. Check Balance\n"
             << "5. Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createAccount(accounts);
                break;
            case 2:
                deposit(accounts);
                break;
            case 3:
                withdraw(accounts);
                break;
            case 4:
                checkBalance(accounts);
                break;
            case 5:
                cout << "Exiting banking system. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
