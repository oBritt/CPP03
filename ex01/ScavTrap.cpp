

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor" << std::endl;
	this->hit_points = 100;
	this->attack_damage = 20;
	this->energy_points = 50;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default deconstructor" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string const &name): ClapTrap::ClapTrap(name)
{
	std::cout << "ScavTrap naming constructor" << std::endl;
	this->hit_points = 100;
	this->attack_damage = 20;
	this->energy_points = 50;
	return ;
}

ScavTrap& ScavTrap::operator=(ScavTrap const & other)
{
	std::cout << "ScavTrap assigment operator" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->attack_damage = other.attack_damage;
		this->energy_points = other.energy_points;
		this->hit_points = other.hit_points;
	}
	return *this;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
	std::cout << "ScavTrap copy constructor" << std::endl;
	*this = other;
	return ;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << "is in the Gate keeper form" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	if (this->hit_points == 0)
	{
		std::cout << this->name << " has 0 HP" << std::endl;
		return ;
	}
	if (this->energy_points == 0)
	{
		std::cout << this->name <<" has 0 energy points" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_points--;
}