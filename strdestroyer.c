#include "strdestroyer.h"

//typedef struct
//{
//  char *full;
//  char **words;
//  int wordsCount;
//} strDitales;

int strFromStr(char *str, char *word)
{
  int length1 = 0,
      length2 = 0,
      size = 0;
  char *subBuffer = NULL;

  length1 = strlen(str);

  subBuffer = strstr( str, "/");
  if( !subBuffer )
    length2 = 0;
  else
    length2 = strlen(subBuffer);

  size = length1 - length2;

  strncpy(word, str, size );
//  str = strstr( str, "/");
  return size;
}

void destroyertowords(char *str, strDitales *strD)
{
  strD->full = (char*) malloc(strlen(str)+1);
  strcpy(strD->full, str);

  char word[32] = {0};
  int size = 0,
      wordsCount = 0;

     char *p = str;

     while ( ( p = strchr( str, '/' ) ) )
     {
       ++p;
       wordsCount++;
       free(strD->words);
       strD->words = (char**) malloc( (wordsCount + 1) * sizeof(char*) );
//       strD->words = (char**) realloc(strD->words, (wordsCount + 1) * sizeof(char*));
       size = strFromStr( str, &word);

       while ( str != p )
       {
         *str++;
       }

       strD->words[wordsCount] = (char*) malloc( sizeof(char*) * (size+1) );

       strcpy(strD->words[wordsCount], word);

/*// todo del */     printf("%s\n", strD->words[wordsCount]);

// todo del      putchar('\n');
     }

     size = strFromStr( str, &word);

     while ( *str )
     {
       *str++;
     }

     strD->words[wordsCount] = (char*) malloc( sizeof(char*) * (size+1) );

     strcpy(strD->words[wordsCount], word);
//     wordsCount++;

     strD->wordsCount = wordsCount;
/*//  todo del*/  printf("%s\n", strD->words[wordsCount]);

//     for (int i = 0; i < wordsCount; ++i)
//       {
//        printf("strD->words[%i]: %s\n", i, strD->words[i]);
//       }
}
