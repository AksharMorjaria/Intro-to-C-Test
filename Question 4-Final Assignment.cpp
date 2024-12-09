#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    //two numbers from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Determine the maximum number using a switch statement
    int caseSelector = (num1 > num2) ? 1 : (num1 < num2) ? 2 : 0;

    switch (caseSelector) {
        case 1:
            cout << "The maximum number is: " << num1 << endl;
            break;
        case 2:
            cout << "The maximum number is: " << num2 << endl;
            break;
        case 0:
            cout << "Both numbers are equal: " << num1 << endl;
            break;
        default:
            cout << "An unexpected error occurred." << endl;
    }

    return 0;
}
