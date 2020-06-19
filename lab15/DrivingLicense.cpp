#include "DrivingLicense.h"

DrivingLicense::DrivingLicense(const char* name, const int number, const char* date, const char type, const char* city):Card(name, number, date){
  if((type=='h' || type=='l' || type=='b') && city){
    drivingLicenseType=type;
    issuedInCity=new char[strlen(city)+1]{'\0'};
    strcpy(issuedInCity, city);
  }
  else{
    drivingLicenseType='\0';
    issuedInCity=nullptr;
  }
}

DrivingLicense::~DrivingLicense(){
  if(issuedInCity){
    delete [] issuedInCity;
    issuedInCity=nullptr;
  }
}

//setters

//for inherited attributes access
void DrivingLicense::setCardOwnerName(const char* name){
  Card::setCardOwnerName(name);
}

void DrivingLicense::setCardNumber(const int number){
  Card::setCardNumber(number);
}

void DrivingLicense::setCardExpiryDate(const char* date){
  Card::setCardExpiryDate(date);
}

//for itø's own attributes
void DrivingLicense::setDrivingLicenseType(const char type){
  if(type=='h' || type=='l'|| type=='b'){
    drivingLicenseType=type;
  }
}

void DrivingLicense::setIssuedInCity(const char* city){
  if(city){
    if(issuedInCity){
      delete[] issuedInCity;
      issuedInCity=nullptr;
    }
    issuedInCity=new char[strlen(city)+1]{'\0'};
    strcpy(issuedInCity, city);
  }
}

//getters

//for inherited attributes access
char* DrivingLicense::getCardOwnerName()const{
  return Card::getCardOwnerName();
}

int DrivingLicense::getCardNumber()const{
  return Card::getCardNumber();
}

char* DrivingLicense::getCardExpiryDate()const{
  return Card::getCardExpiryDate();
}

//for it's own attributes
char DrivingLicense::getDrivingLicenseType()const{
  return drivingLicenseType;
}

char* DrivingLicense::getIssuedInCity()const{
  char* temp=nullptr;
  if(issuedInCity){
    temp=new char[strlen(issuedInCity)+1]{'\0'};
    strcpy(temp, issuedInCity);
  }
  return temp;
}

void displayDrivingLicense(const DrivingLicense& obj){
  char temp='\0';
  cout<<"\nOwner Name: "<<obj.getCardOwnerName();
  cout<<"\nCard Number: "<<obj.getCardNumber();

  temp=obj.getDrivingLicenseType();
  cout<<"\nType: ";
  if(temp=='h'){
    cout<<"Heavy.";
  }
  else if(temp=='l'){
    cout<<"Light.";
  }
  else{
    cout<<"Bike.";
  }

  cout<<"\nIssued In City: "<<obj.getIssuedInCity();
  cout<<"\nExpiry Date: "<<obj.getCardExpiryDate();
}
