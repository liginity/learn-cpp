set(CMAKE_CXX_STANDARD 17)

file(GLOB single_file_list *.cpp)

add_single_file_programs("${single_file_list}")
