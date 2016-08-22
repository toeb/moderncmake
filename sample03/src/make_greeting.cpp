#include <sample/make_greeting.h>

#include <sstream>

#include "localheader.h"


std::string sample::make_greeting(const std::string & name)
{

	std::stringstream stream;
	stream << SAMPLE_GREETING_STRING << " " << name << "!";
	return stream.str();
}