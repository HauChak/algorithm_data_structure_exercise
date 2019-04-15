file(GLOB SRC_CODES Tree/*.h Tree/*.cpp src_code/*.h src_code/*.cpp Sort/*.h Sort/*.cpp binary_search/*.h binary_search/*.cpp)
#file(GLOB SRC_CODES *.h)
set(codes ${SRC_CODES})
group_src_by_dir(codes)

add_library(src_code_lib SHARED ${SRC_CODES})