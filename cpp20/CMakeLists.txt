# NOTE when using the range and view features, clang-19 or newer is required.
set(CMAKE_CXX_STANDARD 20)

# Use libc++ instead of the default libstdc++ as the standard library.
add_compile_options(
    -stdlib=libc++
)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -stdlib=libc++ -lc++abi")

file(GLOB single_file_list *.cpp)

add_single_file_programs("${single_file_list}")
