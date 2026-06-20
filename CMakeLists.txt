cmake_minimum_required(VERSION 3.20)
project(WarOfStrategies)

find_package(SDL2 REQUIRED)

add_executable(warofstrat src/main.c src/map.c)
target_link_libraries(warofstrat PRIVATE SDL2::SDL2 SDL2::SDL2main)
