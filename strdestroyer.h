#ifndef STRDESTROYER_H
#define STRDESTROYER_H



#include "io_format.h"

typedef struct
{
  char *full;
  char **words;
  char endOf;
} strDitales;

char **destroyertowords(char *str);

#endif // STRDESTROYER_H
