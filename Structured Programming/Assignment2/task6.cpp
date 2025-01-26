#include <iostream>
using namespace std;

int main() {
    double price, discount = 0, finalPrice;
    cout << "Enter product price: $";
    cin >> price;

    if (price > 100)
        discount = price * 0.10;

    finalPrice = price - discount;
    cout << "Original Price: $" << price << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Final Price: $" << finalPrice << endl;

    return 0;
}
