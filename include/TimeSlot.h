#ifndef TIMESLOT_H
#define TIMESLOT_H

#include <string>

using namespace std;

class TimeSlot
{
private:
    int slotID;
    string day;
    string startTime;
    string endTime;

public:
    TimeSlot();

    void inputTimeSlot();

    void displayTimeSlot();
};

#endif