#include "../include/RoutineEntry.h"
#include <iostream>

using namespace std;

// Constructor
RoutineEntry::RoutineEntry()
{
    teacherID = "";
    subjectCode = "";
    className = "";
    roomNumber = "";
    slotID = 0;
}

// Function to input routine entry
void RoutineEntry::inputRoutineEntry()
{
    cout << "\n========== Add Routine Entry ==========\n";

    cout << "Enter Teacher ID: ";
    getline(cin, teacherID);

    cout << "Enter Subject Code: ";
    getline(cin, subjectCode);

    cout << "Enter Class Name: ";
    getline(cin, className);

    cout << "Enter Room Number: ";
    getline(cin, roomNumber);

    cout << "Enter Slot ID: ";
    cin >> slotID;

    cin.ignore();

    cout << "\nRoutine Entry Added Successfully!\n";
}

// Function to display routine entry
void RoutineEntry::displayRoutineEntry()
{
    cout << "\n========== Routine Entry ==========\n";

    cout << "Teacher ID   : " << teacherID << endl;
    cout << "Subject Code : " << subjectCode << endl;
    cout << "Class Name   : " << className << endl;
    cout << "Room Number  : " << roomNumber << endl;
    cout << "Slot ID      : " << slotID << endl;

    cout << "===================================\n";
}