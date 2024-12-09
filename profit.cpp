#include <iostream>
using namespace std;

int main ()
{
    int sellingPrice, costPrice, profit;

    // Taking input of selling price and cost price of the vehicle
    cout << "Enter the selling price of the vehicle: ";
    cin >> sellingPrice;
    cout << "Enter the cost price of the vehicle: ";
    cin >> costPrice;

    // Program logic to calculate profit
    profit = sellingPrice - costPrice;

    // Displaying profit
    cout << "Profit: " << profit << endl;

    return 0;
}