#ifndef ROUTINEENTRY_H
#define ROUTINEENTRY_H

#include <string>

using namespace std;

class RoutineEntry
{
private:
    string teacherID;
    string subjectCode;
    string className;
    string roomNumber;
    int slotID;

public:
    // Constructor
    RoutineEntry();

    // Member Functions
    void inputRoutineEntry();
    void displayRoutineEntry();
};

#endif