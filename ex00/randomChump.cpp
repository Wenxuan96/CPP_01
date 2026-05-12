#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie random = Zombie();

	random.setName(name);
	random.announce();
}