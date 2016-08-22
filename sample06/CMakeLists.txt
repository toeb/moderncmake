cmake_minimum_required(VERSION 3.5)

project(conversation)



set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# enables cmake testing
enable_testing()

add_subdirectory(fareweller)
add_subdirectory(greeter)

add_executable(conversation_exe conversation/main.cpp)
target_link_libraries(conversation_exe fareweller_lib greeter_lib)


