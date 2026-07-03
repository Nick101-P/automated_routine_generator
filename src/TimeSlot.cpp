#include "../include/TimeSlot.h"
#include <iostream>

using namespace std;

// Constructor
TimeSlot::TimeSlot()
{
    slotID = 0;
    day = "";
    startTime = "";
    endTime = "";
}

// Input Function
void TimeSlot::inputTimeSlot()
{
    cout << "\n========== Add Time Slot ==========\n";

    cout << "Enter Slot ID: ";
    cin >> slotID;

    cin.ignore();

    cout << "Enter Day: ";
    getline(cin, day);

    cout << "Enter Start Time (e.g. 8:00): ";
    getline(cin, startTime);

    cout << "Enter End Time (e.g. 9:00): ";
    getline(cin, endTime);
}

// Display Function
void TimeSlot::displayTimeSlot()
{
    cout << "\n========== Time Slot ==========\n";

    cout << "Slot ID    : " << slotID << endl;
    cout << "Day        : " << day << endl;
    cout << "Start Time : " << startTime << endl;
    cout << "End Time   : " << endTime << endl;

    cout << "===============================\n";
}