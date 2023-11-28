#include  "sub.h"
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int sub(int a,int b){
   return  a-b;
}