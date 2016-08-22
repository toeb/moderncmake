cmake_minimum_required(VERSION 3.5)

project(sample)

# Create the main executable
# add the header files also so that the IDE knows they exist 
# in the source tree
add_executable(sample_exe
	include/sample/make_greeting.h
	src/localheader.h
	src/make_greeting.cpp 
	src/main.cpp
	)
# add the include dir as a public include directory 
# will be inherited by dependent targets
target_include_directories(sample_exe PUBLIC include)
# add the include directory src which will only be visible by
# sample_exe
target_include_directories(sample_exe PRIVATE src)



