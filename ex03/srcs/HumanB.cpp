
#include "../includes/HumanB.hpp"

HumanB::HumanB( std::string name )
{
	_name = name;
}

HumanB::~HumanB( void )
{}

void HumanB::attack()
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon( Weapon &newWeapon )
{
	_weapon = &newWeapon;
}