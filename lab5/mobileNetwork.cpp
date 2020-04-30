#include "mobileNetwork.h"

//constructor
mobileNetwork::mobileNetwork(const char *_name, const char *_mobileNumber, const char *_packageType, const double _balance, const double _callRate)
{
    name = new char[len(_name) + 1]{'\0'};
    strCopy(name, _name);
    mobileNumber = new char[len(_mobileNumber) + 1]{'\0'};
    strCopy(mobileNumber, _mobileNumber);
    packageType = new char[len(_packageType) + 1]{'\0'};
    strCopy(packageType, _packageType);
    balance = _balance;
    callRate = _callRate;
}

//copy constructor
mobileNetwork::mobileNetwork(const mobileNetwork &_mobNet)
{
    name = new char[len(_mobNet.name) + 1]{'\0'};
    strCopy(name, _mobNet.name);
    mobileNumber = new char[len(_mobNet.mobileNumber) + 1]{'\0'};
    strCopy(mobileNumber, _mobNet.mobileNumber);
    packageType = new char[len(_mobNet.packageType) + 1]{'\0'};
    strCopy(packageType, _mobNet.packageType);
    balance = _mobNet.balance;
    callRate = _mobNet.callRate;
}

//destructor
mobileNetwork::~mobileNetwork()
{
    if (name)
    {
        delete[] name;
        name = nullptr;
    }
    if (mobileNumber)
    {
        delete[] mobileNumber;
        mobileNumber = nullptr;
    }
    if (packageType)
    {
        delete[] packageType;
        packageType = nullptr;
    }
}

//setters

void mobileNetwork::setName(const char *_name)
{
    if (name)
    {
        delete[] name;
        name = nullptr;
    }
    name = new char[len(_name) + 1]{'\0'};
    strCopy(name, _name);
}

void mobileNetwork::setMobileNumber(const char *_mobileNumber)
{
    if (mobileNumber)
    {
        delete[] mobileNumber;
        mobileNumber = nullptr;
    }
    mobileNumber = new char[len(_mobileNumber) + 1]{'\0'};
    strCopy(mobileNumber, _mobileNumber);
}

void mobileNetwork::setPackagetype(const char *_packageType)
{
    if (packageType)
    {
        delete[] packageType;
        packageType = nullptr;
    }
    packageType = new char[len(_packageType) + 1]{'\0'};
    strCopy(packageType, _packageType);
}

void mobileNetwork::setBalance(const double _balance)
{
    if (_balance > 0)
    {
        balance = _balance;
    }
}

void mobileNetwork::setCallRate(const double _callRate)
{
    if (_callRate > 0)
    {
        callRate = _callRate;
    }
}

//getters
char *mobileNetwork::getName()
{
    char *temp = nullptr;
    if (name)
    {
        temp = new char[len(name) + 1]{'\0'};
        strCopy(temp, name);
    }
    return temp;
}

char *mobileNetwork::getMobileNumber()
{
    char *temp = nullptr;
    if (mobileNumber)
    {
        temp = new char[len(mobileNumber) + 1]{'\0'};
        strCopy(temp, mobileNumber);
    }
    return temp;
}

char *mobileNetwork::getPackage()
{
    char *temp = nullptr;
    if (packageType)
    {
        temp = new char[len(packageType) + 1]{'\0'};
        strCopy(temp, packageType);
    }
    return temp;
}

double mobileNetwork::getBalance()
{
    return balance;
}

double mobileNetwork::getCallRate()
{
    return callRate;
}

//printing
void mobileNetwork::print()
{
    cout << "\nName: " << name;
    cout << "\nMobile Number: " << mobileNumber;
    cout << "\nPackage Type: " << packageType;
    cout << "\nBalance: " << balance;
    cout << "\nCall Rate: " << callRate;
}

//other methods
void mobileNetwork::recharge(const double num)
{
    if (num > 0)
    {
        balance += num;
    }
}

void mobileNetwork::discharge(const double num)
{
    if (num > 0)
    {
        balance -= num;
    }
}

void mobileNetwork::callCharges(const double time)
{
    double charge = 0;
    if (time > 0)
    {
        charge = time * callRate;
        discharge(charge);
    }
}