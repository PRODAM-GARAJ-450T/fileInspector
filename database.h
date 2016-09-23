#ifndef DATABASE_H
#define DATABASE_H

#include "io_format.h"
#include "md5interfase.h"

struct filebase
{
  int  id;
  char name[255];
  char type;
  int  parrent_id;
  unsigned long long int md5;
};

void set(int id, char *name, char type, int parrent_id, struct filebase *base);

int getId( struct filebase *base );
char* getName( struct filebase *base );
char getType( struct filebase *base );
int  getParrentId( struct filebase *base );
unsigned long long int get_md5( struct filebase *base );

char* outFormat( struct filebase *base );
void outputToFile( struct filebase *base );
void outputToScreen( struct filebase *base);

#endif // DATABASE_H
