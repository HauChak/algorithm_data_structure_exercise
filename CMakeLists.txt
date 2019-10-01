cmake_minimum_required (VERSION 3.4)

SET (CMAKE_C_COMPILER             "/usr/bin/clang")
SET (CMAKE_C_FLAGS                "-Wall -std=c11")
SET (CMAKE_C_FLAGS_DEBUG          "-g")
SET (CMAKE_C_FLAGS_MINSIZEREL     "-Os -DNDEBUG")
SET (CMAKE_C_FLAGS_RELEASE        "-O4 -DNDEBUG")
SET (CMAKE_C_FLAGS_RELWITHDEBINFO "-O2 -g")

SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
SET (CMAKE_CXX_FLAGS                "-Wall -std=c++11")
SET (CMAKE_CXX_FLAGS_DEBUG          "-g")
SET (CMAKE_CXX_FLAGS_MINSIZEREL     "-Os -DNDEBUG")
SET (CMAKE_CXX_FLAGS_RELEASE        "-O4 -DNDEBUG")
SET (CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -g")

SET (CMAKE_AR      "/usr/bin/llvm-ar")
SET (CMAKE_LINKER  "/usr/bin/llvm-ld")
SET (CMAKE_NM      "/usr/bin/llvm-nm")
SET (CMAKE_OBJDUMP "/usr/bin/llvm-objdump")
SET (CMAKE_RANLIB  "/usr/bin/llvm-ranlib")

macro(group_src_by_dir src_files)
    foreach(file_path ${${src_files}})
        string(REGEX REPLACE ${CMAKE_CURRENT_SOURCE_DIR}/\(.*\) \\1 relative_path ${file_path})
        string(REGEX MATCH ".+\\.c.*" is_match ${relative_path})
        if(is_match)
            string(REGEX REPLACE "(.+)\\.c.*" \\1 cpp_relative_dir ${relative_path})
            if(NOT cpp_relative_dir STREQUAL "main")
                list(APPEND c_groups ${cpp_relative_dir})
            endif()
        endif(is_match)
    endforeach(file_path)
    
    foreach(file_path ${${src_files}})
        message(${file_path})
        string(REGEX REPLACE ${CMAKE_CURRENT_SOURCE_DIR}/\(.*\) \\1 relative_path ${file_path})
        string(REGEX REPLACE "(.+)\\..*" \\1 relative_group ${relative_path})
        list(FIND c_groups ${relative_group} index)
        if(NOT index LESS 0)
            message(${relative_group})
            string(REPLACE "/" "\\" relative_group ${relative_group})
            source_group(${relative_group} FILES ${file_path})
        else()
            string(REGEX MATCH "(.+)/.*" has_group ${relative_path})
            if(has_group)
                string(REGEX REPLACE "(.+)/.*" \\1 group ${relative_path})
                string(REPLACE "/" "\\" group ${group})
                message(${group})
                source_group(${group} FILES ${file_path})
            else()
                message("")
                source_group("" FILES ${file_path})
            endif()
        endif()
    endforeach(file_path)
endmacro(group_src_by_dir)




project(leetcode_exercise)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(PARENT_SRC_DIR ../)

file(MAKE_DIRECTORY ${PARENT_SRC_DIR}/lib)

file(MAKE_DIRECTORY ${PARENT_SRC_DIR}/lib/Debug)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${PARENT_SRC_DIR}/lib/Debug)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG ${PARENT_SRC_DIR}/lib/Debug)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PARENT_SRC_DIR}/lib/Debug)

add_subdirectory(algorithm_data_structure)

add_executable(leetcode main.cpp)
target_link_libraries(leetcode ${src_code_lib})

