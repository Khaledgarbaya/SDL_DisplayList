cmake_minimum_required(VERSION 2.8)

project(SDL_DisplayList)

set(SOURCE)

add_executable(myapp main.c)

install(TARGETS SDL_DisplayList DESTINATION bin)