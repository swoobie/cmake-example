cmake_minimum_required (VERSION 3.8)

project(MyStaticLib VERSION 1.0.0 LANGUAGES CXX)

add_library(MyStaticLib STATIC MyStaticLib.h MyStaticLib.cpp)
add_library(MyStaticLib::MyStaticLib ALIAS MyStaticLib)
