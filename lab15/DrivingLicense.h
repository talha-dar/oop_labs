#pragma once
#include<cstring>
#include"Card.h"
using namespace std;

class DrivingLicense:private Card{
private:
  char drivingLicenseType; // 'h'=heavy, 'l'=light, 'b'=bike
  char* issuedInCity;
public:
  DrivingLicense(const char* name=nullptr, const int number=0, const char* date=nullptr, const char type='\0', const char* city=nullptr);
  ~DrivingLicense();

  //setters

  //for inherited attribute access
  void setCardOwnerName(const char* name=nullptr);
  void setCardNumber(const int number=0);
  void setCardExpiryDate(const char* date=nullptr);

  //for it's own attributes
  void setDrivingLicenseType(const char type='\0');
  void setIssuedInCity(const char* city=nullptr);

  //getters

  //for inherited attributes access
  char* getCardOwnerName()const;
  int getCardNumber()const;
  char* getCardExpiryDate()const;

  //for it's own attributes
  char getDrivingLicenseType()const;
  char* getIssuedInCity()const;
};

void displayDrivingLicense(const DrivingLicense&);
