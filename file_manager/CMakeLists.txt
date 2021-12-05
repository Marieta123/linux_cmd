cmake_minimum_required(VERSION 3.10 )
project(myproject_file_manager)
add_executable(myproject_file_manager file_manager.c)
install(TARGETS myproject_file_manager  DESTINATION "$CMAKE_SOURCE_DIR/bin")
