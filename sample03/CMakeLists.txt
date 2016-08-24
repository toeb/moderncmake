cmake_minimum_required(VERSION 3.5)


project(consumer)

list(APPEND CMAKE_PREFIX_PATH "external")

include(external/lib/cmake/fareweller_lib/fareweller_export.cmake)


add_executable(consumer_exe main.cpp)
target_link_libraries(consumer_exe sample::fareweller_lib)
