#include <iostream>
#include <fstream>
#include"process.cpp"
#include"process.h"

using namespace std;

int main()
{
  ifstream fin("processes.txt");
  if(!fin.is_open()){
      cout<<"\nfile not found.\n";
      return 0;
  }
  int NoOfprocesses = 0;

  char i;
  while (!fin.eof())
  {
      fin.get(i);
      if (i == '\n')
      {
	  NoOfprocesses++;
      }
  }
  //last character of the file is eof not newline, so increment count afterwards as one less line is counted than there are in the file.
  NoOfprocesses++;
  fin.close();

  //declare dynamic mem
  // processes *objects = new processes[NoOfprocesses]; 'new' will create the objects with default constructor, we dont need that here.
  processes* list[NoOfprocesses];//do this instead, this just creates the memory, not the objects.

  int j = 0, processId = 0, CodeLines = 0;

  //open file again
  fin.open("processes.txt");

  while (j <NoOfprocesses)
  {

    fin >> processId >> CodeLines;

    //now we create object with parametrized constructor on each index of object
    list[j] = new processes(processId, CodeLines);

    //    cout<<processId<<" "<<CodeLines<<" ";

    //    objects[j].setProcessesID(processId);

    //   objects[j].setLinesOfCode(CodeLines);

    j++;
  }
  
  cout<<endl;
  return 0;
}
