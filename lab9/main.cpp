#include <iostream>
#include <fstream>
#include "Process.h"
#include "Process.cpp"
using namespace std;
 
int main()
{
    char filename[] = {"processes.txt"};
    int count = 0, _id = 0, _lines = 0;

    //open file, and iterate through it to find number of lines.
    ifstream fin(filename);
    if (!fin.is_open())
    {
        cout << "\nFile not found.";
        return 0;
    }

    //iterate filr marker
    while (!fin.eof())
    {
        fin.ignore('\n');
        count++;
    }

    //create dynamic memory
    Process* proc_list[count];
 
    //reopen file to reset marker to start
    fin.close();
    ifstream _fin(filename);

    //read elements from file and instantiate objects on proc_list
    for (int i = 0; i < count; i++)
    {
        _fin >> _id >> _lines;
        proc_list[i] = new Process(_id, _lines);
    }
 
    //print static members
    Process::display();

    //print non static members
    print(proc_list, count);

    //delete memory
    for(int i=0; i<count;i++){
	delete proc_list[i];
    }
    cout << endl;
    return 0;
}
