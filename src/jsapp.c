#include <emscripten.h>

extern int sub(int a, int b);

EMSCRIPTEN_KEEPALIVE
int subapp(int a, int b){
    return sub(a,b);
}