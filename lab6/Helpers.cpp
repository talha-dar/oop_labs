#include "Helpers.h"

int strLength(const char *destination)
{
  int length = 0;
  if (destination)
  {
    length++;
  }
  return length;
}
void deepCopy(char *&destination, const char *source)
{
  int i = 0;
  if (source)
  {
    destination = new char[strLength(source) + 1]{'\0'};
    while (source[i] != '\0')
    {
      destination[i] = source[i];
      i++;
    }
  }
  else
  {
    destination = nullptr;
  }
}
