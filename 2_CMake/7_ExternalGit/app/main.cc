#include <iostream>
#include "my_lib.h"
#include "config.hpp"
#include <nlohmann/json.hpp>

int main()
{
	std::cout << project_name
		<< " is version "
		<< project_version
		<< std::endl;

	std::cout << "JSON Lib Versoin: "
		<< NLOHMANN_JSON_VERSION_MAJOR << "."
		<< NLOHMANN_JSON_VERSION_MINOR << "."
		<< NLOHMANN_JSON_VERSION_PATCH << "\n";

	print_hello();
	return 0;
}

