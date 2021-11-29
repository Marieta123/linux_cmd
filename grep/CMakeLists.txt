cmake_minimum_required(VERSION 3.10 )
project(myproject_grep)
add_executable(myproject_grep grep.c)
install(TARGETS myproject_grep   DESTINATION "$CMAKE_SOURCE_DIR/bin")
