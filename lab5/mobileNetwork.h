#pragma once
#include <iostream>
#include "functions.h"
#include "functions.cpp"
using namespace std;

class mobileNetwork
{
private:
    //attributes
    char* name;
    char* mobileNumber;
    char* packageType;
    double balance, callRate;

public:
    //constructor
    mobileNetwork(const char* _name= nullptr,const char* _mobileNumber= nullptr,const char* _packageType= nullptr,const double _balance=0,const double _callRate=0);
    //copy constructor
    mobileNetwork(const mobileNetwork &);
    //destructor
    ~mobileNetwork();
    //setters
    void setName(const char *);
    void setMobileNumber(const char *);
    void setPackagetype(const char *);
    void setBalance(const double);
    void setCallRate(const double);
    //getters
    char *getName();
    char *getMobileNumber();
    char *getPackage();
    double getBalance();
    double getCallRate();
    //print
    void print();
    //others
    void recharge(const double);
    void discharge(const double);
    void callCharges(const double);
    //
};
