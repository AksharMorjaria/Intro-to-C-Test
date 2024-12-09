#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int number = 20;

    while (number <= 25) {
        sum += number;
        number++;
    }

    cout << "The sum of whole numbers from 20 to 25 is: " << sum << endl;

    return 0;
}