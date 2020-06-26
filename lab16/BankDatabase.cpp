#include"BankDatabase.h"

BankDatabase::BankDatabase(const int _size){
  if(_size>0){
    accounts=new BankAccount[_size];
    size=_size;
  }
  else{
    accounts=nullptr;
    size=0;
  }
  count=0;
}

BankDatabase::~BankDatabase(){
  if(accounts){
    delete[] accounts;
    accounts=nullptr;
  }
  count=0;
}

//operator

// nonconstant subscript operator
BankAccount& BankDatabase::operator[](const int index){
  if(accounts){
    return accounts[index];
  }
  else{
    return accounts[0];
  }
}

// constant subscript operator
//operator
const BankAccount& BankDatabase::operator[](const int index)const{
  if(accounts){
    return accounts[index];
  }
  else{
    return accounts[0];
  }
}
//getters
int BankDatabase::get_size()const{
  return size;
}

int BankDatabase::get_count()const{
  return count;
}

//methods
void BankDatabase::addAccount(const BankAccount* _obj){
  if(_obj && accounts && count<size){
    accounts[count]=*_obj;//will call the assignment constructor from BankAccount
    count++;
  }
}

void BankDatabase::createFile(){
  char database[]={"BankDatabase.txt"};
  ofstream fout(database);

  if(count>0){
    for(int i=0; i<count;i++){
      fout<<accounts[i].get_title();
      fout<<accounts[i].get_accountName();
      fout<<accounts[i].get_balance();
    }
  }

  fout.close();
}

void print(const BankDatabase& data){
  int count=data.get_count();
  if(count>0){
    for(int i=0; i<count;i++){
      data[i].display();
      cout<<endl;
    }
  }
}
