#pragma once

#include <string>
#include <greeter/config.h>
namespace greeter
{	
	GREETER_API std::string make_greeting(const std::string  & name);
}