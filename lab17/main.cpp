#include<iostream>
#include"Fraction.h"
#include"Fraction.cpp"

using namespace std;

int main(){
  Fraction f1(1,2);
  Fraction f2(6,9);
  Fraction f3;
  cout<<endl<<f1<<endl<<f2<<endl;
  cin>>f3;
  cout<<endl<<f3<<endl;
  return 0;
}
