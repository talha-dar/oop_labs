#include"MyString.h"

//constructors
MyString::MyString(const char* _arr){
  if(_arr){
    int l=len(_arr);
    arr=new MyChar[l];
    for(int i=0; i<l; i++){
      arr[i].set_ch(_arr[i]);
    }
    size=l;
  }
  else{
    arr=nullptr;
    size=0;
  }
}

//copy constructor
MyString::MyString(const MyString& obj){
  if(obj.arr){
    arr=new MyChar[obj.size];
    for(int i=0; i<obj.size;i++){
      arr[i]=obj.arr[i];
    }
    size=obj.size;
  }
  else{
    arr=nullptr;
    size=0;
  }
}

//assignment operator
MyString& MyString::operator =(const MyString& obj){
  if(this!=&obj){
    if(arr){
      delete[] arr;
      arr=nullptr;
    }
    arr=new MyChar[obj.size];
    for(int i=0; i<obj.size;i++){
      arr[i]=obj[i];
    }
    size=obj.size;
  }
 return *this;
}

//destructor
MyString::~MyString(){
  if(arr){
    delete[] arr;
    arr=nullptr;
  }
  size=0;
}

//getters
int MyString::get_size()const{
  return size;
}
//operators
MyString MyString:: operator+(const MyString& obj){
  int i=0;
  MyString temp;
  
  temp.size=size+obj.size;//generate size of new object
  temp.arr=new MyChar[temp.size];//create memory of new object
  
  for(; i<size;i++){//copy each element of left operand to new object
    temp.arr[i]=arr[i];
  }
  for(int j=0;j<obj.size;j++){//append each element of right operand to new object
    temp.arr[i]=obj.arr[j];
    i++;
  }
  return temp;
}

MyChar& MyString::operator[](const int i)const{
  return arr[i];
}

ostream& operator<<(ostream& out, const MyString& obj){
  for(int i=0; i<obj.size;i++){
    out<<obj[i];
  }
  return out;
}

istream& operator >> (istream& in, MyString& obj){
  for(int i=0; i<obj.size; i++){
    cin>>obj[i];
  }
  return in;
}


//preincrement and predecrement operators
MyString& MyString::operator++(){ //preincrement
  for(int i=0; i<size;i++){
    arr[i].make_upperCase();
  }
  return *this;
}

MyString& MyString::operator--(){ //predecrement
  for(int i=0; i<size;i++){
    arr[i].make_lowerCase();
  }
  return *this;
}

//postincrement and postdecrement operators
MyString MyString::operator++(int){ // postincrement
  MyString temp(*this);
  ++*this;
  return temp;
}

MyString MyString::operator--(int){ //postdecrement
  MyString temp(*this);
  --*this;
  return temp;
}

void print(const MyString& obj){
  cout<<"\nMyString: "<<obj;
}

int len(const char* arr){
  int  i=0;
  while(arr[i]!='\0'){
    i++;
  }
  return i;
}
