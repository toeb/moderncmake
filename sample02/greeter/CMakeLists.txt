cmake_minimum_required(VERSION 3.5)


project(greeter)

# Create the main executable
# add the header files also so that the IDE knows they exist 
# in the source tree
add_library(greeter_lib
	include/greeter/make_greeting.h
	include/greeter/config.h
	src/localheader.h
	src/make_greeting.cpp 
	)
# add the include dir as a public include directory 
# will be inherited by dependent targets
target_include_directories(greeter_lib PUBLIC include)
# add the include directory src which will only be visible by
# sample_exe
target_include_directories(greeter_lib PRIVATE src)

 if(BUILD_SHARED_LIBS)
  target_compile_definitions(greeter_lib PRIVATE GREETER_EXPORTS) 
  target_compile_definitions(greeter_lib INTERFACE GREETER_IMPORTS) 
endif()


## create test for greeter
add_executable(greeter_test 
	tests/greeter_test.cpp
)

target_link_libraries(greeter_test	greeter_lib)

add_test(greeter_test greeter_test)
