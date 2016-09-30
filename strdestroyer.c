#include "strdestroyer.h"

//typedef struct
//{
//  char *full;
//  char **words;
//  int wordsCount;
//} strDitales;

// qqqqq/wwwww/eeeeeee/rrrrrr

char detectDelimeter( char *str, char *delimetersVariants )
{
    char delimeter = '\0';
    char *buffer = (char*) malloc( sizeof(char) * strlen(delimetersVariants) );
        buffer = delimetersVariants;

    while( *str )
    {
        while( *delimetersVariants )
        {
            if( *str == *delimetersVariants )
            {
                delimeter = *delimetersVariants;
                free(buffer);
                return delimeter;
            }
            *delimetersVariants++;
        }
        delimetersVariants = buffer;
        *str++;
    }
    return delimeter;
}

int charsCount( const char* source, const char character )
{
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
  if( source[i-1] != character )
      count++;

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
  char** result = (char**)malloc( sizeof(char*) * (charsCount(source, delimeter)) );
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


strDitales *strDistruct( char *str )
{
    strDitales *strD = (strDitales*) malloc(sizeof(strDitales*));

//    ------------------------
    char delimeter = detectDelimeter(str, "\\/");
    int charsC = charsCount( str, delimeter );

//    ------------------------

    char *full_ = "ops";//                            \/
    char **words_ = (char**) malloc(sizeof(char*) * charsC);

    words_ = sliceString( str, delimeter );

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
