#include <iostream>
#include <string>
using namespace std;

bool YourNameLoanCalculator(int age, double bankBalance, string crbStatus, int customerDuration) {
    // Check if the customer meets all the loan conditions.
    if (age > 22 && bankBalance > 50000 && crbStatus == "good" && customerDuration > 6) {
        return true; // Qualified 
    }
    return false; // Not qualified
}

int main() {
   
    int age, customerDuration;
    double bankBalance;
    string crbStatus;

    //customer details
    cout << "Enter customer's age: ";
    cin >> age;

    cout << "Enter customer's bank balance: ";
    cin >> bankBalance;

    cout << "Enter customer's CRB status (good/bad): ";
    cin >> crbStatus;

    cout << "Enter the number of months the customer has been with the bank: ";
    cin >> customerDuration;

    //call the loan
    if (YourNameLoanCalculator(age, bankBalance, crbStatus, customerDuration)) {
        cout << "The customer is qualified for the loan." << endl;
    } else {
        cout << "The customer is not qualified for the loan." << endl;
    }

    return 0;
}
