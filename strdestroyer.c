#include "strdestroyer.h"

//typedef struct
//{
//  char *full;
//  char **words;
//  int wordsCount;
//} strDitales;

// qqqqq/wwwww/eeeeeee/rrrrrr

int charsCount(const char* source, const char character ) {
  int count  = 0;
  int i = 0;
  while( source[i] != '\0' )
  {
    if( source[i] == character )
    {
        count++;
    }
    i++;
  }

  return count;
}

void clearBuffer(char *buffer)
{
  int j = 0;
  for (; j < 32; ++j)
  {
    buffer[j] = '\0';
  }
}

char** sliceString(const char* source, const char delimeter)
{
  char** result = (char**)malloc( sizeof(char*) * (charsCount(source, delimeter) + 1) );
  char buffer[32];
  clearBuffer(&buffer);
  int i = 0;
  int partsCount = 0;
  int substrLength = 0;

  // /*
  while( source[i] != '\0' )
  {
    if( source[i] == delimeter )
    {
      substrLength = 0;
      result[partsCount] = (char*)malloc( strlen(buffer) * sizeof(char) );
      strcpy(result[partsCount], buffer);
      clearBuffer(&buffer);
      partsCount++;
    }
    else
    {
      buffer[substrLength++] = source[i];
    }
    i++;
  }
  substrLength = 0;
  result[partsCount] = (char*)malloc( strlen(buffer) * sizeof(char) );
  strcpy(result[partsCount], buffer);
  clearBuffer(&buffer);
  partsCount++;
  // */

  return result;
}
// working ^^^^^^^^^^^^^^^^^^^^^^^^^^^
char **sliceStringN(const char *source, const char delimeter, int *N)
{
  char **result = (char**)malloc( sizeof(char*) * (charsCount(source, delimeter) + 1) );
  char buffer[32];

  clearBuffer(&buffer);

  int i = 0,
      partsCount = 0,
      substrLength = 0;

  // /*
  while( source[i] != '\0' )
  {
    if( source[i] == delimeter )
    {
      substrLength = 0;
      result[partsCount] = (char*)malloc( strlen(buffer) * sizeof(char) );
      strcpy(result[partsCount], buffer);
      clearBuffer(&buffer);
      partsCount++;
    }
    else
    {
      buffer[substrLength++] = source[i];
    }
    i++;
  }
  substrLength = 0;
  result[partsCount] = (char*)malloc( strlen(buffer) * sizeof(char) );
  strcpy(result[partsCount], buffer);
  clearBuffer(&buffer);
  N = partsCount++;
  // */

  return result;
}

strDitales *destroyertowords(char *str)
{
  strDitales *strD;
////      "test1/test2/test3/test4"
//  char **x = sliceString(str, '/');

//  while

  return strD;
}

