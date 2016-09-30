#ifndef STRDESTROYER_H
#define STRDESTROYER_H


#include <string.h>
#include <stdio.h>
#include <malloc.h>
#include "io_format.h"

typedef struct
{
  char  *full;
  char **words;
  int    wordsCount;
} strDitales;

void set(char *full, strDitales *strD);
strDitales* destroyertowords(char *str);
char** sliceString(const char* source, const char delimeter);
char** sliceStringN(const char* source, const char delimeter, int *N);
#endif // STRDESTROYER_H
