#include <iostream>
#include "Task_1.h"
#include "Task_1.cpp"
using namespace std;

void print(SalonEmployee se)
{
  cout << endl;
  cout << "\n\tName: " << se.getName();
  cout << "\n\tGender: " << se.getGender();
  cout << "\n\tContactnumber: " << se.getContactNumber();
  cout << "\n\tShift: " << se.getShift();
  cout << "\n\tSalary: " << se.getSalary();
  cout << endl;
}

int main()
{
  //make static array
  SalonEmployee arr1[2] = {SalonEmployee("Arr1 Obj1", 'M', "223432", 'A', 420), SalonEmployee("Arr1 Obj1", 'F', "0193801", 'M', 720)};

  //print static array
  cout << "\nPrinting arr1: ";
  for (int i = 0; i < 2; i++)
  {
    print(arr1[i]);
  }

  //make dynamic array
  SalonEmployee *arr2 = new SalonEmployee[2]{SalonEmployee("Arr2 Obj1", 'M', "9079868", 'N', 988), SalonEmployee("Arr2 Obj2", 'F', "1341", 'M', 1232)};

  //print dynamic array
  cout << "\n\nPrinting dynamic array: ";
  for (int i = 0; i < 2; i++)
  {
    print(arr2[i]);
  }

  //make dynamic array on array ptr
    cout<<"\nCreating dynamic array..";
  SalonEmployee *arr3[2];
  cout<<"\nconstruction...";
  for (int i = 0; i < 2; i++) //copy instance i or arr1 to instance i of arr3
  { 
    arr3[i] = new SalonEmployee(arr1[i]);
  }

  //print dynamic array ptr
  cout << "\n\nPrinting dynamic ptr array : ";
  for (int i = 0; i < 2; i++)
  {
    print(*arr3[i]);
  }

  for (int i = 0; i < 2; i++) //delete dynamic mem instances
  {
    delete arr3[i];
  }

  //make dynamic array on double ptr
  SalonEmployee **arr4;

  arr4 = new SalonEmployee *[2];

  for (int i = 0; i < 2; i++)
  {
    arr4[i] = new SalonEmployee(arr1[i]);
  }

  //printing dynamic double ptr array
  cout << "\n\nPrinting dynamic double pointer array: ";
  for (int i = 0; i < 2; i++)
  {
    print(*arr4[i]);
  }

  //deleting dynamic double ptr array
  for (int i = 0; i < 2; i++)
  {
    delete arr4[i];
  }

  //test assignment operator
  SalonEmployee obj1("Instace obj1", 'M', "0809809", 'M', 132);
  SalonEmployee obj2("Instance obj2", 'F', "9823434", 'N', 313);
  SalonEmployee obj3("Instance obj3", 'F', "7987", 'A', 342);

  //testing cascading case
  (obj3 = obj2) = obj1;

  //testing self association case
  obj1 = obj1;

  //printing results of cascading case
  cout << endl;
  cout << "\n\nChecking values after assignment testing.";
  cout << "\n\nOBJ1";
  print(obj1);
  cout << "\n\nOBJ2";
  print(obj2);
  cout << "\n\nOBJ3";
  print(obj3);

  cout << endl;
  return 0;
}
