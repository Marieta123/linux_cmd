cmake_minimum_required(VERSION 3.10 )
project(myproject_cd)
add_executable(myproject_cd cd.c)
install(TARGETS myproject_cd  DESTINATION "$CMAKE_SOURCE_DIR/bin")
