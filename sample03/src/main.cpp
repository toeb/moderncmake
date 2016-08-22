#include <iostream>

#include <sample/make_greeting.h>
int main(int argc, char**argv)
{
	std::cout << sample::make_greeting("<your name>") << std::endl;
}