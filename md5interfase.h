#ifndef MD5INTERFASE_H
#define MD5INTERFASE_H

#include "openssl/md5.h"

namespace md5_ {


MD5_CTX md5handler;
unsigned char md5digest[MD5_DIGEST_LENGTH];

int init();
int update(const void *data);
int final();

};




#endif // MD5INTERFASE_H
