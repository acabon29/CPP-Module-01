
#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) 
{}

Zombie::~Zombie()
{
	std::cout << _name << " is killed !" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName( void )
{
	return ( _name );
}

