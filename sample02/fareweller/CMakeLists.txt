cmake_minimum_required(VERSION 3.5)
project(fareweller)

## Building
# create fareweller library
add_library(fareweller_lib
	include/fareweller/config.h
 	include/fareweller/make_farewell.h 
 	src/make_farewell.cpp
 )

# setup include directories 
target_include_directories(fareweller_lib PUBLIC 
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
 	$<INSTALL_INTERFACE:include>
)
# setup export preprocessor definitions
if(BUILD_SHARED_LIBS)
  target_compile_definitions(fareweller_lib PRIVATE FAREWELLER_EXPORTS) 
  target_compile_definitions(fareweller_lib INTERFACE FAREWELLER_IMPORTS) 
endif()

## Testing
add_executable(fareweller_test 	tests/fareweller_test.cpp)
target_link_libraries(fareweller_test fareweller_lib)
add_test(fareweller_test fareweller_test)


## Installing
# add installation for target farweller



install(TARGETS fareweller_lib EXPORT fareweller_export
		RUNTIME DESTINATION bin 
		ARCHIVE DESTINATION lib
		LIBRARY DESTINATION lib
		INCLUDES DESTINATION include
)
# copy public include files
install(FILES 
	include/fareweller/config.h 
	include/fareweller/make_farewell.h
	DESTINATION include/fareweller)


# create export file which can be imported by other cmake projects
install(EXPORT fareweller_export
	NAMESPACE sample::
	DESTINATION lib/cmake/fareweller_lib
)

