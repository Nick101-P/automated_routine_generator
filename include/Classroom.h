#ifndef CLASSROOM_H
#define CLASSROOM_H

#include <string>

using namespace std;

class Classroom
{
private:

    string roomNumber;
    int capacity;
    string roomType;
    string department;

public:

    Classroom();

    void inputClassroom();

    void displayClassroom();
};
#endif