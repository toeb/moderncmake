#include <greeter/make_greeting.h>

#include <sstream>

#include "localheader.h"


std::string greeter::make_greeting(const std::string & name)
{

	std::stringstream stream;
	stream << SAMPLE_GREETING_STRING << " " << name << "!";
	return stream.str();
}