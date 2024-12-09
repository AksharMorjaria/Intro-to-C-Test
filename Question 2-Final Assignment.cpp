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

    //grade
    if (score >= 70) {
        grade = 'A';
    } else if (score >= 60) {
        grade = 'B';
    } else if (score >= 50) {
        grade = 'C';
    } else if (score >= 40) {
        grade = 'D';
    } else if (score >= 0) {
        grade = 'F';
    } else {
        grade = 'I'; // Invalid score
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
