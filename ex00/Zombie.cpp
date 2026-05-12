#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "";
}

std::string Zombie::getName()
{
	return name;
}

void Zombie::setName(std::string newName)
{
	name = newName;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
