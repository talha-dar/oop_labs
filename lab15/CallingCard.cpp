#include"CallingCard.h"

CallingCard::CallingCard(const char* name, const int number, const char* date, const char* _companyName, const double _ammount, const int _PIN):Card(name, number, date){
  if(_companyName && _ammount>0 && _PIN>0){
    //set companyname
    companyName=new char[strlen(_companyName)+1]{'\0'};
    strcpy(companyName, _companyName);

    //set ammount
    ammount=_ammount;

    //set
    PIN=_PIN;
  }
  else{
    companyName=nullptr;
    ammount=0;
    PIN=0;
  }
}

//destructor
CallingCard::~CallingCard(){
  //destructor of base class will be called implicitly first.
  if(companyName){
    delete[] companyName;
    companyName=nullptr;
  }
}

//setters

//for derived attributes
void CallingCard::setCardOwnerName(const char* name){
  Card::setCardOwnerName(name);
}

void CallingCard::setCardNumber(const int number){
  Card::setCardNumber(number);
}

void CallingCard::setCardExpiryDate(const char* date){
  Card::setCardExpiryDate(date);
}

//for it's own attributes
void CallingCard::setCardAmmount(const double _ammount){
  if(_ammount>0){
    ammount=_ammount;
  }
}

void CallingCard::setCardCompanyName(const char* _companyName){
  if(_companyName){
    companyName=new char[strlen(_companyName)+1]{'\0'};
    strcpy(companyName, _companyName);
  }
}

void CallingCard::setCardPIN(const int _PIN){
  if(_PIN>0){
    PIN=_PIN;
  }
}

//getters

//for derived attributes
char* CallingCard::getCardOwnerName()const{
  return Card::getCardOwnerName();
}

char* CallingCard::getCardExpiryDate()const{
  return Card::getCardExpiryDate();
}

int CallingCard::getCardNumber()const{
  return Card::getCardNumber();
}

//for it's own attributes
double CallingCard::getCardAmmount()const{
  return ammount;
}

char* CallingCard::getCardCompanyName()const{
  char* temp=nullptr;
  if(companyName){
    temp=new char[strlen(companyName)+1]{'\0'};
    strcpy(temp, companyName);
  }
  return temp;
}

int CallingCard::getCardPIN()const{
  return PIN;
}

void displayCallingCard(const CallingCard& obj){
  cout<<"\nOwner Name: "<<obj.getCardOwnerName();
  cout<<"\nCard Number: "<<obj.getCardNumber();
  cout<<"\nCompany: "<<obj.getCardCompanyName();
  cout<<"\nAmmount: "<<obj.getCardAmmount();
  cout<<"\nPIN: "<<obj.getCardPIN();
  cout<<"\nExpiry: "<<obj.getCardExpiryDate();
}
