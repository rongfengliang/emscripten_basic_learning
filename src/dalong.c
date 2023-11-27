
#include <emscripten.h>
#include "dalong.h"

EMSCRIPTEN_KEEPALIVE
int dalong(int a, int b) {
    return a + b;
}