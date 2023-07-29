cmake_minimum_required(VERSION 3.2)

project(Two_Sum)

# Main target
add_executable(
    two_sum
    main.cpp
)

set_target_properties(two_sum PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

if (MSVC)
    target_compile_options(
        two_sum PRIVATE
        /W4
    )

else ()
    target_compile_options(
        two_sum PRIVATE
        -Wall -Wextra -pedantic -Werror
    )

endif()
