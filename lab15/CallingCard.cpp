#include"CallingCard.h"

CallingCard::CallingCard(const char* _companyName, const double _ammount, const int _PIN):Card(){
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
void CallingCard::setCallingCardOwnerName(const char* name){
  setCardOwnerName(name);
}

void CallingCard::setCallingCardNumber(const int number){
  setCardNumber(number);
}

void CallingCard::setCallingCardExpiryDate(const char* date){
  setCardExpiryDate(date);
}

//for it's own attributes
void CallingCard::setCallingCardAmmount(const double _ammount){
  if(_ammount>0){
    ammount=_ammount;
  }
}

void CallingCard::setCallingCardCompanyName(const char* _companyName){
  if(_companyName){
    companyName=new char[strlen(_companyName)+1]{'\0'};
    strcpy(companyName, _companyName);
  }
}

void CallingCard::setCallingCardPIN(const int _PIN){
  if(_PIN>0){
    PIN=_PIN;
  }
}

//getters

//for derived attributes
char* CallingCard::getCallingCardOwnerName()const{
  return getCardOwnerName();
}

char* CallingCard::getCallingCardExpiryDate()const{
  return getCardExpiryDate();
}

int CallingCard::getCallingCardNumber()const{
  return getCardNumebr();
}

//for it's own attributes
double CallingCard::getCallingCardAmmount()const{
  return ammount;
}

char* CallingCard::getCallingCardCompanyName()const{
  char* temp=nullptr;
  if(companyName){
    temp=new char[strlen(companyName)+1]{'\0'};
    strcpy(temp, companyName);
  }
  return temp;
}

int CallingCard::getCallingCardPIN()const{
  return PIN;
}
