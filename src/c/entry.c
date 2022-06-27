#include <stdlib.h>
#include "HsFFI.h"

// https://downloads.haskell.org/~ghc/latest/docs/html/users_guide/exts/ffi.html#making-a-haskell-library-that-can-be-called-from-foreign-code
HsBool jwtfuzz_init(void){
  int argc = 3;
  char *argv[] = { "jwtfuzz", "+RTS", "-A32m", NULL };
  char **pargv = argv;

  // Initialize Haskell runtime
  hs_init(&argc, &pargv);

  // do any other initialization here and
  // return false if there was a problem
  return HS_BOOL_TRUE;
}

void jwtfuzz_end(void){
  hs_exit();
}
