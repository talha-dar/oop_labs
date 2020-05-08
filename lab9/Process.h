#pragma once
#include<iostream>
using namespace std;

class Process{
private:
    int id;
    int lines;
    static int count, totalLinesOfCode, maxLinesOfCode, minLinesOfCode, avgLinesPerProcess;
public:
//constructors
    Process(int _id=0, int _lines=0);//default params parametrized constructor
    Process(const Process&);//copy constructor
//destructors
    ~Process();
//setters/mutators
    void set_lines(const int);
//getters
    int get_id()const;
    int get_lines()const;
    static int get_totalLinesOfCode();
    static int get_maxLinesOfCode();
    static int get_minLinesOfCode();
    static int get_avgLinesPerProcess();
//others
    static void display();
};

//initialize static members
int Process::count=0;
int Process::totalLinesOfCode=0;
int Process::maxLinesOfCode=0;
int Process::minLinesOfCode=0;
int Process::avgLinesPerProcess=0;

void print(const Process*, const int);
