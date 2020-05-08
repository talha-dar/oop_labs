#include "process.h"

int processes::totalLinesOfCode;

int processes::maxLinesOfCode;

int processes::minLinesOfCode;

int processes::avgLinesOfCodePerProcess;

processes::processes(int ID, int CodeLines)

{
  processId = ID;
  linesOfCode = CodeLines;

  cout << processId << " " << linesOfCode << " ";

  //  cout<<getProcessesID()<<" "<<getLinesOfCode();

  // cout<<processId<<" "<<;
}

processes::processes(const processes &obj)

{

  processId = obj.processId;

  linesOfCode = obj.linesOfCode;
}

void processes::setProcessesID(const int ID)

{

  processId = ID;
}

const int processes::getProcessesID()

{

  return processId;
}

void processes::setLinesOfCode(const int code)

{

  linesOfCode = code;
}

const int processes::getLinesOfCode()
{

  return linesOfCode;
}