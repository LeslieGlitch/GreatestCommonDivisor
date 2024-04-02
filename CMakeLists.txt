# @file CMakeLists.txt
# 
# CMake files for Greatest Common Divisor

cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

project(GreatestCommonDivisor)

# GreatestCommonDivisor
add_executable(GreatestCommonDivisor)
target_sources(GreatestCommonDivisor PRIVATE main.cpp GreatestCommonDivisor.cpp)
target_compile_features(GreatestCommonDivisor PRIVATE cxx_std_17)
target_compile_options(GreatestCommonDivisor PRIVATE
    $<$<CXX_COMPILER_ID:MSVC>:/Wall>
    $<$<CXX_COMPILER_ID:GNU,Clang,AppleClang>:-Wall>
)

# run
add_custom_target(run
        COMMENT "Run"
        COMMAND $<TARGET_FILE:GreatestCommonDivisor>
        DEPENDS GreatestCommonDivisor
        USES_TERMINAL
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)
