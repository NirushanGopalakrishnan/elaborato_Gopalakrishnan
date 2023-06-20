//
// Created by thabr on 20/06/2023.
//

#include "Time.h"

int Time::getDay() const {
    return day;
}

void Time::setDay(int day) {
    Time::day = day;
}

int Time::getMonth() const {
    return month;
}

void Time::setMonth(int month) {
    Time::month = month;
}

int Time::getYear() const {
    return year;
}

void Time::setYear(int year) {
    Time::year = year;
}

int Time::getHour() const {
    return hour;
}

void Time::setHour(int hour) {
    Time::hour = hour;
}

int Time::getMinutes() const {
    return minutes;
}

void Time::setMinutes(int minutes) {
    Time::minutes = minutes;
}
