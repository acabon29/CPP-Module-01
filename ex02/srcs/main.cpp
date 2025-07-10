// #include "Zombie.hpp"

# include <iostream>
# include <string>

#define BLUE		"\033[38;5;6m"
#define VIOLET		"\033[38;5;13m"
#define RESET		"\033[0m"


int main( void )
{
	// initialisation :
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str; 
	std::string &stringREF = str;

	// adresse :
	std::cout << BLUE;
	std::cout << "Memory address of string    :" << &str << std::endl;
	std::cout << "Memory address of stringPTR :" << stringPTR << std::endl;
	std::cout << "Memory address of stringREF :" << &stringREF << std::endl;
	std::cout << RESET << std::endl;

	// valeur :
	std::cout << VIOLET;
	std::cout << "Value of string    :" << str << std::endl;
	std::cout << "Value of stringPTR :" << *stringPTR << std::endl;
	std::cout << "Value of stringREF :" << stringREF << std::endl;
	std::cout << RESET;

	return 0;
}
