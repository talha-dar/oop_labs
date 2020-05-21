#include<iostream>
#include<fstream>
#include"Process.h"
#include"Process.cpp"
using namespace std;

class Test{
private:
  int count;
public:
  Test(){
    this->count=0;
  }
  void fun();
};

void Test::fun(){
  this->count++;
  cout<<this->count<<" ";
}

void mainFun(){
  static Test t;
  t.fun();
}

int main(){
  int arr[]={1,2,3};
  for (int i = 0; i < 3; i++) {
    cout<<arr[i]<<" ";
  }

  return 0;
}
