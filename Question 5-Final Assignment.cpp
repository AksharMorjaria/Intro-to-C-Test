#include <iostream>
#include <cmath> 
using namespace std;

void displayMenu() {
    cout << "\nMenu:" << endl;
    cout << "1. Calculate the area of a circle" << endl;
    cout << "2. Calculate the area of a rectangle" << endl;
    cout << "3. Calculate the area of a triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1: {
                double radius;
                cout << "Enter the radius of the circle";
                cin >> radius;
                if (radius < 0) {
                    cout << "Radius cannot be negative" << endl;
                } else {
                    double area = M_PI * pow(radius, 2);
                    cout << "The area of the circle is" << area << endl;
                }
                break;
            }

            case 2: {
                double length, width;
                cout << "Enter the length and width of the rectangle";
                cin >> length >> width;
                if (length < 0 || width < 0) {
                    cout << "Length and width cannot be negative" << endl;
                } else {
                    double area = length * width;
                    cout << "The area of the rectangle is" << area << endl;
                }
                break;
            }

            case 3: {
                double base, height;
                cout << "Enter the base and height of the triangle";
                cin >> base >> height;
                if (base < 0 || height < 0) {
                    cout << "Base and height cannot be negative" << endl;
                } else {
                    double area = 0.5 * base * height;
                    cout << "The area of the triangle is" << area << endl;
                }
                break;
            }

            case 4:
                cout << "Exiting the program" << endl;
                break;

            default:
                cout << "Invalid choice Please try again" << endl;
        }

    } while (choice != 4);

    return 0;
}
