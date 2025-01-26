#include <iostream>
using namespace std;

int main() {
    double mpg, l_per_100km;
    cout << "Enter fuel efficiency in MPG: ";
    cin >> mpg;

    l_per_100km = 235.215 / mpg;
    cout << "Equivalent fuel efficiency in L/100km: " << l_per_100km << endl;

    return 0;
}
