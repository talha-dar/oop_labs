#pragma once
#include<iostream>
#include"MyChar.h"
#include"MyChar.cpp"
using namespace std;

class MyString{
 private:
  MyChar* arr;
  int size;
 public:
  //constructos
  MyString(const char* _arr=nullptr); //parametrized constructor
  MyString(const MyString&);//copy constructor
  MyString& operator=(const MyString&);//assignment operator
  //destrictors
  ~MyString();
  //getters
  int get_size()const;
  //operators
  MyString operator+(const MyString&);
  MyChar& operator[](const int)const;
  friend ostream& operator<<(ostream&, const MyString&);
  friend istream& operator>>(istream&, MyString&);
  //preincrement operators
  MyString& operator++();
  MyString& operator--();
  //postincrement operators
  MyString operator++(int);
  MyString operator--(int);
};

void print(const MyString&);
int len(const char*);
