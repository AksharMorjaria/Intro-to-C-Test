#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName, lastName, favoriteMeal, favoriteMovie;

    // Takinng Inputs of user details
    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Enter your last name: ";
    getline(cin, lastName);
    cout << "Enter your favorite meal: ";
    getline(cin, favoriteMeal);
    cout << "Enter your favorite movie: ";
    getline(cin, favoriteMovie);

    // first n last name
    string fullName = firstName + " " + lastName;

    // Display user profile
    cout << "\n--- User Profile ---\n";
    cout << "First Name: " << firstName << "\n";
    cout << "Last Name: " << lastName << "\n";
    cout << "Full Name: " << fullName << "\n";
    cout << "Favorite Food: " << favoriteMeal << "\n";
    cout << "Favorite Film: " << favoriteMovie << "\n";

    return 0;
}