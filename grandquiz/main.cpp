#include <iostream>
#include "Circle.h"
#include "Circle.cpp"
using namespace std;

int main()
{
    Circle obj1, obj2, obj3, obj4;
    cin >> obj1 >> obj2 >> obj3 >> obj4; 
    //If we make >> and << operator non-returning?
    //nothing will be printed
    cout << obj1 << obj2 << obj3 << obj4;
    Circle::noOfCircles();
    obj4 = obj4;
    obj1 += 1.5; 
    //Do check if we do not return circle by reference than what happens?
    //nothing will happen, but cascading will not work.
    obj1.area();
    ++++obj1; 
    //Do check if we do not return circle by reference than what happens?
    //chaining will ot work
    obj1.area();
    if (obj1 < obj2)
    {
        cout << "\ntrue\n";
    }
    else
    {
        cout << "\nfalse\n";
    }
    return 0;
}