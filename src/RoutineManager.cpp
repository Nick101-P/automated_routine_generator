#include "../include/RoutineManager.h"
#include <iostream>

using namespace std;

void RoutineManager::addTeacher()
{
    Teacher temp;

    temp.inputTeacher();

    teachers.push_back(temp);

    cout << "\nTeacher Added Successfully!\n";
}

void RoutineManager::viewTeachers()
{
    if(teachers.empty())
    {
        cout << "\nNo Teachers Found!\n";

        return;
    }

    for(int i=0;i<teachers.size();i++)
    {
        teachers[i].displayTeacher();
    }
}

void RoutineManager::start()
{
    int choice;

    do
    {
        cout << "\n==============================\n";
        cout << "AUTOMATIC ROUTINE GENERATOR\n";
        cout << "==============================\n";

        cout << "1. Add Teacher\n";
        cout << "2. View Teachers\n";
        cout << "3. Exit\n";

        cout << "\nEnter Choice : ";

        cin >> choice;

        switch(choice)
        {

        case 1:

            addTeacher();

            break;

        case 2:

            viewTeachers();

            break;

        case 3:

            cout<<"\nGood Bye!\n";

            break;

        default:

            cout<<"\nInvalid Choice\n";

        }

    }while(choice!=3);

}