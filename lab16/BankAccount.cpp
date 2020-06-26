#include"BankAccount.h"

//constructor
BankAccount::BankAccount(const char* _title, const char* _accName, const double _bal){
  if(_title && _accName && _bal>0){

    title=new char[strlen(_title)+1]{'\0'};
    strcpy(title, _title);

    accountName=new char[strlen(_accName)+1]{'\0'};
    strcpy(accountName, _accName);

    balance=_bal;
  }
  else{
    title=nullptr;
    accountName=nullptr;
    balance=0;
  }
}

//copy constructor
BankAccount::BankAccount(const BankAccount& obj){

  if(obj.title){
    title=new char[strlen(obj.title)+1]{'\0'};
    strcpy(title, obj.title);
  }
  else{
    title=nullptr;
  }
  
  if(obj.accountName){
    accountName=new char[strlen(obj.accountName)+1]{'\0'};
    strcpy(accountName, obj.accountName);
  }
  else{
    accountName=nullptr;
  }
  
  if(obj.balance>0){
    balance=obj.balance;
  }
  else{
    balance=0;
  }
}

//destructor
BankAccount::~BankAccount(){

  if(title){
    delete[] title;
    title=nullptr;
  }
  
  if(accountName){
    delete[] accountName;
    accountName=nullptr;
  }
  
  balance=0;
}

//operator
BankAccount& BankAccount::operator=(const BankAccount& obj){

  if(this!=&obj){
    if(obj.title){
      if(title){
	delete[] title;
	title=nullptr;
      }
      title=new char[strlen(obj.title)+1]{'\0'};
      strcpy(title, obj.title);
    }
    
    if(obj.accountName){
      if(accountName){
	delete[] accountName;
	accountName=nullptr;
      }
      accountName=new char[strlen(obj.accountName)+1]{'0'};
      strcpy(accountName, obj.accountName);
    }

    balance=obj.balance;
  }
  
  return *this;
}

//setters
void BankAccount::set_title(const char* _title){
  if(_title){
    if(title){
      delete[] title;
      title=nullptr;
    }
    title=new char[strlen(_title)+1]{'\0'};
    strcpy(title, _title);
  }
}

void BankAccount::set_accountName(const char* _accName){
  if(_accName){
    if(accountName){
      delete[] accountName;
      accountName=nullptr;
    }
    accountName=new char[strlen(_accName)+1]{'\0'};
    strcpy(accountName, _accName);
  }
}

void BankAccount::set_balance(const double _bal){
  if(_bal>=0){
    balance=_bal;
  }
}

//getters
char* BankAccount::get_title()const{
  char* temp=nullptr;
  if(title){
    temp=new char[strlen(title)+1]{'\0'};
    strcpy(temp, title);
  }
  return temp;
}

char* BankAccount::get_accountName()const{
  char* temp=nullptr;
  if(accountName){
    temp=new char[strlen(accountName)+1]{'\0'};
    strcpy(temp, accountName);
  }
  return temp;
}

double BankAccount::get_balance()const{
  return balance;
}

//methods
void BankAccount::deposit(const double _bal){
  if(_bal>0){
    balance+=_bal;
  }
}

void BankAccount::withdraw(const double _bal){
  if(_bal>0 && balance>=_bal){
    balance-=_bal;
  }
}

void BankAccount::display()const{
  cout<<"\nTitle: "<<title;
  cout<<"\nAccount Name: "<<accountName;
  cout<<"\nBalance: "<<balance;
}
