cmake_minimum_required(VERSION 3.12)

project(stcmalloc LANGUAGES C CXX)

set(CMAKE_CXX_EXTENSIONS OFF)  # we use std=c++11 not std=g++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if (Darwin)
	message(FATAL_ERROR "stcmalloc only supports Windows and Linux. Sorry ._." )
endif()

include(CheckIncludeFiles)

# TODO: Double check compiler flags
if (MSVC)
	check_include_files(windows.h HAVE_WINDOWS_HEADERS)
	add_compile_options(/W3 /WX)
else()
	check_include_files(pthread.h HAVE_PTHREAD)
	# TODO: check for malloc
	set(CMAKE_POSITION_INDEPENDENT_CODE TRUE)  # Windows doesn't do this
	add_compile_options(-W -Wall -Werror)
endif()

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/include/stcmalloc/config.h.in ${CMAKE_CURRENT_BINARY_DIR}/include/stcmalloc/config.h)

# Tests and benchmarks are all stored in tests directory
enable_testing()
include(GoogleTest)
add_subdirectory(tests)

# Library code is stored between src and include
add_subdirectory(src)