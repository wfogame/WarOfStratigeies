cmake_minimum_required(VERSION 3.20)
project(WarOfStratigeies)
add_executable(warofstrat src/main.c)

find_package(SDL2 REQUIRED)
target_link_libraries(openfrontgame PRIVATE SDL2::SDL2)
