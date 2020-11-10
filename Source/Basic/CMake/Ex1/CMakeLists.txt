
cmake_minimum_required(VERSION 3.16.3)
project (helloworld)
# include_directories(./include)
include_directories(include)
# set(SOURCES ./src/main.cpp ./src/greetings_en.cpp ./src/greetings_ja.cpp ./src/greetings_vi.cpp)
file(GLOB SOURCES "./src/*.cpp")
add_executable("hellworld" ${SOURCES})
