#include "../include/Subject.h"
#include <iostream>

using namespace std;

Subject::Subject()
{
    subjectCode = "";
    subjectName = "";
    semester = 0;
    creditHours = 0;
    weeklyClasses = 0;
    type = "";
}

void Subject::inputSubject()
{
    cout << "\n========== Add Subject ==========\n";

    cout << "Enter Subject Code: ";
    cin >> subjectCode;

    cin.ignore();

    cout << "Enter Subject Name: ";
    getline(cin, subjectName);

    cout << "Enter Semester: ";
    cin >> semester;

    cout << "Enter Credit Hours: ";
    cin >> creditHours;

    cout << "Enter Weekly Classes: ";
    cin >> weeklyClasses;

    cin.ignore();

    cout << "Enter Type (Theory/Lab): ";
    getline(cin, type);
}

void Subject::displaySubject()
{
    cout << "\n========== Subject Information ==========\n";

    cout << "Subject Code : " << subjectCode << endl;
    cout << "Subject Name : " << subjectName << endl;
    cout << "Semester : " << semester << endl;
    cout << "Credit Hours : " << creditHours << endl;
    cout << "Weekly Classes : " << weeklyClasses << endl;
    cout << "Type : " << type << endl;
}