#include"Card.h"

//default parametrized constructor
Card::Card(const char* name, const int number, const char* date){
  if(name && number>0 && date){
    //set name
    ownerName=new char[strlen(name)+1]{'\0'};
    strcpy(ownerName, name);
    //set card number
    cardNumber=number;
    //set expiry date
    expiryDate=new char[strlen(date)+1]{'\0'};
    strcpy(expiryDate, date);
  }
  else{
    ownerName=nullptr;
    cardNumber=0;
    expiryDate=nullptr;
  }
}

//destructor
Card::~Card(){
  if(ownerName){
    delete [] ownerName;
    ownerName=nullptr;
  }
  if(expiryDate){
    delete[] expiryDate;
    expiryDate=nullptr;
  }
}

//setters
void Card::setCardOwnerName(const char* name){
  if(name){
    if(ownerName){
      delete[] ownerName;
      ownerName=nullptr;
    }
    ownerName=new char[strlen(name)+1]{'\0'};
    strcpy(ownerName, name);
  }
}

void Card::setCardNumber(const int number){
  if(number>0){
    cardNumber=number;
  }
}

void Card::setCardExpiryDate(const char* date){
  if(date){
    if(expiryDate){
      delete[] expiryDate;
      expiryDate=nullptr;
    }
    expiryDate=new char[strlen(date)+1]{'\0'};
    strcpy(expiryDate, date);
  }
}

//getters
char* Card::getCardOwnerName()const{
  char* temp=nullptr;
  if(ownerName){
    temp=new char[strlen(ownerName)+1]{'\0'};
    strcpy(temp, ownerName);
  }
  return temp;
}

char* Card::getCardExpiryDate()const{
  char* temp=nullptr;
  if(expiryDate){
    temp=new char[strlen(expiryDate)+1]{'\0'};
    strcpy(temp, expiryDate);
  }
  return temp;
}

int Card::getCardNumebr()const{
  return cardNumber;
}
