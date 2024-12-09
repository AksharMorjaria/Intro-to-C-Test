#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter the age of the child: ";
    cin >> age;

    if (age >= 7) {
        cout << "Admit to Grade School" << endl;
    }
    else if (age >= 5) {
        cout << "Admit to Kindergarten" << endl;
    }
    else if (age >= 3) {
        cout << "Admit to Pre-School" << endl;
    }
    else if (age >= 1) {
        cout << "Admit to Play Group" << endl;
    }
    else {
        cout << "Reject" << endl;
    }

    return 0;
}