#include "Task_1.h"

//constructor
SalonEmployee::SalonEmployee(const char *_name, const char _gender, const char *_contactNumber, const char _shift, const double _salary)
{
  bool check = true;
  //deepCopy function validates both source and destination for memory leakage
  deepCopy(name, _name);

  if (_gender == 'M' || _gender == 'F')
  {
    gender = _gender;
  }
  else
  {
    gender = '\0';
  }

  //ensure contact number is numeric only
  for (int i = 0; i < strLength(_contactNumber) && check != false; i++)
  {
    if (!(_contactNumber[i] >= '0' && _contactNumber[i] <= '9'))
    {
      check = false;
    }
  }
  //copy only if _contactNumber was numeric
  if (check)
  {
    deepCopy(contactNumber, _contactNumber);
  }
  else
  {
    contactNumber = nullptr;
  }

  if (_shift == 'M' || _shift == 'A' || _shift == 'N')
  {
    shift = _shift;
  }
  else
  {
    shift = '\0';
  }

  if (_salary > 0)
  {
    salary = _salary;
  }
  else
  {
    salary = 0;
  }
  cout << "\nConstructor called.";
}

//copy constructor
SalonEmployee::SalonEmployee(const SalonEmployee &_se)
{
  //deepCopy function validates both source and destination memory
  deepCopy(name, _se.name);

  if (_se.gender == 'M' || _se.gender == 'F' || _se.gender == '\0')
  {
    gender = _se.gender;
  }
  else
  {
    gender = '\0';
  }

  deepCopy(contactNumber, _se.contactNumber);

  if (_se.shift == 'M' || _se.shift == 'A' || _se.shift == 'N')
  {
    shift = _se.shift;
  }
  else
  {
    shift = '\0';
  }

  if (_se.salary > 0)
  {
    salary = _se.salary;
  }
  else
  {
    salary = 0;
  }
  cout << "\nCopy constructor called.";
}

//copy assignment constructor
SalonEmployee &SalonEmployee::operator=(const SalonEmployee &_se)
{
  if (this != &_se)
  {
    if (name)
    {
      delete[] name;
      name = nullptr;
    }
    deepCopy(name, _se.name);

    if (_se.gender == 'M' || _se.gender == 'F')
    {
      gender = _se.gender;
    }
    else
    {
      gender = '\0';
    }

    if (contactNumber)
    {
      delete[] contactNumber;
      contactNumber = nullptr;
    }
    deepCopy(contactNumber, _se.contactNumber);

    if (_se.shift == 'M' || _se.shift == 'A' || _se.shift == 'N')
    {
      shift = _se.shift;
    }
    else
    {
      shift = '\0';
    }

    if (_se.salary > 0)
    {
      salary = _se.salary;
    }
    else
    {
      salary = 0;
    }
  }
  cout << "\nAssignment constructor called.";
  return *this;
}

//destructor
SalonEmployee::~SalonEmployee()
{
  //delete dynamic allocated memory
  if (name)
  {
    delete[] name;
    name = nullptr;
  }
  if (contactNumber)
  {
    delete[] contactNumber;
    contactNumber = nullptr;
  }
  cout << "\nDestructor called.";
}

//setters

void SalonEmployee::setName(const char *_name)
{
  //deepCopy will validate source and destination
  deepCopy(name, _name);
}

void SalonEmployee::setGender(const char _gender)
{
  if (_gender == 'M' || _gender == 'F')
  {
    gender = _gender;
  }
  else
  {
    gender = '\0';
  }
}

void SalonEmployee::setContactNumber(const char *_contactNumber)
{
  bool check = true;
  if (_contactNumber)
  {
    //ensure contact number is numeric only
    for (int i = 0; i < strLength(_contactNumber) && check != false; i++)
    {
      if (!(_contactNumber[i] >= '0' && _contactNumber[i] <= '9'))
      {
        check = false;
      }
    }
    //copy only if _contactNumebr was all numeric
    if (check)
    {
      //handle mem leakage if needed
      if (contactNumber)
      {
        delete[] contactNumber;
        contactNumber = nullptr;
      }
      deepCopy(contactNumber, _contactNumber);
    }
  }
}

void SalonEmployee::setShift(const char _shift)
{
  if (_shift == 'M' || _shift == 'A' || _shift == 'N')
  {
    shift = _shift;
  }
  else
  {
    shift = '\0';
  }
}

void SalonEmployee::setSalary(const double _salary)
{
  if (_salary > 0)
  {
    salary = _salary;
  }
  else
  {
    salary = 0;
  }
}
//setters
char *SalonEmployee::getName()
{
  char *temp = nullptr;
  //deepCopy function validates source and destination memory
  deepCopy(temp, name);
  return temp;
}

char SalonEmployee::getGender()
{
  return gender;
}

char *SalonEmployee::getContactNumber()
{
  char *temp = nullptr;
  //deepCopy function validates source and destination memory
  deepCopy(temp, contactNumber);
  return temp;
}

char SalonEmployee::getShift()
{
  return shift;
}

double SalonEmployee::getSalary()
{
  return salary;
}
