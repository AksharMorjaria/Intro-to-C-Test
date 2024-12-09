#include <iostream>
using namespace std;

int main (){

// age input
    int age;
    cout << "please enter your age:";
    cin >> age;

// using tenery operator
string message = (age>=4) ? "Admitted to school!" : "Declined. Minimum Age not Reached";
cout << message;
}