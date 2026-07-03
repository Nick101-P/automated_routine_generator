#include "../include/RoutineManager.h"
#include <iostream>

using namespace std;

void RoutineManager::start()
{
    int choice;

    do
    {
        cout << "\n=====================================\n";
        cout << " AUTOMATIC ROUTINE GENERATOR\n";
        cout << "=====================================\n";

        cout << "1. Add Teacher\n";
        cout << "2. View Teachers\n";

        cout << "3. Add Subject\n";
        cout << "4. View Subjects\n";

        cout << "5. Add Student Class\n";
        cout << "6. View Student Classes\n";

        cout << "7. Add Classroom\n";
        cout << "8. View Classrooms\n";
        cout << "9. Generate Routine\n";

        cout << "10. Add Time Slot\n";
        cout << "11. View Time Slots\n";

        cout << "0. Exit\n";

        cout << "\nEnter Choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1:
                addTeacher();
                break;

            case 2:
                viewTeachers();
                break;

            case 3:
                addSubject();
                break;

            case 4:
                viewSubjects();
                break;

            case 5:
                addStudentClass();
                break;

            case 6:
                viewStudentClasses();
                break;

            case 7:
                addClassroom();
                break;

            case 8:
                viewClassrooms();
                break;

               case 9:
    generateRoutine();
    break;
    
    break;
            case 10:
                addTimeSlot();
                break;

            case 11:
                viewTimeSlots();
                break;

            case 0:
                cout << "\nThank you!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 0);
}
// for teacher
void RoutineManager::addTeacher()
{
    Teacher temp;
    temp.inputTeacher();
    teachers.push_back(temp);
}

void RoutineManager::viewTeachers()
{
    for(int i = 0; i < teachers.size(); i++)
        teachers[i].displayTeacher();
}

// for student

void RoutineManager::addStudentClass()
{
    StudentClass temp;
    temp.inputClass();
    classes.push_back(temp);
}

void RoutineManager::viewStudentClasses()
{
    for(int i = 0; i < classes.size(); i++)
        classes[i].displayClass();
}


// subject
void RoutineManager::addSubject()
{
    Subject temp;
    temp.inputSubject();
    subjects.push_back(temp);
}

void RoutineManager::viewSubjects()
{
    for(int i = 0; i < subjects.size(); i++)
        subjects[i].displaySubject();
}

// classroom 
void RoutineManager::addClassroom()
{
    Classroom temp;
    temp.inputClassroom();
    classrooms.push_back(temp);
}

void RoutineManager::viewClassrooms()
{
    for(int i = 0; i < classrooms.size(); i++)
        classrooms[i].displayClassroom();
}

// time slot

void RoutineManager::addTimeSlot()
{
    TimeSlot temp;
    temp.inputTimeSlot();
    timeSlots.push_back(temp);
}

void RoutineManager::viewTimeSlots()
{
    for(int i = 0; i < timeSlots.size(); i++)
        timeSlots[i].displayTimeSlot();
}

void RoutineManager::generateRoutine()
{
    generator.generateRoutine(
        teachers,
        subjects,
        classes,
        classrooms,
        timeSlots
    );
}


