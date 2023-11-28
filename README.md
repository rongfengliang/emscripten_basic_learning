# emsdk for wasm learning

## command

*  with docker

```code
docker run -it -v $PWD:/src  emscripten/emsdk:3.1.47 sh

mkdir build

emcmake cmake ..

make

```

* with emcc command

```code
emcc add.c -o myaddv2.js -sMODULARIZE -sEXPORTED_RUNTIME_METHODS=ccall


emcc add.c -o myaddv3.js --js-library sub_library.js

emcc sub.c -o mysubjs.js  -sMODULARIZE -sEXPORTED_RUNTIME_METHODS=ccall
```