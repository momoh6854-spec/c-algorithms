cmake_minimum_required(VERSION 3.20)

project(c-algoithms LANGUAGES C)

set(CMAKE_C_STANDARD 11)

add_executable(c-algoithms
        "for matrix and arrays/matrix-exo.c"
)

target_link_libraries(c-algoithms PRIVATE m)