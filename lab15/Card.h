#pragma once
#include<cstring>
#include<iostream>
using namespace std;

class Card{
  //attributes
public:
  char* expiryDate;
protected:
  char* ownerName;
private:
  int cardNumber;

  //methods
public:
  //default parametrized constructor
  Card(const char* name=nullptr, const int numeber=0, const char* date=nullptr);

  //destructor
  ~Card();
  
  //setters
  void setCardOwnerName(const char* name=nullptr);
  void setCardNumber(const int number=0);
  void setCardExpiryDate(const char* date=nullptr);
  
  //getters
  char* getCardOwnerName()const;
  int getCardNumber()const;
  char* getCardExpiryDate()const;
};

void displayCard(const Card&);
