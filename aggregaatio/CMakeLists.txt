cmake_minimum_required(VERSION 3.16)

project(aggregaatio LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(aggregaatio main.cpp
    Employee.cpp
    Employee.h
    company.h company.cpp)

include(GNUInstallDirs)
install(TARGETS aggregaatio
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
