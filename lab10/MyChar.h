#pragma once
#include <iostream>
using namespace std;

class MyChar{
private:
  char ch;
  static int ch_count;
public:
  //constructors
  MyChar(const char='\0');
  //copy assignment constructor
  //  MyChar(const MyChar&);
  //destructor
  ~MyChar();
  //setters
  void set_ch(const char);
  //getters
  char get_ch()const;
  static int get_count();
  //operators
  friend ostream& operator<<(ostream&, const MyChar&);
  friend istream& operator>>(istream&, MyChar&);
  //mutators
  void make_lowerCase();
  void make_upperCase();
};

int MyChar::ch_count=0;
