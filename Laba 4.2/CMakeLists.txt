cmake_minimum_required(VERSION 3.27)
project(Laba_4_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Laba_4_2 main.cpp
        Circle.h
        Rectangle.h
        RightTriangle.h
        Shape.h
        Trapezoid.h
        Circle.cpp
        Rectangle.cpp
        RightTriangle.cpp
        Trapezoid.cpp)
