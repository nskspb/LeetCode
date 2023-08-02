cmake_minimum_required(VERSION 3.2)

project(Valid_Parentheses)

# Main target
add_executable(
    Valid_Parentheses
    main.cpp
)

set_target_properties(Valid_Parentheses PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

if (MSVC)
    target_compile_options(
        Valid_Parentheses PRIVATE
        /W4
    )

else ()
    target_compile_options(
        Valid_Parentheses PRIVATE
        -Wall -Wextra -pedantic -Werror
    )

endif()



