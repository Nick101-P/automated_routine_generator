#ifndef ROUTINEMANAGER_H
#define ROUTINEMANAGER_H

#include <vector>
#include "teacher.h"

using namespace std;

class RoutineManager
{
private:

    vector<Teacher> teachers;

public:

    void start();

    void addTeacher();

    void viewTeachers();
};

#endif

