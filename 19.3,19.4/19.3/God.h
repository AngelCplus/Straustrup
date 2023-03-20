#pragma once
#include <string>
#include "Link.h"
struct God
{
	std::string name;
	std::string mythology;
	std::string vehicle;
	std::string weapon;
	God(std::string n, std::string m, std::string v, std::string w)
		: name{ n }, mythology{ m }, vehicle{ v }, weapon{ w }
	{
	}
	bool operator> (const God& f)
	{
		return this->name > f.name;
	}
	bool operator< (const God& f)
	{
		return this->name < f.name;
	}
};

