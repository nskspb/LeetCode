cmake_minimum_required(VERSION 3.2)

project(largestGoodInteger)

# Main target
add_executable(
    Largest
    main.cpp
)

set_target_properties(Largest PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

if (MSVC)
    target_compile_options(
        Largest PRIVATE
        /W4
    )

else ()
    target_compile_options(
        Largest PRIVATE
        -Wall -Wextra -pedantic -Werror
    )

endif()



