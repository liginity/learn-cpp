# NOTE when using the range and view features, clang-19 or newer is required.
set(CMAKE_CXX_STANDARD 20)

if(USE_LIBCXX)
    use_libcxx()
endif(USE_LIBCXX)


file(GLOB single_file_list *.cpp)

add_single_file_programs("${single_file_list}")
