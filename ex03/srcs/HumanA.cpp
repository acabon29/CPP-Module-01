
#include "../includes/HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ): _weapon(weapon)
{
	_name = name;
}

HumanA::~HumanA( void )
{}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

void HumanA::setWeapon( Weapon &newWeapon )
{
	_weapon = newWeapon;
}