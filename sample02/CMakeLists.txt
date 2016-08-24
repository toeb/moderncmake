cmake_minimum_required(VERSION 3.5)

project(conversation)

# enables cmake testing
enable_testing()

add_subdirectory(fareweller)
add_subdirectory(greeter)

add_executable(conversation_exe conversation/main.cpp)
target_link_libraries(conversation_exe fareweller_lib greeter_lib)


