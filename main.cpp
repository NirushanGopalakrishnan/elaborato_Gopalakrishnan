#include <iostream>
#include "Activity.h"
#include "ActivityList.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    ActivityList log;
    Activity activity1({14, 0}, {17, 0}, "titolo", "note");

    // The next day

    Activity activity2({18, 0}, {19, 0}, "titolo", "note");
    log.addActivity(activity2);

    //log.printActivities();
}
