//
// Created by thabr on 20/06/2023.
//

#ifndef ELABORATO_GOPALAKRISHNAN_ACTIVITYLIST_H
#define ELABORATO_GOPALAKRISHNAN_ACTIVITYLIST_H
#include <vector>
#include "Activity.h"

class ActivityList {
    public:
        void addActivity(const Activity& activity);

    private:
        std::vector<Activity> activities;
};


#endif //ELABORATO_GOPALAKRISHNAN_ACTIVITYLIST_H
