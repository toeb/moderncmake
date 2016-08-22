#pragma once

#ifdef _MSC_VER
#  ifdef GREETER_EXPORTS
#   define GREETER_API __declspec(dllexport)
#  else
#   define GREETER_API __declspec(dllimport)
#  endif
#endif