#include<iostream>
#include<cstring>
using namespace std;

class BankAccount{
private:
  char* title;
  char* accountName;
  double balance;
public:
  //default constructor
  BankAccount(const char* _title=nullptr, const char* _accName=nullptr, const double _bal=0);
  //copy constructor
  BankAccount(const BankAccount&);
  //destructor
  ~BankAccount();
  //operator
  BankAccount& operator=(const BankAccount&);
  //setters
  void set_title(const char* _title=nullptr);
  void set_accountName(const char* _accName=nullptr);
  void set_balance(const double _bal);
  //getters
  char* get_title()const;
  char* get_accountName()const;
  double get_balance()const;
  //methods
  void deposit(const double _bal=0);
  void withdraw(const double _bal=0);
  void display()const;
};
