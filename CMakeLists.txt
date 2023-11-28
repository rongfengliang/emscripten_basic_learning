cmake_minimum_required(VERSION 3.20.0)

project(emccdemo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXECUTABLE_SUFFIX .js)

set(TD_LINKER_FLAGS "-Wl,--gc-sections -Wl,--exclude-libs,ALL") 

add_executable(myadd src/add.c src/sub.c)

add_executable(mydalong src/dalong.c)

add_executable(mysubdemo src/add.c)

add_executable(jssub src/jsapp.c)

target_link_libraries(myadd "-s MODULARIZE=1 -s EXPORTED_RUNTIME_METHODS=ccall,UTF8ToString,lengthBytesUTF8,stringToUTF8")
target_link_libraries(mydalong "-s MODULARIZE=1 -s EXPORTED_RUNTIME_METHODS=ccall,UTF8ToString,lengthBytesUTF8,stringToUTF8")
target_link_libraries(mysubdemo "-s MODULARIZE=1 --js-library /src/src/sub_library.js -s EXPORTED_RUNTIME_METHODS=ccall,UTF8ToString,lengthBytesUTF8,stringToUTF8")
target_link_libraries(jssub "-s MODULARIZE=1 --js-library /src/src/sub_library.js -s EXPORTED_RUNTIME_METHODS=ccall")

