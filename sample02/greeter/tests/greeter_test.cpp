#include <greeter/make_greeting.h>

int main(int argc, char** argv)
{

	if (greeter::make_greeting("Tobi") != "hello Tobi!")
	{
		return 1;
	}
	else 
	{
		return 0;
	}

}