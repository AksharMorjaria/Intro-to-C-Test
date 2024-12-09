#include <iostream>
using namespace std;

int main() {
    int dig1, dig2;
    bool boolVar1 = true, boolVar2 = false;
    //prompt users to input 2 digits.
    cout << "Enter the first digit: ";
    cin >> dig1;


    cout << "Enter the second digit: ";
    cin >> dig2;

    cout << "You entered " << dig1 << " and " << dig2 << endl;

    // Arithmetic operators
    cout << "Sum of " << dig1 << " + " << dig2 << " = " << dig1 + dig2 << endl;
    cout << "Difference of " << dig1 << " - " << dig2 << " = " << dig1 - dig2 << endl;
    cout << "Product of " << dig1 << " * " << dig2 << " = " << dig1 * dig2 << endl;
    cout << "Division of " << dig1 << " / " << dig2 << " = " << dig1 / dig2 << endl;
    cout << "Modulus of " << dig1 << " % " << dig2 << " = " << dig1 % dig2 << endl;

// Increment operator '++' as a prefix
    cout << "Prefix Increment dig1 by 1: " << ++dig1 << endl;

// Increment operator '++' as a postfix
    cout << "Postfix Increment dig1 by 1: " << dig1++ << endl;

// Decrement operator '--' as prefix
    cout << "Prefix Decrement dig1 by 1: " << --dig1 << endl;

// Decrement operator '--' as postfix
    cout << "Postfix Decrement dig1 by 1: " << dig1-- << endl;  

//Increment and assign operation e.g Increase dig1 by 3
       dig1 += 3; // the same as dig1 = dig1+3;
         cout << "Increment and assign dig1 by 3: " << dig1 << endl; 

// Comparison operators
    //Greater than operators
    cout << dig1 << " greater than " << dig2 << " = " << (bool)(dig1 > dig2) << endl;
    //Less than operators
    cout << dig1 << " less than " << dig2 << " = " << (bool)(dig1 < dig2) << endl;
    
// Equal to operator '=='
cout << dig1 << " equal to " << dig2 << " = " << (bool)(dig1 == dig2) << endl;

// Not equal to operator '!='
cout << dig1 << " not equal to " << dig2 << " = " << (bool)(dig1 != dig2) << endl;

// Boolean operators

// Boolean operator '&&'
cout << boolVar1 << " && " << boolVar2 << " = " << (boolVar1 && boolVar2) << endl;

// Boolean operator '||'
cout << boolVar1 << " || " << boolVar2 << " = " << (boolVar1 || boolVar2) << endl;

// Boolean operator '!'
cout << "!" << boolVar1 << " = " << !boolVar1 << endl;    

// Declare a pointer
int *ptr = nullptr;

// Assign a value to the pointer
ptr = &dig1;

// Output address of dig1
cout << "Address of dig1 = " << &dig1 << endl;

// Dereference the pointer to get the value at the memory location
cout << "Value at memory location pointed by ptr = " << *ptr << endl;
    
  return 0;
}