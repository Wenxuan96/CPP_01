#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);
int main()
{
	int n = 5;
	Zombie* z;

	z = zombieHorde(n, "MANGO");
	for (int i = 0; i < n; i++)
		z->announce();
	delete []z;
}