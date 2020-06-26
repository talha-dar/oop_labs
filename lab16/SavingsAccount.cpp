#include"SavingsAccount.h"

//constructor
SavingsAccount::SavingsAccount(const char* _title, const char* _accName, const double _bal, const double _interestRate):BankAccount(_title, _accName, _bal){
  if(_interestRate>0 && _interestRate<=1){
    interestRate=_interestRate;
  }
}

//copy constructor
SavingsAccount::SavingsAccount(const SavingsAccount& obj):BankAccount(obj){
  interestRate=obj.interestRate;
}

//destructor
SavingsAccount::~SavingsAccount(){
  interestRate=0;
}

//operators
SavingsAccount& SavingsAccount::operator=(const SavingsAccount& obj){
  if(this!=&obj){
    interestRate=obj.interestRate;
    BankAccount::operator=(obj);
  }
  return *this;
}

//setter
void SavingsAccount::set_interestRate(const double _interestRate){
  if(_interestRate>0 && _interestRate<=1){
    interestRate=_interestRate;
  }
}

//getters
double SavingsAccount::get_interestRate()const{
  return interestRate;
}

//methods
double SavingsAccount::calculateInterest(){
  return (interestRate*get_balance());
}

void SavingsAccount::display()const{
  BankAccount::display();
  cout<<"\nInterest Rate: "<<interestRate;
}
