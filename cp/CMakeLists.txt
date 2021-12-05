cmake_minimum_required(VERSION 3.10 )
project(myproject_cp)
add_executable(myproject_cp cp.c)
install(TARGETS myproject_cp   DESTINATION "$CMAKE_SOURCE_DIR/bin")
