#include <iostream>
#include "Activity.h"
#include "ActivityList.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    ActivityList log;
    Activity activity1({14, 0}, {17, 0}, "titolo", "note");

    // The next day

    Activity activity2({18, 0}, {19, 0}, "titolo", "note");

    Activity activity3({20, 0}, {21, 0}, "euhfi", "note");
    log.addActivity(activity1);
    log.addActivity(activity2);
    log.addActivity(activity3);

    log.printActivities();
}
