#include "zombie.hpp"

int	main()
{
	int size = 11;
	std::string name = "Steve";
	Zombie *horde = zombieHorde(size, name);
	delete[] horde;
}
