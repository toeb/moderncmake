project(fareweller)


add_library(fareweller_lib
 include/fareweller/make_farewell.h 
 src/make_farewell.cpp
 )


 target_include_directories(fareweller_lib PUBLIC include)