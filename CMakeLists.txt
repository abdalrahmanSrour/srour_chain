cmake_minimum_required(VERSION 3.12)
project(Srour_Chain VERSION 0.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(LIBRARY_NAME scl)   # [optional] generated automatically (in lowercase)
set(LIBRARY_FOLDER scl) # [optional] generated automatically (in lowercase)

add_subdirectory(SrourChainLib)
add_subdirectory(examples)
