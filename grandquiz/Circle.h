#pragma once
#include <iostream>
using namespace std;

class Circle
{
    private:
    const double PI;
    double radius;
    static int count; //to count the number of circles instantiated
public:
    Circle(double r = 0);
    Circle(const Circle &);
    Circle &operator=(const Circle &);
    Circle &operator+=(const double);
    Circle operator++(int);
    Circle &operator++();
    static void noOfCircles();
    bool operator<(const Circle&);
    friend ostream &operator<<(ostream &, const Circle &);
    friend istream &operator>>(istream &, Circle &);
    void area();
    ~Circle();
};

int Circle::count=0;