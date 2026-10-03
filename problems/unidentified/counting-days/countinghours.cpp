#include "countingdays.h"

int time_hour = 00;
int time_minute = 00;

int time_hour_new = 00;
int time_minute_new = 00;

int days = 1;

void lookAtClock(int hours, int minutes)
{
    time_hour = time_hour_new;
    time_minute = time_minute_new;
    time_hour_new = hours;
    time_minute_new = minutes;
}

int getDay()
{

    if (time_hour_new < time_hour)
    {
        days++;
    }
    else if (time_hour_new == time_hour && time_minute_new < time_minute)
    {
        days++;
    }
    return days;
}