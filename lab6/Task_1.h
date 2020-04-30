#pragma once
#include "Helpers.h"
#include "Helpers.cpp"
#include <iostream>
using namespace std;

class SalonEmployee
{
private:
  //Attributes of class
  char *name;
  char gender;         //can be M or F
  char *contactNumber; //contactNumber can only have numeric chars
  char shift;          // can be M, A or N
  double salary;

public:
  //Methods of class
  //constructor
  SalonEmployee(const char *_name = {}, const char _gender = '\0', const char *_contactNumber = {}, const char _shift = '\0', const double _salary = '\0');
  //copy constructor
  SalonEmployee(const SalonEmployee &);
  //copy assignment constructor
  SalonEmployee &operator=(const SalonEmployee &);
  //destructor
  ~SalonEmployee();
  //setters
  void setName(const char *);
  void setGender(const char);
  void setContactNumber(const char *);
  void setShift(const char);
  void setSalary(const double);
  //getters
  char *getName();
  char getGender();
  char *getContactNumber();
  char getShift();
  double getSalary();
  //misc
};
