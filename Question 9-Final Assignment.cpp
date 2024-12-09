#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string movieType;
    double ticketPrice;

    //age
    cout << "Enter the customer's age";
    cin >> age;

    //movie
    cout << "Enter the type of movie (regular or 3D)";
    cin >> movieType;

    //price
    if (age < 12) {
        if (movieType == "regular") {
            ticketPrice = 5.0; // Child 2D
        } else if (movieType == "3D") {
            ticketPrice = 7.0; // Child 3D
        } else {
            cout << "Invalid movie type!\n";
            return 1;
        }
    } else if (age >= 12 && age <= 60) {
        if (movieType == "regular") {
            ticketPrice = 10.0; // Adult 2D
        } else if (movieType == "3D") {
            ticketPrice = 15.0; // Adult 3D
        } else {
            cout << "Invalid movie type!\n";
            return 1;
        }
    } else { // Senior pricing
        if (movieType == "regular") {
            ticketPrice = 8.0; // Senior 2D
        } else if (movieType == "3D") {
            ticketPrice = 12.0; // Senior 3D
        } else {
            cout << "Invalid movie type!\n";
            return 1;
        }
    }

    // Output 
    cout << "The ticket price is: $" << ticketPrice << endl;

    return 0;
}
