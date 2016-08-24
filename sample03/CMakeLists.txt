cmake_minimum_required(VERSION 3.5)

## define project name
project(consumer)


## include external library  with generated export file
#include(external/lib/cmake/fareweller_lib/fareweller_export.cmake)


## manually include external library
#add_library(sample::fareweller_lib STATIC IMPORTED )
#set_property(TARGET sample::fareweller_lib PROPERTY IMPORTED_LOCATION ${CMAKE_CURRENT_LIST_DIR}/external/lib/fareweller_lib.lib)
#set_property(TARGET sample::fareweller_lib PROPERTY INTERFACE_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_LIST_DIR}/external/include)



## add external imported library
add_executable(consumer_exe main.cpp)
target_link_libraries(consumer_exe sample::fareweller_lib)
