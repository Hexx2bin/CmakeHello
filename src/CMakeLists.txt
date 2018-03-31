

cmake_minimum_required(VERSION 2.8.11)

# Project name
project(mylib)

set(CPP_SOURCE Square.cpp)
set(HEADERS Square.h)

add_library(mylib  ${CPP_SOURCE})

target_include_directories(
    mylib PUBLIC
    # Headers used from source/build location:
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
    # Headers used from the installed location:
    "$<INSTALL_INTERFACE:include>"
)

install(TARGETS mylib DESTINATION lib)
install(FILES ${HEADERS} DESTINATION include/mylib)
