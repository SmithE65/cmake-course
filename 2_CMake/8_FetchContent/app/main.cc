#include <iostream>
#include "my_lib.h"
#include "config.hpp"
#include <nlohmann/json.hpp>
#include <spdlog/spdlog.h>
#include <fmt/format.h>

int main()
{
	auto welcome_message = fmt::format("Welcome to {} v{}!", project_name, project_version);
	spdlog::info(welcome_message);

	auto json_message = fmt::format("Using JSON Lib v{}.{}.{}",
		NLOHMANN_JSON_VERSION_MAJOR,
		NLOHMANN_JSON_VERSION_MINOR,
		NLOHMANN_JSON_VERSION_PATCH);
	spdlog::info(json_message);

	print_hello();
	return 0;
}

