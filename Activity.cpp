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

struct Time Activity::durationOfActivity(){
    struct Time duration;

    duration.year = end.year - start.year;
    duration.month = end.month - start.month;
    duration.day = end.day - start.day;
    duration.hour = end.hour - start.hour;
    duration.minutes = end.minutes - start.minutes;

    return duration;
}

Activity::Activity(const Time &start, const Time &anEnd, const string &title, const string &note){
    if(durationOfActivity().){

    }
}

