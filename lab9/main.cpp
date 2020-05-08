#include<iostream>
#include<cstring>
#include<fstream>
#include"Process.h"
#include"Process.cpp"
using namespace std;

// int get_fileHeight(const char fname[]){
    
//}

int main(){
    char filename[]={"processes.txt"};
    int count=0, _id=0, _lines=0;
    Process* proc_list=nullptr;
    
    //open file, and iterate through it to find number of lines.
    ifstream fin(filename);
    if(!fin.is_open()){
	cout<<"\nFile not found.";
	return 0;
    }

    //iterate filr marker
    while(!fin.eof()){
	count++;
	fin.ignore('\n');
    }
    count++;

    //create dynamic memory
    proc_list=new Process[count];

    //reopen file to reset marker to start
    fin.close();
    ifstream _fin(filename);

    //read elements from file and instantiate objects on proc_list
    for(int i=0; i<count;i++){
	_fin>>_id>>_lines;
	proc_list[i]=Process(_id, _lines);
    }

    //print non-static members
    proc_list[0].display();

    //print array
    print(proc_list, count);
    cout<<endl;
    return 0;
}
