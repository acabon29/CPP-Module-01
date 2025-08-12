
#include <iostream>
#include <string>
#include <fstream>
#include "Harl.hpp"


// "DEBUG";
// "INFO";
// "WARNING";
// "ERROR";

int main()
{
	Harl myHarl;

	std::cout << "DEBUG" << std::endl;
	myHarl.complain("DEBUG");
	std::cout << std::endl << "INFO" << std::endl;
	myHarl.complain("INFO");
	std::cout << std::endl  << "WARNING" << std::endl;
	myHarl.complain("WARNING");
	std::cout << std::endl  << "ERROR" << std::endl;
	myHarl.complain("ERROR");
	std::cout << std::endl  << "Error" << std::endl;
	myHarl.complain("Error");
	std::cout << std::endl  << "TRUC" << std::endl;
	myHarl.complain("TRUC");

	return ( 0 );
}
