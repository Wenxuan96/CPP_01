#include "Zombie.hpp"

Zombie* newZombie(std::string newName)
{
	Zombie* newZ = new Zombie();

	newZ->setName(newName);

	return newZ;
}