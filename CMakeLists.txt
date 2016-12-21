cmake_minimum_required (VERSION 2.6)
project (EndOfDays)

#conan setup
include(conanbuildinfo.cmake)
CONAN_BASIC_SETUP()

#tests
enable_testing()
add_subdirectory(test)


# The version number.
SET(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/Bin/${CMAKE_BUILD_TYPE} CACHE PATH "Library output path")
SET(EXECUTABLE
_OUTPUT_PATH ${CMAKE_BINARY_DIR}/Bin/${CMAKE_BUILD_TYPE} CACHE PATH "Executable output path")
set (EndOfDays_VERSION_MAJOR 1)
set (EndOfDays_VERSION_MINOR 0)
set (EndOfDays_VERSION_PATCH 0)

#libs 
add_subdirectory(hoedown) 
include_directories ("${PROJECT_SOURCE_DIR}/hoedown/src")


FILE(GLOB SOURCES ${PROJECT_SOURCE_DIR}/src/*.cpp)
FILE(GLOB INCLUDES ${PROJECT_SOURCE_DIR}/src/*.h)

add_executable(EndOfDays ${SOURCES} ${INCLUDES})

target_link_libraries(EndOfDays hoedown)


install (TARGETS EndOfDays
		 RUNTIME DESTINATION ${PROJECT_BINARY_DIR}/bin)
