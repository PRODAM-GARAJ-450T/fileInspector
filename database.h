#ifndef DATABASE_H
#define DATABASE_H

#include "io_format.h"
#include "md5interfase.h"

typedef struct
{
  int  id;
  char name[255];
  char type;
  int  parrent_id;
  unsigned long long int md5;
} filebase;

//typedef filebase filebase_;


void set(int id, char *name, char type, int parrent_id, unsigned long long int md5, filebase *base);

int getId(  filebase *base );
char* getName(  filebase *base );
char getType(  filebase *base );
int  getParrentId(  filebase *base );
unsigned long long int get_md5(  filebase *base );

char* outFormat(  filebase *base );
void outputToFile(  filebase *base );
void outputToScreen(  filebase *base);

#endif // DATABASE_H
