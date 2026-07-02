#ifndef SUBJECT_H
#define SUBJECT_H

#include <string>

using namespace std;

class Subject
{
private:
    string subjectCode;
    string subjectName;
    int semester;
    int creditHours;
    int weeklyClasses;
    string type;   // Theory or Lab

public:
    Subject();

    void inputSubject();

    void displaySubject();
};

#endif