#include"IDCard.h"

IDCard::IDCard(const char* name, const int number, const char* date,const double _CNICNumber, const int _age):Card(name, number, date){
  if(_CNICNumber>0 && _age){
    CNICNumeber=_CNICNumber;
    age=_age;
  }
  else{
    CNICNumeber=0;
    age=0;
  }
}

IDCard::~IDCard(){
  CNICNumeber=0;
  age=0;
}

//setters

//for derived attributes access
void IDCard::setCardOwnerName(const char* name){
  Card::setCardOwnerName(name);
}

void IDCard::setCardNumber(const int number){
  Card::setCardNumber(number);
}

void IDCard::setCardExpiryDate(const char* date){
  Card::setCardExpiryDate(date);
}

//for it's own attributes
void IDCard::setCNICNumber(const int _CNICNumber){
  if(_CNICNumber>0){
    CNICNumeber=_CNICNumber;
  }
}

void IDCard::setOwnerAge(const int _age){
  if(_age>0){
    age=_age;
  }
}

//getters

//for derived attributes access
char* IDCard::getCardOwnerName()const{
  return Card::getCardOwnerName();
}

int IDCard::getCardNumber()const{
  return Card::getCardNumber();
}

char* IDCard::getCardExpiryDate()const{
  return Card::getCardExpiryDate();
}

//for it's own attributes
double IDCard::getCNICNumber()const{
  return CNICNumeber;
}

int IDCard::getOwnerAge()const{
  return age;
}

void displayIDCard(const IDCard& obj){
  cout<<"\nOwner Name: "<<obj.getCardOwnerName();
  cout<<"\nCNIC number: "<<obj.getCNICNumber();
  cout<<"\nAge: "<<obj.getOwnerAge();
  cout<<"\nCard Number: "<<obj.getCardNumber();
  cout<<"\nCard Expiry Date: "<<obj.getCardExpiryDate();
}
