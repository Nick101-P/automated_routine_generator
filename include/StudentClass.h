#ifndef STUDENTCLASS_H
#define STUDENTCLASS_H

#include <string>
#include <vector>

using namespace std;

class StudentClass
{
private:

    string className;
    string department;
    int semester;
    int totalStudents;
    vector<string> subjectCodes;

public:

    StudentClass();

    void inputClass();
    void displayClass();
};

#endif