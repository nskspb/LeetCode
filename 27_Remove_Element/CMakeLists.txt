cmake_minimum_required(VERSION 3.2)

project(Remove_Element)

# Main target
add_executable(
    remove_element
    main.cpp
)

set_target_properties(remove_element PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

if (MSVC)
    target_compile_options(
        remove_element PRIVATE
        /W4
    )

else ()
    target_compile_options(
        remove_element PRIVATE
        -Wall -Wextra -pedantic -Werror
    )

endif()



