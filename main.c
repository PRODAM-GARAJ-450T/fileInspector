#include <stdio.h>

#include "md5interfase.h"
#include "strdestroyer.h"

//typedef struct
//{
//  char *full;
//  char **words;
//  int wordsCount;
//} strDitales;

strDitales *strDistruct( /*char *str*/ )
{
    strDitales *strD = (strDitales*) malloc(sizeof(strDitales*));

    char *full_ = "ops";
    char **words_ = (char**) malloc(sizeof(char*) * 3);
        words_[0] = "test1";
        words_[1] = "test2";
        words_[2] = "test3";
    int wCount = 3;

    strD->full = (char*) malloc( sizeof(char*) * 5);// <<<< PROBLEM segFault
    strcpy(strD->full, full_);
    int i = 0;

    strD->words = (char**) malloc(sizeof(char*) * wCount);
    for(; i < wCount; i++)
    {
        strD->words[i] = (char*) malloc( sizeof(char) * 50 );
        strcpy(strD->words[i], "test");
        strcpy(strD->words[i], words_[i]);
    }
    strD->wordsCount = wCount;

    return strD;
}

int main()
{
//  char *words[];
  strDitales *d = (strDitales*) malloc(sizeof(strDitales*));;
//  int n = 0;
//  char** x = NULL;
//        x = sliceString("test1/test2/test3/test4", '/');
  d = strDistruct();
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
