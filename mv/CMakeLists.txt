cmake_minimum_required(VERSION 3.10)
project(myproject_mv)
add_executable(myproject_mv mv.c)
install(TARGETS myproject_mv   DESTINATION "/home/marieta/linux_cmd/bin")
