# CMakeList.txt : CMake project for CMakeExample, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (CMakeExample "CMakeExample.cpp" "CMakeExample.h")

# TODO: Add tests and install targets if needed.
target_link_libraries(CMakeExample PRIVATE nlohmann_json::nlohmann_json)
target_link_libraries(CMakeExample PRIVATE MyStaticLib::MyStaticLib)