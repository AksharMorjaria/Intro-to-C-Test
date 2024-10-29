#include <iostream>
using namespace std;

//Global variable declaration and initialization
int globalVar=30;
const int age =25; // Constant global varlable.
//Value will not change

void myFunction()
{
// Function code block
cout << "Global Variable: " << globalVar << endl;
cout << "Constant Global Variable: " << age << endl;
}
int main ()
{
// Function code block
cout << "Global Variable: " << globalVar << endl;
cout << "Constant Global Variable: " << age << endl;
return 0;
}