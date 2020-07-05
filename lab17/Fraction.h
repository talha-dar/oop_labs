#pragma once
#include<iostream>
using namespace std;

class Fraction{
private:
  int numerator_;
  int denominator_;
public:
  //constructor
  Fraction(const int _numerator_=0, const int _denominator_=1);
  //setters
  void set_numerator(const int _numerator_=0);
  void set_denominator(const int _numerator_=1);
  //getters
  int get_numerator()const;
  int get_denominator()const;
  //other methods
  void display()const;
};

ostream& operator<<(ostream&, const Fraction&);
istream& operator>>(istream&, Fraction&);
