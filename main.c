#include <stdio.h>

#include "md5interfase.h"
#include "strdestroyer.h"

//typedef struct
//{
//  char *full;
//  char **words;
//  int wordsCount;
//} strDitales;



int main()
{
//  char *words[];
  strDitales *d = (strDitales*) malloc(sizeof(strDitales*));
  d = strDistruct( "test1/test2/test3/test4" );

  int i = 0;

  printf("d->full: %s\n", d->full);
  for (; i < d->wordsCount; ++i)
  {
      printf( "d->word[%i]: %s\n", i, d->words[i]);
      free(d->words[i]);
  }
  free(d->full);
  free(d->words);
  free(d);


  return 0;
}
