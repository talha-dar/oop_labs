#pragma once
#include <cstring>
#include"Card.h"
using namespace std;

class IDCard:protected Card{
private:
  double CNICNumeber;
  int age;
public:
  //default parametrized constructor
  IDCard(const char* name=nullptr, const int number=0, const char* date=nullptr, const double _CNICNumber=0, const int _age=0);
  //destructor
  ~IDCard();

  //setters

  //for derived attributes access
  void setCardOwnerName(const char* name=nullptr);
  void setCardNumber(const int number=0);
  void setCardExpiryDate(const char* date=nullptr);

  //for it's own attributes
  void setCNICNumber(const int _CNICNumber=0);
  void setOwnerAge(const int _age=0);

  //getters

  //for derived attributes
  char* getCardOwnerName()const;
  int getCardNumber()const;
  char* getCardExpiryDate()const;
  
  //for it's own attributes
  double getCNICNumber()const;
  int getOwnerAge()const;
  
};

void displayIDCard(const IDCard&);
