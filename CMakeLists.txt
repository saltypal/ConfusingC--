# this is to declare cmake version needed
cmake_minimum_required(VERSION 3.10)

# declaring project name and would give output binary
project(confusin)

# tells compiler to use C++17
set(CMAKE_CXX_STANDARD 17) 

# compile these files under the project
add_executable(confusin
    src/main.cpp
    src/commands.cpp
    src/dispatcher.cpp
    src/parser.cpp
    src/executor.cpp
)