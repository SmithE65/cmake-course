#include <iostream>
#include "my_lib.h"
#include "config.hpp"

int main()
{
	std::cout << project_name
		<< " is version "
		<< project_version
		<< std::endl;
	print_hello();
	return 0;
}

