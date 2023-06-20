//
// Created by thabr on 20/06/2023.
//

#include "Activity.h"

const Time &Activity::getStart() const {
    return start;
}

void Activity::setStart(const Time &start) {
    Activity::start = start;
}

const Time &Activity::getAnEnd() const {
    return end;
}

void Activity::setAnEnd(const Time &anEnd) {
    end = anEnd;
}

const string &Activity::getTitle() const {
    return title;
}

void Activity::setTitle(const string &title) {
    Activity::title = title;
}

const string &Activity::getNote() const {
    return note;
}

void Activity::setNote(const string &note) {
    Activity::note = note;
}
