#ifndef STRDESTROYER_H
#define STRDESTROYER_H


#include <string.h>
#include <stdio.h>
#include <malloc.h>
#include "io_format.h"

typedef struct
{
  char *full;
  char **words;
  int **size;
  char endOf;
} strDitales;

void set(char *full, strDitales *strD);
char **destroyertowords(char *str, strDitales *strD);

#endif // STRDESTROYER_H
