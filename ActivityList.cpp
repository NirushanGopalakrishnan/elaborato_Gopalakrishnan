//
// Created by thabr on 20/06/2023.
//

#include "ActivityList.h"
#include <vector>
#include "Activity.h"
#include <ctime>

void ActivityList::addActivity(const Activity& activity){
    std::time_t now = std::time(0);
    std::tm* localTime = std::localtime(&now);
    int currentDay = localTime->tm_mday;
    int currentMonth = localTime->tm_mon + 1;
    int currentYear = localTime->tm_year + 1900;

    bool activityListFound = false;
    for (DayActivity& day : daysActivity) {
        if (day.day == currentDay && day.month == currentMonth && day.year == currentYear) {
            day.activities.push_back(activity);
            activityListFound = true;
            break;
        }
    }

    if (!activityListFound) {
        DayActivity newDay;
        newDay.day = currentDay;
        newDay.month = currentMonth;
        newDay.year = currentYear;
        newDay.activities.push_back(activity);
        daysActivity.push_back(newDay);
    }
}
