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
  IDCard(const double _CNICNumber=0, const int _age=0);
  //destructor
  ~IDCard();

  //setters

  //for derived attributes
  void setIDCardOwnerName(const char* name=nullptr);
  void setIDCardNumber(const int number=0);
  void setIDCardExpiryDate(const char* date=nullptr);

  //for it's own attributes
  void setIDCardCNICNumber(const int _CNICNumber=0);
  void setIDCardOwnerAge(const int _age=0);

  //getters

  //for derived attributes
  char* getIDCardOwnerName()const;
  int getIDCardNumber()const;
  char* getIDCardExpiryDate()const;

  //for it's own attributes
  double getIDCardCNICNumber()const;
  int getIDCardOwnerAge()const;
  
};
