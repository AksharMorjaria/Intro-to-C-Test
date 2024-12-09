#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    do {
        cout << "Enter an integer (0 to stop): ";
        cin >> number;
        sum += number;
    } while (number != 0);

    cout << "The sum of the entered integers is: " << sum << endl;

    return 0;
}