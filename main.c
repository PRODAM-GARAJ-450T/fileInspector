#include <stdio.h>

#include "md5interfase.h"

int main()
{
  init();

  int md5 = 0;

  update("0123456789");

  md5 = final();
  int i;
  for (i=0;i<MD5_DIGEST_LENGTH;i++)
  {
          printf("%02x",md5digest[i]);
  };

  return 0;
}
