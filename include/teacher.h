#ifndef TEACHER_H
#define TEACHER_H

#include <string>
#include <vector>

using namespace std;

class Teacher
{
private:
    string teacherID;
    string name;
    string department;

    vector<string> subjects;
    vector<string> availableDays;

public:
    Teacher();

    void inputTeacher();

    void displayTeacher();
    
};
#endif 
