#pragma once
#include<iostream>
#include<cstring>
#include"BankAccount.h"
using namespace std;

class SavingsAccount: public BankAccount{
 private:
  double interestRate;
 public:
  //constructor
  SavingsAccount(const char* _title=nullptr, const char*  _accName=nullptr, const double _bal=0, const double _interestRate=0);
  //copy constructor
  SavingsAccount(const SavingsAccount&);
  //destructor
  ~SavingsAccount();
  //operators
  SavingsAccount& operator=(const SavingsAccount&);
  //setter
  void set_interestRate(const double _interestRate=0);
  //getter
  double get_interestRate()const;
  //methods
  double calculateInterest();
  void display()const;
};
