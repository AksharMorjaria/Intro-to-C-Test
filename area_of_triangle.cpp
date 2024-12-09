#include <iostream>

using namespace std;

int main() {
    // Declare variables
    float area, perimeter, base, height, hypotenuse;

    // Ask user for input
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the height: ";
    cin >> height;
    cout << "Enter the hypotenuse: ";
    cin >> hypotenuse;

    // Program logic for Area
    area = (base * height) / 2;

    // Program logic for Perimeter
    perimeter = base + height + hypotenuse;

    // Output the results
    cout << "the area of the triangle is : " << area << endl;
    cout << "the perimeter of the triangle is : " << perimeter << endl;

    return 0;
}