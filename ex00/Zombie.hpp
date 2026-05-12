#pragma once

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie();
		std::string getName();
		void setName(std::string newName);
		void announce(void);
};
