//
// Created by thabr on 20/06/2023.
//

#include "ActivityList.h"
#include <vector>
#include "Activity.h"

void ActivityList::addActivity(const Activity& activity){
    activities.push_back(activity);
}
