// #include "Zombie.hpp"

# include <iostream>
# include <string>


int main( void )
{
	// initialisation :
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str; 
	std::string &stringREF = str;

	// adresse :
	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	// valeur :
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	

	return 0;
}
