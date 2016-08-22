#include <iostream>

#include <fareweller/make_farewell.h>
#include <greeter/make_greeting.h>

int main(int argc, char ** argv)
{
	std::cout << greeter::make_greeting("<your name>") << std::endl;
	std::cout << fareweller::make_farewell() << std::endl;
}