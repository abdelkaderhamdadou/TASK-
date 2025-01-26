#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

// Structure for product
struct Product {
    int id;
    string name;
    int quantity;
    double price;
};

// Structure for sales record
struct Sale {
    int productId;
    int quantitySold;
    string date;
};

// Function to display inventory
void displayInventory(const vector<Product> &inventory) {
    cout << "\nCurrent Inventory:\n";
    cout << setw(10) << "ID" << setw(20) << "Product Name" << setw(10) << "Quantity" << setw(10) << "Price\n";
    for (const auto &product : inventory) {
        cout << setw(10) << product.id
             << setw(20) << product.name
             << setw(10) << product.quantity
             << setw(10) << fixed << setprecision(2) << product.price << endl;
    }
}

// Function to display sales report
void displaySalesReport(const vector<Sale> &sales, const vector<Product> &inventory) {
    cout << "\nSales Report:\n";
    cout << setw(10) << "Product ID" << setw(20) << "Product Name" << setw(10) << "Qty Sold" << setw(15) << "Date" << setw(10) << "Revenue\n";
    double totalRevenue = 0;
    for (const auto &sale : sales) {
        const auto &product = *find_if(inventory.begin(), inventory.end(), [&sale](const Product &p) {
            return p.id == sale.productId;
        });
        double revenue = sale.quantitySold * product.price;
        totalRevenue += revenue;
        cout << setw(10) << sale.productId
             << setw(20) << product.name
             << setw(10) << sale.quantitySold
             << setw(15) << sale.date
             << setw(10) << fixed << setprecision(2) << revenue << endl;
    }
    cout << "\nTotal Revenue: $" << fixed << setprecision(2) << totalRevenue << endl;
}

// Function to process a sale
void processSale(vector<Product> &inventory, vector<Sale> &sales) {
    int productId, quantitySold;
    string date;

    cout << "Enter Product ID: ";
    cin >> productId;

    auto it = find_if(inventory.begin(), inventory.end(), [productId](const Product &p) {
        return p.id == productId;
    });

    if (it == inventory.end()) {
        cout << "Error: Product not found in inventory.\n";
        return;
    }

    cout << "Enter Quantity Sold: ";
    cin >> quantitySold;

    if (quantitySold > it->quantity) {
        cout << "Error: Not enough stock available.\n";
        return;
    }

    cout << "Enter Date (YYYY-MM-DD): ";
    cin >> date;

    // Update inventory
    it->quantity -= quantitySold;

    // Record the sale
    sales.push_back({productId, quantitySold, date});

    cout << "Sale processed successfully.\n";
}

int main() {
    vector<Product> inventory = {
        {1, "Laptop", 50, 1200.00},
        {2, "Smartphone", 100, 800.00},
        {3, "Tablet", 30, 400.00},
        {4, "Headphones", 200, 50.00},
        {5, "Smartwatch", 75, 250.00},
    };

    vector<Sale> sales;

    while (true) {
        cout << "\nInventory Management System\n";
        cout << "1. Display Inventory\n";
        cout << "2. Process Sale\n";
        cout << "3. Display Sales Report\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            displayInventory(inventory);
            break;
        case 2:
            processSale(inventory, sales);
            break;
        case 3:
            displaySalesReport(sales, inventory);
            break;
        case 4:
            cout << "Exiting the program.\n";
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }
}
