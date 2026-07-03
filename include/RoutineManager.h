#ifndef ROUTINEMANAGER_H
#define ROUTINEMANAGER_H

#include <vector>
#include "RoutineGenerator.h"
#include "teacher.h"
#include "Subject.h"
#include "StudentClass.h"
#include "Classroom.h"
#include "TimeSlot.h"

using namespace std;

class RoutineManager
{
private:
    RoutineGenerator generator;
    vector<Teacher> teachers;
    vector<Subject> subjects;
    vector<StudentClass> classes;
    vector<Classroom> classrooms;
    vector<TimeSlot> timeSlots;

public:
    void start();

    void addTeacher();
    void viewTeachers();

    void addSubject();
    void viewSubjects();

    void addStudentClass();
    void viewStudentClasses();

    void addClassroom();
    void viewClassrooms();

    void addTimeSlot();
    void viewTimeSlots();

    void generateRoutine();
};

#endif