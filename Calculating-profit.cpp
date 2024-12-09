#include <iostream>
using namespace std;

int main() {
    float cp, sp, profit;
    cout << "Enter Cost Price: ";
    cin >> cp;
    cout << "Enter Selling Price: ";
    cin >> sp;
    profit = sp - cp;
    cout << "Profit: " << profit;
    return 0;
}