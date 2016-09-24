#include "database.h"


void set(int id, char *name, char type, int parrent_id, unsigned long long md5, filebase *base)
{
  base->id = id;
  strcpy(base->name, name);
  base->type = type;
  base->parrent_id = parrent_id;
  base->md5 = md5;
}

int getId(filebase *base)
{
  return base->id;
}

char *getName(filebase *base)
{
  return base->name;
}

char getType(filebase *base)
{
  return base->type;
}

int getParrentId(filebase *base)
{
  return base->parrent_id;
}

unsigned long long get_md5(filebase *base)
{
  return base->md5;
}

char *outFormat(filebase *base)
{
  char format[255];

  sprintf(format, "id: %i\n"
                  "name: %s\n"
                  "type: %c\n"
                  "parrent_id: %i\n"
                  "md5: %i\n", base->id, base->name, base->type, base->parrent_id, base->md5);
  return format;
}
