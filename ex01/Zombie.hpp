#pragma once
#include <iostream>
#include <string>
#include <iomanip>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		void setName(std::string newName);
		std::string getName();
		void announce();
};