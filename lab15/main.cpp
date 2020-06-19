#include<iostream>
#include<cstring>
#include"Card.h"
#include"Card.cpp"
#include"CallingCard.h"
#include"CallingCard.cpp"
#include"IDCard.h"
#include"IDCard.cpp"
#include"DrivingLicense.h"
#include"DrivingLicense.cpp"

using namespace std;

int main(){
  cout<<"\nInstantiate CallingCard obj and printing it..."<<endl;
  CallingCard ufone("talha", 1234, "20.6.2020", "ufone", 100, 987654321);
  displayCallingCard(ufone);

  cout<<"\n\nInstantiate IDCard obj and printing it..."<<endl;
  IDCard id("Kenobi", 420420, "20.6.2020", 125678, 45);
  displayIDCard(id);

  
  cout<<"\n\nInstantiate DrivingLicense obj and printing it...";
  DrivingLicense dl("anakin", 210210, "20.6.2020", 'l', "tatooine");
  displayDrivingLicense(dl);
  
  cout<<endl<<endl;
  return 0;
}
