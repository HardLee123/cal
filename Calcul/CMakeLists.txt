cmake_minimum_required(VERSION 3.3)
project(Calculator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES_CALC AST.h AST.cpp Parser.h Parser.cpp cal.cpp )
set(SOURCE_FILES_POSTFIX AST.h AST.cpp Parser.h Parser.cpp cal-postfix.cpp )
set(SOURCE_FILES_SEXPR AST.h AST.cpp Parser.h Parser.cpp cal-sexpr.cpp)

add_executable(Cal ${SOURCE_FILES_CALC})
add_executable(Calpost ${SOURCE_FILES_POSTFIX})
add_executable(Calsexpr ${SOURCE_FILES_SEXPR})