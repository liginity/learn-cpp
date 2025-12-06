set(CMAKE_CXX_STANDARD 11)

add_compile_options(
    -Werror=c++14-extensions
    -Werror=c++17-extensions
)

if(USE_LIBCXX)
    use_libcxx()
endif(USE_LIBCXX)

file(GLOB single_file_list test-*.cpp)

add_single_file_programs("${single_file_list}")

set_property(TARGET
    "test-cpp17-utils.out"
    PROPERTY
    CXX_STANDARD 17)
