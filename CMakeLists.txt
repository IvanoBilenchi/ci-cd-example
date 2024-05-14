cmake_minimum_required(VERSION 3.18)
project(mylib VERSION 1.0.0 LANGUAGES C)

if(MSVC)
    set(WARNING_OPTIONS /W4)
else()
    set(WARNING_OPTIONS -Wall -Wextra)
endif()

add_library(mylib STATIC src/mylib.c)
target_compile_options(mylib PRIVATE ${WARNING_OPTIONS})
set_target_properties(mylib PROPERTIES PREFIX "")
target_include_directories(mylib PUBLIC include)
