cmake_minimum_required(VERSION 3.2)

project(Weakest_Rows_in_Matrix)

# Main target
add_executable(
    Matrix
    main.cpp
)

set_target_properties(Matrix PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

if (MSVC)
    target_compile_options(
        Matrix PRIVATE
        /W4
    )

else ()
    target_compile_options(
        Matrix PRIVATE
        -Wall -Wextra -pedantic -Werror
    )

endif()



