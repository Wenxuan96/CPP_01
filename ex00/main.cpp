#include "Zombie.hpp"

Zombie* newZombie(std::string newName);
void randomChump(std::string name);

int main()
{
	std::string input;
	Zombie* z;

	randomChump("TestZombie");

	while (true)
	{
		std::cout << "Please enter only one name to add a new zombie, or type 'EXIT' to quit the program." << std::endl;
		std::getline(std::cin, input);
		if (input == "EXIT")
			return 0;
		z = newZombie(input);
		std::cout << z->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
		std::cout << z->getName() << " is destoryed." << std::endl;
		delete z;
	}
}