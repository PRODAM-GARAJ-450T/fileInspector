#include <stdio.h>

#include "md5interfase.h"
#include "strdestroyer.h"

int charsCount(const char* source, const char character ) {
  int count  = 0;
  int i = 0;
  while( source[i] != '\0' ) {
      if( source[i] == character ) {
          count++;
      }
      i++;
  }

  return count;
}

void clearBuffer(char *buffer) {
  int j = 0;
  for (; j < 32; ++j) {
    buffer[j] = '\0';
  };
}

char** sliceString(const char* source, const char delimeter) {
  char** result = (char**)malloc( sizeof(char*) * (charsCount(source, delimeter) + 1) );
  char buffer[32];
  clearBuffer(&buffer);
  int i = 0;
  int partsCount = 0;
  int substrLength = 0;

  // /*
  while( source[i] != '\0' ) {
      if( source[i] == delimeter ) {
        substrLength = 0;
        result[partsCount] = (char*)malloc( strlen(buffer) * sizeof(char) );
        strcpy(result[partsCount], buffer);
        clearBuffer(&buffer);
        partsCount++;
      } else {
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

int main()
{
//  char *words[];
  strDitales d;
  char** x = sliceString("test1/test2/test3/test4", '/');
  int i = 0;
  for (; i < 4; ++i) {
      printf("%s\n", x[i]);
  }


//  words = sliceString("test1/test2/test3/test4", '/');

//  destroyertowords("test1/test2/test3/test4", &d);
//  init();

//  int md5 = 0;

//  update("0123456789");

//  md5 = final();
//  int i;
//  for (i=0;i<d.wordsCount;i++)
//  {
//          printf("%s\n", d.words[i]);
//  };

  return 0;
}
