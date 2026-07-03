#include "../include/RoutineGenerator.h"
#include <iostream>

using namespace std;

// Constructor
RoutineGenerator::RoutineGenerator()
{
}

// Generate Routine
void RoutineGenerator::generateRoutine(
    vector<Teacher>& teachers,
    vector<Subject>& subjects,
    vector<StudentClass>& studentClasses,
    vector<Classroom>& classrooms,
    vector<TimeSlot>& timeSlots)
{
    cout << "\n========================================\n";
    cout << " Automatic Routine Generator Started\n";
    cout << "========================================\n";

    cout << "Teachers Loaded      : " << teachers.size() << endl;
    cout << "Subjects Loaded      : " << subjects.size() << endl;
    cout << "Student Classes      : " << studentClasses.size() << endl;
    cout << "Classrooms Loaded    : " << classrooms.size() << endl;
    cout << "Time Slots Loaded    : " << timeSlots.size() << endl;

    cout << "\nRoutine generation algorithm will be implemented here.\n";
}

// Display Routine
void RoutineGenerator::displayRoutine()
{
    cout << "\nGenerated Routine\n";

    if (routine.empty())
    {
        cout << "No routine has been generated yet.\n";
        return;
    }

    for (int i = 0; i < routine.size(); i++)
    {
        routine[i].displayRoutineEntry();
    }
}