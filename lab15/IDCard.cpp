#include"IDCard.h"

IDCard::IDCard(const double _CNICNumber, const int _age):Card(){
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
  
}
