//
// Created by Max on 3/13/2022.
//

#ifndef PROJ5_CALENDER_H
#define PROJ5_CALENDER_H
#include <string>
#include <vector>
class Calender {
   int day;
   int month;
   int year;
   std::string monthWord;
   std::vector <std::string> months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
public:
    Calender (int d, int y){
        day = d;
        year = y;
    }
    Calender (int d, int y, std::string m_) : Calender(d,y){
        monthWord = m_;

    }
    Calender (int d, int y, int m) : Calender(d,y){
        month = m;
    }
    int getCalenderDay(){
        return day;
    }
    int getCalenderYear(){
        return year;
    }
    std::string getCalenderMonthWord(){
        return monthWord;
    }
    int getCalender(){
        return month;
    }
    void setCalender(int d, int y){
        day = d;
        year = y;
    }
};
#endif //PROJ5_CALENDER_H
