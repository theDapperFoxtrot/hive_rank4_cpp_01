#include "zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
    if (n <= 0 || name.empty())
        return nullptr;
    Zombie *horde = new Zombie[n];
    int i = 0;
    while (i < n)
    {
        horde[i].set_first_name(name);
        horde[i].announce();
        std::cout << "I'm zombie #" << i << std::endl;
        i++;
    }
    return (horde);
}