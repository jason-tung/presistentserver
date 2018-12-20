cmake_minimum_required(VERSION 3.12)
project(presistentserver C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(presistentserver
        basic_server.c
        client.c
        pipe_networking.c
        pipe_networking.h)
