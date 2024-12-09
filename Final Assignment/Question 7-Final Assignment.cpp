#include <iostream>
#include <string>
using namespace std;

int main() {
    string bookType;
    int daysLate;
    double fine = 0.0;

    
    cout << "Enter the type of book (regular, children, reference)";
    cin >> bookType;

    // Get the number of days the book is late
    cout << "Enter the number of days late";
    cin >> daysLate;

    // Calculate the fine based on book type and days late
    if (bookType == "regular") {
        if (daysLate <= 7) {
            fine = daysLate * 0.5; // 0.50 per day
        } else {
            fine = (7 * 0.5) + ((daysLate - 7) * 1.0); // 1.00 per day after 7 days
        }
    } else if (bookType == "children") {
        if (daysLate <= 7) {
            fine = daysLate * 0.25; // $0.25 per day
        } else {
            fine = (7 * 0.25) + ((daysLate - 7) * 0.5); // 0.50 per day after 7 days
        }
    } else if (bookType == "reference") {
        if (daysLate > 0) {
            fine = daysLate * 2.0; // $2.00 per day for any late return
        }
    } else {
        cout << "Invalid book type entered. Please enter 'regular', 'children', or 'reference'." << endl;
        return 1; //exit
    }

    // Display the fine amount
    cout << "The total fine for a " << bookType << " book returned " << daysLate << " days late is $" << fine << "." << endl;

    return 0;
}
