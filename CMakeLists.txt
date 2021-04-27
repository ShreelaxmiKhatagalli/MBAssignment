cmake_minimum_required(VERSION 3.0)
project(mbtask)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)

#adding main.cpp as source file

set (source_dir "${PROJECT_SOURCE_DIR}/src/")
set (header_dir "${PROJECT_HEADER_DIR}/inc/")
file (GLOB source_files "${source_dir}/*.cpp")
file (GLOB header_files "${header_dir}/*.h")

#adding executable 

add_executable (mbtask ${source_files} ${header_files})