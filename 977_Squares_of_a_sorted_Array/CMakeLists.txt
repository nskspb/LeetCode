cmake_minimum_required(VERSION 3.2)

project(Squares_array)

# Main target
add_executable(
    squares_array
    main.cpp
)

set_target_properties(squares_array PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

if (MSVC)
    target_compile_options(
        squares_array PRIVATE
        /W4
    )

else ()
    target_compile_options(
        squares_array PRIVATE
        -Wall -Wextra -pedantic -Werror
    )

endif()



