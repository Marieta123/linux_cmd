cmake_minimum_required(VERSION 3.10)
project(myproject_rm)
add_executable(myproject_rm rm.c)
install(TARGETS myproject_rm     DESTINATION "/home/marieta/linux_cmd/bin")
