cmake_minimum_required(VERSION 3.18)
project(demo VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(TARGET_MAIN ${PROJECT_NAME}_main)   #  main target
set(TARGET_TEST ${PROJECT_NAME}_test)   #  test target

#  main target files
add_subdirectory(thirdparty/google-test)

add_executable(${TARGET_MAIN} main.cpp)

target_include_directories(${TARGET_MAIN} PRIVATE
    include
)

target_compile_options(${TARGET_MAIN} PRIVATE
    -Wall
    -Wextra
    -pedantic
)

#  target test files
add_executable(${TARGET_TEST}
    unit-tests/factorial-test.cpp
)

target_link_libraries(${TARGET_TEST} PRIVATE
    GTest::gtest_main
)

target_include_directories(${TARGET_TEST} PRIVATE
    include
)