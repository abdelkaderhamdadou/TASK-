#include <iostream>
#include <map>
#include <string>
using namespace std;

void addEntry(map<string, string> &diary) {
    string date, content;
    cout << "Enter date (YYYY-MM-DD): ";
    cin >> date;
    cin.ignore();
    cout << "Enter diary content: ";
    getline(cin, content);
    diary[date] = content;
    cout << "Entry added successfully.\n";
}

void viewEntries(const map<string, string> &diary) {
    if (diary.empty()) {
        cout << "No diary entries found.\n";
        return;
    }
    for (const auto &entry : diary) {
        cout << "Date: " << entry.first << "\nContent: " << entry.second << "\n\n";
    }
}

void deleteEntry(map<string, string> &diary) {
    string date;
    cout << "Enter date of the entry to delete (YYYY-MM-DD): ";
    cin >> date;

    if (diary.erase(date))
        cout << "Entry deleted successfully.\n";
    else
        cout << "No entry found for the given date.\n";
}

int main() {
    map<string, string> diary;
    int choice;

    do {
        cout << "\nDiary Menu:\n"
             << "1. Add Entry\n"
             << "2. View Entries\n"
             << "3. Delete Entry\n"
             << "4. Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEntry(diary);
                break;
            case 2:
                viewEntries(diary);
                break;
            case 3:
                deleteEntry(diary);
                break;
            case 4:
                cout << "Exiting diary application. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
