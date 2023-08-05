cmake_minimum_required(VERSION 3.2)

project(Remove_Duplicates)

# Main target
add_executable(
    remove_duplicates
    main.cpp
)

set_target_properties(remove_duplicates PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

if (MSVC)
    target_compile_options(
        remove_duplicates PRIVATE
        /W4
    )

else ()
    target_compile_options(
        remove_duplicates PRIVATE
        -Wall -Wextra -pedantic -Werror
    )

endif()



