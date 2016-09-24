#include "md5interfase.h"


int init()
{
  return MD5_Init(&md5handler);
}

int update(const void *data)
{
  return MD5_Update(&md5handler, data, sizeof(data));
}

int final()
{
  return MD5_Final(md5digest, &md5handler);
}
