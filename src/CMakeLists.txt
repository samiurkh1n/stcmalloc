# TODO: replace GLOB because it doesn't work well with file system changes
file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${stcmalloc_SOURCE_DIR}/include/stcmalloc/*.h")

add_library(stcmalloc stcmalloc.c ${HEADER_LIST})

target_include_directories(stcmalloc PUBLIC ../include)
target_include_directories(stcmalloc PRIVATE .)

#target_link_libraries(
