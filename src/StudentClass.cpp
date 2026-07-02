#include "../include/StudentClass.h"
#include <iostream>

using namespace std;
StudentClass::StudentClass()
{
    className = "";
    department = "";
    semester = 0;
    totalStudents = 0;
}

void StudentClass::inputClass()
{
    cout << "\n========== Add Student Class ==========\n";

    cout << "Enter Class Name: ";
    getline(cin, className);

    cout << "Enter Department: ";
    getline(cin, department);

    cout << "Enter Semester: ";
    cin >> semester;

    cout << "Enter Total Students: ";
    cin >> totalStudents;

    int subjectCount;

    cout << "How many subjects does this class have? ";
    cin >> subjectCount;

    cin.ignore();

    subjectCodes.clear();

    for(int i = 0; i < subjectCount; i++)
    {
        string code;

        cout << "Enter Subject Code " << i + 1 << ": ";

        getline(cin, code);

        subjectCodes.push_back(code);
    }
}
void StudentClass::displayClass()
{
    cout << "\n========== Student Class ==========\n";

    cout << "Class Name      : " << className << endl;
    cout << "Department      : " << department << endl;
    cout << "Semester        : " << semester << endl;
    cout << "Total Students  : " << totalStudents << endl;

    cout << "\nSubjects:\n";

    for(int i = 0; i < subjectCodes.size(); i++)
    {
        cout << i + 1 << ". " << subjectCodes[i] << endl;
    }

    cout << "===================================\n";
}