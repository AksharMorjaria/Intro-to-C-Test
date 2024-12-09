#include <iostream>
#include <string>

using namespace std;

int main() {
    const string correctPassword = "Kimesh01";
    string userInput;
    int attempts = 0;

    while (attempts < 3) {
        cout << "Enter password: ";
        cin >> userInput;

        if (userInput == correctPassword) {
            cout << "Access given." << endl;
            return 0;
        } else {
            attempts++;
            cout << "Incorrect password. Attempt " << attempts << " of 3." << endl;
        }
    }

    cout << "Password blocked" << endl;
    return 0;
}