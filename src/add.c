#include <emscripten.h>
#include "add.h"
EMSCRIPTEN_KEEPALIVE
int add(int a,int b) {
    return a+b;
}
EMSCRIPTEN_KEEPALIVE
int dalongdemoadd(int a, int b) {
    return a+b;
}