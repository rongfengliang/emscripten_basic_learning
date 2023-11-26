#include <emscripten.h>
#include "add.h"
EMSCRIPTEN_KEEPALIVE
int add(int a,int b) {
    return a+b;
}

extern int sub(int a,int b);

EMSCRIPTEN_KEEPALIVE
int dalongdemoadd(int a, int b) {
    return a+b;
}

EMSCRIPTEN_KEEPALIVE
int  mysub(int a,int b){
   return  sub(a,b);
}
EMSCRIPTEN_KEEPALIVE
char * print_name(char * name){
    return name;
}