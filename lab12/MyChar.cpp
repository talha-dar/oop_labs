#include"MyChar.h"

//constructor
MyChar::MyChar(const char _ch){
  if((_ch>='a' && _ch<='z') || (_ch>='A' && _ch<='Z')){
    ch=_ch;
  }
  else{
    ch='\0';
  }
  ch_count++;
}

//destructor
MyChar::~MyChar(){
  ch_count--;
}
//setters
void MyChar::set_ch(const char _ch){
  if((_ch>='a' && _ch<='z') || (_ch>='A' && _ch<='Z')){
    ch=_ch;
  }
  else{
    ch='\0';
  }
}

//getters
char MyChar::get_ch()const{
  return ch;
}

int MyChar::get_count(){
  return ch_count;
}

//operators
ostream& operator<<(ostream& out, const MyChar& _ch){
  out<<_ch.ch;
  return out;
}

istream& operator>>(istream& in , MyChar& _ch){
  in>>_ch.ch;
  return in;
}

//mutators
void MyChar::make_lowerCase(){
  if(!(ch>='a' && ch<='z')){
    ch=ch+32;
  }
}

void MyChar::make_upperCase(){
  if((ch>='a' && ch<='z')){
    ch=ch-32;
  }
}
