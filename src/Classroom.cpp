#include "../include/Classroom.h"
#include <iostream>

using namespace std;

// Constructor
Classroom::Classroom()
{
    roomNumber = "";
    capacity = 0;
    roomType = "";
    department = "";
}

// Function to input classroom details
void Classroom::inputClassroom()
{
    cout << "\n========== Add Classroom ==========\n";

    cout << "Enter Room Number: ";
    cin >> roomNumber;

    cin.ignore();

    cout << "Enter Department: ";
    getline(cin, department);

    cout << "Enter Capacity: ";
    cin >> capacity;

    cin.ignore();

    cout << "Enter Room Type (Theory/Lab): ";
    getline(cin, roomType);
}

// Function to display classroom details
void Classroom::displayClassroom()
{
    cout << "\n========== Classroom Information ==========\n";

    cout << "Room Number : " << roomNumber << endl;
    cout << "Department  : " << department << endl;
    cout << "Capacity    : " << capacity << endl;
    cout << "Room Type   : " << roomType << endl;

    cout << "===========================================\n";
}