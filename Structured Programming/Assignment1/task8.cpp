#include <iostream>
#include <cmath> // For M_PI
using namespace std;

int main() {
    double radius, height, volume, surfaceArea;

    cout << "Enter radius of the cylinder: ";
    cin >> radius;
    cout << "Enter height of the cylinder: ";
    cin >> height;

    volume = M_PI * pow(radius, 2) * height;
    surfaceArea = 2 * M_PI * radius * (radius + height);

    cout << "Volume: " << volume << endl;
    cout << "Surface Area: " << surfaceArea << endl;

    return 0;
}
