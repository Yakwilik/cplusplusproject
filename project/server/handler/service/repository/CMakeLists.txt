cmake_minimum_required(VERSION 3.14.0)
project(project)

OPTION(WITH_DEBUGING "RUN_WITH_DEBUGGING" OFF)
OPTION(WITH_TESTING "RUN_WITH_TESTING" OFF)
OPTION(WITH_MEMCHECK "RUN_WITH_MEMCHECK" OFF)
OPTION(WITH_SANITIZE "RUN_WITH_SANITIZE" OFF)

set(MY_CXX_FLAGS "-Wall -Wextra -Wpedantic -fprofile -fprofile-arcs -Wredundant-decls -Wsign-conversion -Wcast-align -Wcast-qual -Wconversion -Wfloat-equal")
set(MY_SANITIZERS_FLAGS "-fsanitize=address,undefined -fno-sanitize-recover=all -fsanitize-undefined-trap-on-error")
set(MY_DEBUG_FLAGS "-g -O0")
set(MY_TEST_FLAGS "-fprofile-arcs -ftest-coverage -fPIC -O0")
set(MY_TEST_LINKER_FLAGS "-coverage")

set(CMAKE_CXX_FLAGS ${MY_CXX_FLAGS})

set(CMAKE_CXX_STANDARD 20)

if(WITH_DEBUGING)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${MY_DEBUG_FLAGS}")
    message("flags have been set for debug: ${CMAKE_CXX_FLAGS}")
endif()

if(WITH_TESTING)
    set(CMAKE_EXE_LINKER_FLAGS ${CMAKE_EXE_LINKER_FLAGS} ${MY_TEST_LINKER_FLAGS})
endif()

add_subdirectory(lib)

if(WITH_TESTING)
    if(WITH_SANITIZE)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${MY_SANITIZERS_FLAGS}")
        message("flags have been set for sanitize: ${CMAKE_CXX_FLAGS}")
        message("run with sanitize")
    elseif(WITH_MEMCHECK)

        message("run with memcheck")
    endif()

    enable_testing()
    add_subdirectory(tests)
endif()