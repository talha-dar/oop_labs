#include"Fraction.h"

Fraction::Fraction(const int _numerator_, const int _denominator_){
  if(_numerator_>=0 && _denominator_>0){
    numerator_=_numerator_;
    denominator_=_denominator_;
  }
  else{
    numerator_=0;
    denominator_=1;
  }
}

//setters
void Fraction::set_numerator(const int _numerator_){
  if(_numerator_>=0){
    numerator_=_numerator_;
  }
  else{
    numerator_=0;
  }
}

void Fraction::set_denominator(const int _denominator_){
  if(_denominator_>0){
    denominator_=_denominator_;
  }
  else{
    denominator_=1;
  }
}

//getters
int Fraction::get_numerator()const{
  return numerator_;
}

int Fraction::get_denominator()const{
  return denominator_;
}

//operators
ostream& operator<<(ostream& out, const Fraction& _obj){
  out<<_obj.get_numerator()<<'/'<<_obj.get_denominator();
  return out;
}

istream& operator>>(istream& in, Fraction& _obj){
  int num=0, denom=0;
  in>>num>>denom;
  _obj.set_numerator(num);
  _obj.set_denominator(denom);
  return in;
}
//other methods
void Fraction::display()const{
  cout<<endl<<numerator_<<'/'<<denominator_;
}
