
#include <iostream>
#include <string>
#include <fstream>
#include "Harl.hpp"

// "DEBUG";
// "INFO";
// "WARNING";
// "ERROR";

int findIndex(std::string harlLevels[4], std::string str) {
	for (size_t i = 0; i < 4; i++)
		if (str.compare(harlLevels[i]) == 0)
			return ( i );
	return ( -1 );
}

int main(int argc, char const *argv[])
{
	Harl myHarl;
	std::string harlLevels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	if (argc != 2) {
		std::cout << "Error : need one argument \"DEBUG\", \"INFO\", \"WARNING\" or \"ERROR\"" << std::endl;
		return ( 0 );
	}

	switch ( findIndex(harlLevels, argv[1]) )
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			myHarl.complain("DEBUG");
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			myHarl.complain("INFO");
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			myHarl.complain("WARNING");
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			myHarl.complain("ERROR");
			break;
		default:
			std::cout << "Error : bad argument" << std::endl;
	}

	return ( 0 );
}
