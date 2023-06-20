//
// Created by thabr on 20/06/2023.
//

#ifndef ELABORATO_GOPALAKRISHNAN_ACTIVITY_H
#define ELABORATO_GOPALAKRISHNAN_ACTIVITY_H
#include "Time.h"
#include <string>

using namespace std;

struct Time{
    int day;
    int month;
    int year;
    int hour;
    int minutes;
};

class Activity {
public:
    const Time &getStart() const;

    void setStart(const Time &start);

    const Time &getAnEnd() const;

    void setAnEnd(const Time &anEnd);

    const string &getTitle() const;

    void setTitle(const string &title);

    const string &getNote() const;

    void setNote(const string &note);

private:
        struct Time start;
        struct Time end;
        string title;
        string note;
};i


#endif //ELABORATO_GOPALAKRISHNAN_ACTIVITY_H
