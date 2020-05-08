#pragma once

#include <iostream>

using namespace std;

class processes
{

  int processId;

  int linesOfCode;

  static int totalLinesOfCode;

  static int maxLinesOfCode;

  static int minLinesOfCode;

  static int avgLinesOfCodePerProcess;

public:
  processes(int ID = 0, int linesOfCode = 0);

  processes(const processes &obj);

  void setProcessesID(const int);

  const int getProcessesID();

  void setLinesOfCode(const int);

  const int getLinesOfCode();
};