#pragma once
#include<iostream>
using namespace std;

class Time{
    private:
    //attributes
    int hour, minuet, second;
    public:
    //constructors
    Time(const int hr=0, const int min=0, const int sec=0);
    Time(const Time&);
    //destructor
    ~Time();
    //setter
    void setHour(const int);
    void setMinuet(const int);
    void setSecond(const int);
    //getter
    int getHour();
    int getMinuet();
    int getSecond();
    //print
    void print();
    //
};