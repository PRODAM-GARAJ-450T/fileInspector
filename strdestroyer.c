#include "strdestroyer.h"

//typedef struct
//{
//  char *full;
//  char **words;
//  int **size;
//  char endOf;
//} strDitales;

char **destroyertowords(char *str, strDitales *strD)
{
  char *dirs, word[32] = {0};
  char c;
  int i = 0,
      length1 = 0,
      length2 = 0,
      tile = 0,
      wordsCount = 0;

     char *p = str;
     while ( (p = strchr( str, '/' ) ) )
       {
         ++p;
         wordsCount++;
         strD->words = (char**) realloc(strD->words, (wordsCount + 1) * sizeof(char*));
         //strtok( *str, "/\0\n");
         length1 = strlen(str);
         dirs = strstr( str, "/");
         length2 = strlen(dirs);

       //  dirs = NULL;
         strncpy(word, str, length1 - length2 );
         while ( str != p )
         {
           //strncpy(dirs/*, "%s"*/, str[0], i);
           putchar( *str++ );
           i++;

         }

         strD->words[wordsCount] = (char*) malloc( i + 1 );

         strcpy(strD->words[wordsCount], word);

         putchar('\n');
     }



     while ( *str )
       {
         putchar( *str++ );
       }
     putchar('\n');

     for (int i = 0; i < wordsCount; ++i)
       {
        printf("strD->words[%i]: %s\n", i, strD->words[i]);
       }


  return dirs;
}
