#include "../include/teacher.h"
#include <iostream>

using namespace std;

// Constructor
Teacher::Teacher()
{
    teacherID = "";
    name = "";
    department = "";
}

// Function to input teacher details
void Teacher::inputTeacher()
{
    cout << "\n========== Add Teacher ==========\n";

    cout << "Enter Teacher ID: ";
    cin >> teacherID;

    cin.ignore();

    cout << "Enter Teacher Name: ";
    getline(cin, name);

    cout << "Enter Department: ";
    getline(cin, department);

    int subjectCount;

    cout << "How many subjects does this teacher teach? ";
    cin >> subjectCount;

    cin.ignore();

    subjects.clear();

    for(int i = 0; i < subjectCount; i++)
    {
        string subject;

        cout << "Enter Subject " << i + 1 << ": ";

        getline(cin, subject);

        subjects.push_back(subject);
    }
}

void Teacher::displayTeacher()
{
    cout << "\n========== Teacher Information ==========\n";

    cout << "Teacher ID : " << teacherID << endl;
    cout << "Teacher Name : " << name << endl;
    cout << "Department : " << department << endl;

    cout << "\nSubjects Taught:\n";

    for(int i = 0; i < subjects.size(); i++)
    {
        cout << i + 1 << ". " << subjects[i] << endl;
    }

    cout << "=========================================\n";
}