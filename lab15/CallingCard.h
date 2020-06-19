#pragma once
#include<cstring>
#include"Card.h"

class CallingCard:public Card{
private:
  double ammount;
  char* companyName;
  int PIN;
public:
  CallingCard(const char* _companyName=nullptr, const double _ammount=0, const int _PIN=0);
  ~CallingCard();
  
  //setters

  //for derived attributes
  void setCardOwnerName(const char* name=nullptr);
  void setCardExpiryDate(const char* date=nullptr);
  void setCardNumber(const int number=0);

  //for it's own attributes
  void setCardAmmount(const double _ammount=0);
  void setCardCompanyName(const char* _companyName=nullptr);
  void setCardPIN(const int _PIN=0);

  //getters

  //for derived attributes
  char* getCardOwnerName()const;
  char* getCardExpiryDate()const;
  int getCardNumber()const;

  //for it's own attributes
  double getCallingCardAmmount()const;
  char* getCallingCardCompanyName()const;
  int getCallingCardPIN()const;
};
