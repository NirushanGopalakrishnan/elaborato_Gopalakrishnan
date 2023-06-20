//
// Created by thabr on 20/06/2023.
//

#ifndef ELABORATO_GOPALAKRISHNAN_ACTIVITY_H
#define ELABORATO_GOPALAKRISHNAN_ACTIVITY_H
#include "Time.h"
#include <string>

using namespace std;

class Activity {
public:

    const string &getTitle() const;

    void setTitle(const string &title);

    const string &getNote() const;

    void setNote(const string &note);

    const Time &getStart() const;

    void setStart(const Time &start);

    const Time &getAnEnd() const;

    void setAnEnd(const Time &anEnd);

private:
        Time start;
        Time end;
        string title;
        string note;
};


#endif //ELABORATO_GOPALAKRISHNAN_ACTIVITY_H
