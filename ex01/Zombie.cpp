#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "";
}

void Zombie::setName(std::string newName)
{
	name = newName;
}

std::string Zombie::getName()
{
	return name;
}
void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}