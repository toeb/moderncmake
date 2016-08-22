#pragma once

#ifdef _MSC_VER
#  ifdef FAREWELLER_EXPORTS
#   define FAREWELLER_API __declspec(dllexport)
#  else
#   define FAREWELLER_API __declspec(dllimport)
#  endif
#endif