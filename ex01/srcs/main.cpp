#include "Zombie.hpp"



int main( void )
{
	// Zombie *zombie1;
	// Zombie *zombie2;
	// Zombie *zombie3;

	// randomChump( "Ct rapide !" );
	// randomChump( "truc" );

	// zombie1 = newZombie( "test" );
	// zombie2 = newZombie( "randome1" );
	// zombie3 = newZombie( "Voila !" );

	// zombie1->announce();
	// zombie2->announce();
	// zombie3->announce();
	
	// delete zombie1;
	// delete zombie2;
	// delete zombie3;

	Zombie* zombies;
	int number = 5;

	zombies = zombieHorde( number, "test" );

	for (int i = 0; i < number; i++)
		zombies[i].announce();
	
	delete[] zombies;

	return 0;
}
