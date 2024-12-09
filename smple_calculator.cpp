#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    char operation;
    int result;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Input the operation
    cout << "Enter type of calculation (+, -, *, /): ";
    cin >> operation;

    // Perform the operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not possible." << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 1;
    }

    // Output the result
    cout << "The answer is: " << result << endl;

    return 0;
}