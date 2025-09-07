add_subdirectory(slot)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_library(general_lib grid.cpp)
target_link_libraries(general_lib PRIVATE slot_lib)
