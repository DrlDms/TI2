cmake_minimum_required(VERSION 4.1)
project(TI2)

set(CMAKE_CXX_STANDARD 20)

add_executable(TI2 main.cpp
        main.cpp
        Basisconcepten/basisconcepten.cpp
        Basisconcepten/basisconcepten.h
        Datatypes/datatypes.cpp
        char/char.cpp)
