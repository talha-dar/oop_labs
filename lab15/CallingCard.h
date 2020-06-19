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

  //for derived attributes access
  void setCardOwnerName(const char* name=nullptr);
  void setCardNumber(const int number=0);
  void setCardExpiryDate(const char* date=nullptr);

  //for it's own attributes
  void setCardAmmount(const double _ammount=0);
  void setCardCompanyName(const char* _companyName=nullptr);
  void setCardPIN(const int _PIN=0);
  
  //getters

  //for derived attributes access
  char* getCardOwnerName()const;
  int getCardNumber()const;
  char* getCardExpiryDate()const;

  //for it's own attributes
  double getCardAmmount()const;
  char* getCardCompanyName()const;
  int getCardPIN()const;
};
