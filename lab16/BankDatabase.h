#pragma once
#include<iostream>
#include<cstring>
#include<fstream>
#include"BankAccount.h"
class BankDatabase{
 private:
  BankAccount* accounts;
  int size;
  int count;
 public:
  //constructor
  BankDatabase(const int _size=0);
  //destructor
  ~BankDatabase();
  //operators
  BankAccount& operator[](const int);
  const BankAccount& operator[](const int)const;
  //getters
  int get_size()const;
  int get_count()const;
  //methods
  void addAccount(const BankAccount* _obj=nullptr);
  void createFile();
};

void print(const BankDatabase&);
