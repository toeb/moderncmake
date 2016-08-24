#pragma once

#pragma once

#ifdef _MSC_VER
#  ifdef GREETER_EXPORTS
#   define GREETER_API __declspec(dllexport)
#  else
#    ifdef GREETER_IMPORTS
#     define GREETER_API __declspec(dllimport)
#    else
#	  define GREETER_API
#    endif
#  endif
#endif