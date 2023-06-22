//
// Created by thabr on 20/06/2023.
//

#ifndef ELABORATO_GOPALAKRISHNAN_ACTIVITYLIST_H
#define ELABORATO_GOPALAKRISHNAN_ACTIVITYLIST_H
#include <vector>
#include "Activity.h"
#include <ctime>

struct DayActivity {
    int day;
    int month;
    int year;
    std::vector<Activity> activities;
};

class ActivityList {
private:
    std::vector<DayActivity> daysActivity;

public:
    void addActivity(const Activity& activity);
    void printActivities() const;
};


#endif //ELABORATO_GOPALAKRISHNAN_ACTIVITYLIST_H
