#include <iostream>
#include"MyString.cpp"
#include"MyString.h"
using namespace std;

int main(){
  //testing myChar
  cout<<"\n\tTesting MyChar...";

  cout<<"\nInitial count: "<<MyChar::get_count();
  MyChar a('A');
  cout<<"\nMyChar count after declaring a: "<<MyChar::get_count();
  MyChar b('b');
  cout<<"\nMyChar count after declaring b: "<<MyChar::get_count();

  cout<<"\nOrinal Values: ";
  cout<<a<<' '<<b;

  cout<<"\nLower cased a: ";
  a.make_lowerCase();
  cout<<a;

  cout<<"\nUpper cased b: ";
  b.make_upperCase();
  cout<<b;

  cout<<"\nInput new values for a and b separated by whitespace: ";
  cin>>a>>b;
  cout<<"\nNew values for a and b: "<<a<<" "<<b<<endl;
  
  //testing MyString
  cout<<"\n\tTesting MyString...";
  cout<<endl;
  
  MyString s1("firstString");//call default parametrized constructor
  cout<<"\ns1 after default construction: "<<s1;
  cout<<endl;
  
  MyString s2=s1;//call copy constructor
  cout<<"\ns2 after copy construction: "<<s2;
  cout<<endl;
  
  //concatenation and assignment
  MyString s3;
  s3=s1+s2;
  cout<<"\ns3 after assignment of concatenation of s1 + s2: "<<s3;
  cout<<endl;
  
  //incremantation and decrementation
  cout<<"\ns1 preincrement: "<<++s1;
  cout<<"\ns1 postdecrement: "<<s1--;
  cout<<"\ns1 postincrement: "<<s1++;
  cout<<"\ns1 predecrement: "<<--s1;
  cout<<"\ns1 cascading predecrement: "<<----s1;
  cout<<endl;
  
  //subscript insertion
  for(int i=0; i<3;i++){//assign first 3 capital letters of alphabet to first 3 indexes of s2
    s2[i]='A'+i;
  }
  cout<<"\ns2 after subscript insertions: "<<s2;
  cout<<endl;
  
  //insertion ops for MyString
  cout<<"\nTesting MyString insertion op...";
  cout<<"\nEnter new string for s3 of max length "<<s3.get_size()<<": ";
  cin>>s3;
  print(s3);
  
  cout<<endl;
  return 0;
}
