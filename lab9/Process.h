#pragma once
#include<iostream>
using namespace std;

class Process{
private:
    int id;
    int lines;
    static int totalLinesOfCode, maxLinesOfCode, minLinesOfCode, avgLinesPerProcess;
public:
    //constructor
    Process(int, int);//default params parametrized constructor
    //destructors
    ~Process();
    //setters/mutators
    void set_lines(int);
    //getters

    //others
};

int Process::totalLinesOfCode=0;
int Process::maxLinesOfCode=0;
int Process::minLinesOfCode=0;
int Process::avgLinesPerProcess=0;
