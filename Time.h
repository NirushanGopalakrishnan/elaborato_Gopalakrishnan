//
// Created by thabr on 20/06/2023.
//

#ifndef ELABORATO_GOPALAKRISHNAN_TIME_H
#define ELABORATO_GOPALAKRISHNAN_TIME_H


class Time {
public:
    int getDay() const;

    void setDay(int day);

    int getMonth() const;

    void setMonth(int month);

    int getYear() const;

    void setYear(int year);

    int getHour() const;

    void setHour(int hour);

    int getMinutes() const;

    void setMinutes(int minutes);

private:
        int day;
        int month;
        int year;
        int hour;
        int minutes;

    public:

};


#endif //ELABORATO_GOPALAKRISHNAN_TIME_H
