cmake_minimum_required(VERSION 3.23)
project(prg1f_test)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(prg1f-io
        GIT_REPOSITORY https://github.com/HEIGVD-PRG1-F-2022/prg1f-io.git
        GIT_TAG main
        )
FetchContent_MakeAvailable(prg1f-io)

add_executable(prg1f-test main.cpp)
target_link_libraries(prg1f-test PRIVATE prg1f-io)
