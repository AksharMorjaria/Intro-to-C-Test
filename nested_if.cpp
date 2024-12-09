#include <iostream>

using namespace std;

int main() {
    string childName, interest;
    int age;

    cout << "Please enter the child's name: ";
    getline(cin, childName);
    cout << "Please enter the child's age: ";
    cin >> age;

    if (age >= 4 && age <= 10) {
        cout << "Please enter the child's interest: ";
        cin >> interest;
        if (interest == "soccer") { // First nested IF
            cout << childName << " has been Admitted and assigned to the Soccer Play group." << endl;
        } else if (interest == "art") { // Second nested IF
            cout << childName << " has been Admitted and assigned to the Art Play Group." << endl;
        } else {
            cout << childName << " has been Admitted and assigned to other groups." << endl;
        }
    } else {
        cout << childName << " is not eligible for school admission." << endl;
    }

    return 0;
}