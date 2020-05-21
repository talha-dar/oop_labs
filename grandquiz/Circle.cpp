#include"Circle.h"

//ANSWERS

//If we make >> and << operator non-returning?
    //nothing will be printed

//Do check if we do not return circle by reference than what happens?
    //nothing will happen, but cascading will not work.

//Do check if we do not return circle by reference than what happens?
    //chaining will ot work

Circle::Circle(const double r): PI(3.14){
    cout<<"\nConstructor called";
    if(r>0){
        radius=r;
    }
    else{
        radius=0;
    }
    count++;
}
Circle::Circle(const Circle& circ):PI(3.14){
    cout<<"\nCopy Constructor called.";
    if(circ.radius>=0){
        radius=circ.radius;
    }
    count++;
}
Circle::~Circle(){
    radius=0;
    Circle::count=0;
}
Circle& Circle::operator=(const Circle& circ){
    cout<<"\nAssignment operator called.";
    if(this!=&circ){
        radius=circ.radius;
    }
    return *this;
}
Circle& Circle::operator+=(const double rad){
    if(rad>0){
        radius+=rad;
    }
    return *this;
}
Circle Circle::operator++(int){
    Circle temp(*this);
    temp.radius++;
    return temp;
}
Circle& Circle::operator++(){
    radius++;
    return *this;
}
bool Circle::operator<(const Circle& circ){
    if(radius<circ.radius){
        return true;
    }
    else{
        return false;
    }
}
ostream& operator<<(ostream& out, const Circle& circ){
    out<<circ.radius;
    return out;
}
istream& operator>>(istream& in, Circle& circ){
    in>>circ.radius;
    return in;
}

void Circle::area(){
    double ar;
    ar=PI*radius*radius;
    cout<<"\nArea of Circle: "<<ar;
};

void Circle::noOfCircles(){
    cout<<"\nNumber of circles: "<<count;
}