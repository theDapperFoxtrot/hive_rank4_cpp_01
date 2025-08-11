#include "zombie.hpp"

int	main()
{
	Zombie steve;

	steve.set_first_name("Steve");
	steve.announce();

	Zombie *john = newZombie("John");
	john->announce();

	randomChump("Jim");

	delete john;
}
