#ifndef ROUTINEGENERATOR_H
#define ROUTINEGENERATOR_H

#include <vector>

#include "RoutineEntry.h"
#include "teacher.h"
#include "Subject.h"
#include "StudentClass.h"
#include "Classroom.h"
#include "TimeSlot.h"

using namespace std;

class RoutineGenerator
{
private:
    vector<RoutineEntry> routine;

public:
    RoutineGenerator();

   void generateRoutine(
    vector<Teacher>& teachers,
    vector<Subject>& subjects,
    vector<StudentClass>& studentClasses,
    vector<Classroom>& classrooms,
    vector<TimeSlot>& timeSlots
);

    void displayRoutine();

    
};

#endif