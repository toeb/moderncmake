#include <hello_world.h>

#include <sstream>

std::string sample::make_greeting(const std::string & name)
{
	std::stringstream stream;
	stream << "hello "<<name;
	return stream.str();
}