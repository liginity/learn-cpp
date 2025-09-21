set(CMAKE_CXX_STANDARD 11)

add_compile_options(
    -Werror=c++14-extensions
    -Werror=c++17-extensions
)

file(GLOB single_file_list *.cpp)

add_single_file_programs("${single_file_list}")
