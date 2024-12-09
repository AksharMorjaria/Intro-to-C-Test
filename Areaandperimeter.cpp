#include <iostream>
using namespace std;

int main () {
    float area, perimeter, base, height, hypotenuse;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    cout << "Enter the hypotenuse of the triangle: ";
    cin >> hypotenuse;
    area = 0.5 * base * height;
    perimeter = base + height + hypotenuse;
    cout << "Area of the triangle: " << area << endl;
    cout << "Perimeter of the triangle: " << perimeter << endl;
    return 0;
}