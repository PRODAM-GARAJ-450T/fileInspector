#include "strdestroyer.h"

using namespace strDistroy;

char **destroyertowords(char *str)
{
  char **dirs;
  char c, cc;
  int i = 0,
      tile = 0;
  while (c != EOF)
  {
    c = str[i];

    if (c != '/' && c != '\\')
    {
        dirs[i - tile] = (char *)realloc (c, i-tile*sizeof(char));
    }
    ++i;
    tile = i;
    dirs = (char*) realloc(NULL, i*sizeof(char));
  }

  return dirs;
}
