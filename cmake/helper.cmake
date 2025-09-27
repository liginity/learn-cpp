# Compile a program that has only one source file.
function(add_single_file_program file_path)
    get_filename_component(base_name ${file_path} NAME_WE)
    get_filename_component(file_folder ${file_path} DIRECTORY)
    set(exec_name "${base_name}.out")
    add_executable(${exec_name} ${file_path})

    # NOTE could improve this, do not call it for each target.
    # set folder property for the target.
    # vscode would display targets in different folders.
    file(RELATIVE_PATH target_folder ${CMAKE_SOURCE_DIR} ${file_folder})
    set_target_properties(${exec_name} PROPERTIES FOLDER ${target_folder})
endfunction(add_single_file_program)

# Loop through the list and create an executable for each .cpp file.
function(add_single_file_programs single_file_list)
    foreach(file_path IN LISTS single_file_list)
        add_single_file_program(${file_path})
    endforeach()
endfunction(add_single_file_programs file_paths)

# Use libc++ as standard library.
# NOTE This has to be a macro.
macro(use_libcxx)
    add_compile_options(
        -stdlib=libc++
    )
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -stdlib=libc++ -lc++abi")    
endmacro(use_libcxx)
