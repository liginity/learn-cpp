set(CMAKE_CXX_STANDARD 23)

if(USE_LIBCXX)
    use_libcxx()
endif(USE_LIBCXX)


file(GLOB single_file_list *.cpp)

add_single_file_programs("${single_file_list}")
