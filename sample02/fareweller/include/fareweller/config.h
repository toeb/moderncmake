#pragma once

#ifdef _MSC_VER
#  ifdef FAREWELLER_EXPORTS
#   define FAREWELLER_API __declspec(dllexport)
#  else
#    ifdef FAREWELLER_IMPORTS
#     define FAREWELLER_API __declspec(dllimport)
#    else
#	  define FAREWELLER_API
#    endif
#  endif
#else
#  define FAREWELLER_API
#endif
