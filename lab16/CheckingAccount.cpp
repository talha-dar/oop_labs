#include"CheckingAccount.h"

CheckingAccount::CheckingAccount(const char* _title, const char*  _accName, const double _bal, const double _feeCharged):BankAccount(_title, _accName, _bal){
  if(_feeCharged>0){
    feeChargedPerTransaction=_feeCharged;
  }
}

CheckingAccount::~CheckingAccount(){
  feeChargedPerTransaction=0;
}

//copy constructor
CheckingAccount::CheckingAccount(const CheckingAccount& obj):BankAccount(obj){
    feeChargedPerTransaction=obj.feeChargedPerTransaction;
}

//operators
CheckingAccount& CheckingAccount::operator=(const CheckingAccount& obj){
  if(this!=&obj){
    BankAccount::operator=(obj);
    feeChargedPerTransaction=obj.feeChargedPerTransaction;
  }
  return *this;
}

//setters
void CheckingAccount::set_feeChargedPeTransaction(const double _fee){
  if(_fee>0){
    feeChargedPerTransaction=_fee;
  }
}

//getters
double CheckingAccount::get_feeChargedPerTransaction()const{
  return feeChargedPerTransaction;
}

//methods
void CheckingAccount::withdraw(const double _bal){
  double withdrawl=_bal+feeChargedPerTransaction;
  BankAccount::withdraw(withdrawl);
}

void CheckingAccount::deposit(const double _bal){
  double deposital=_bal+feeChargedPerTransaction;
  BankAccount::deposit(deposital);
}

void CheckingAccount::display()const{
  BankAccount::display();
  cout<<"\nFee Charged per Transaction: "<<feeChargedPerTransaction;
}
