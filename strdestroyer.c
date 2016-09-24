#include "strdestroyer.h"

//typedef struct
//{
//  char *full;
//  char **words;
//  int wordsCount;
//} strDitales;

void strFromStr(char *str, char *word)
{
  int length1 = 0,
      length2 = 0;
  char *subBuffer = {0};

  length1 = strlen(str);

  subBuffer = strstr( str, "/");
  if( !subBuffer )
    length2 = 0;
  else
    length2 = strlen(subBuffer);

  strncpy(word, str, length1 - length2 );
//  str = strstr( str, "/");
}

void destroyertowords(char *str, strDitales *strD)
{
  strD->full = (char*) malloc(strlen(str)+1);
  strcpy(strD->full, str);

  char word[32] = {0};
  int i = 0,
      length1 = 0,
      length2 = 0,
      wordsCount = 0;

     char *p = str;

     while ( ( p = strchr( str, '/' ) ) )
     {
       ++p;
       wordsCount++;
       strD->words = (char**) realloc(strD->words, (wordsCount + 1) * sizeof(char*));
       strFromStr( &str, &word);

       while ( str != p )
       {
         *str++;
       }

       strD->words[wordsCount] = (char*) malloc( length1 - length2 + 1 );

       strcpy(strD->words[wordsCount], word);

// todo del      printf("%s", strD->words[wordsCount]);

// todo del      putchar('\n');
     }

     strFromStr( str, &word);

     while ( *str )
     {
       *str++;
     }

     strD->words[wordsCount] = (char*) malloc( length1 - length2 + 1 );

     strcpy(strD->words[wordsCount], word);
     wordsCount++;

     strD->wordsCount = wordsCount;
//  todo del   printf("%s", strD->words[wordsCount]);

//     for (int i = 0; i < wordsCount; ++i)
//       {
//        printf("strD->words[%i]: %s\n", i, strD->words[i]);
//       }
}
