#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {
	std::string name;
	public:
		Zombie (){};
		Zombie (std::string name)
		{
			this->name = name;
		};

		void set_first_name(const std::string &name)
		{
			this->name = name;
		}

		std::string get_name()
		{
			return (name);
		}

		void	announce(void)
		{
			std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
		}

		~Zombie()
		{
			std::cout << "Blahhhhhh..." << get_name() << " has died (for real this time)." << std::endl;
		}

		#endif
	};

	Zombie	*newZombie(std::string name);
	Zombie	*zombieHorde(int n, std::string name);