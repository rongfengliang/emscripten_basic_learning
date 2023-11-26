cmake_minimum_required(VERSION 3.20.0)

project(emccdemo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXECUTABLE_SUFFIX .js)

set(TD_LINKER_FLAGS "-Wl,--gc-sections -Wl,--exclude-libs,ALL") 

add_executable(myadd src/add.c src/sub.c)

target_link_libraries(myadd "-s MODULARIZE=1 -s EXPORTED_RUNTIME_METHODS=ccall")
