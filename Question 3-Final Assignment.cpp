#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName, course;
    int score;
    char grade;

    // Input student details
    cout << "Enter the full name of the student: ";
    getline(cin, fullName);
    cout << "Enter the course: ";
    getline(cin, course);
    cout << "Enter the score: ";
    cin >> score;

    // Determine the grade using switch-case
    switch (score / 10) {
        case 10: //scores 100
        case 9:
        case 8:
        case 7:
            grade = 'A';
            break;
        case 6:
            grade = 'B';
            break;
        case 5:
            grade = 'C';
            break;
        case 4:
            grade = 'D';
            break;
        case 3: //below 40
        case 2:
        case 1:
        case 0:
            grade = 'F';
            break;
        default:
            grade = 'I'; // Invalid score
            break;
    }

    // Output
    cout << "\nStudent Details:\n";
    cout << "Full Name: " << fullName << endl;
    cout << "Course: " << course << endl;
    if (grade == 'I') {
        cout << "Grade: Invalid score" << endl;
    } else {
        cout << "Grade: " << grade << endl;
    }

    return 0;
}
