project(fareweller)



add_library(fareweller_lib
	include/fareweller/config.h
 	include/fareweller/make_farewell.h 
 	src/make_farewell.cpp
 )


 target_include_directories(fareweller_lib PUBLIC include)

if(BUILD_SHARED_LIBS)
  target_compile_definitions(fareweller_lib PRIVATE FAREWELLER_EXPORTS) 
  target_compile_definitions(fareweller_lib INTERFACE FAREWELLER_IMPORTS) 
endif()


