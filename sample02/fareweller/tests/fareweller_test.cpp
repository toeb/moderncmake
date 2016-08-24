#include <fareweller/make_farewell.h>

int main(int argc, char** argv)
{
	if (fareweller::make_farewell() != "goodbye!")
	{
		return 1;
	}
	else
	{
		return 0;
	}

}