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

int Activity::durationOfActivity(){
    struct Time duration;
    int minutes = 0;

    duration.hour = end.hour - start.hour;
    duration.minutes = end.minutes - start.minutes;

    minutes = (duration.hour * 60) + (duration.minutes);

    return minutes;
}

Activity::Activity(const Time &start, const Time &anEnd, const string &title, const string &note){
    if(durationOfActivity() < 1){
        printf("ERRORE: durata attività errata");
    }else{
        this->start = start;
        this->end = anEnd;
        this->title = title;
        this->note = note;
    }
}

