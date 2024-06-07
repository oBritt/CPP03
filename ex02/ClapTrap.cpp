
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Default"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap default constructor" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap default deconstructor" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const &name):name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap naming constructor" << std::endl;
	return ;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & other)
{
	std::cout << "ClapTrap assigment operator" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->attack_damage = other.attack_damage;
		this->energy_points = other.energy_points;
		this->hit_points = other.hit_points;
	}
	return *this;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "ClapTrap copy constructor" << std::endl;
	*this = other;
	return ;
}

void ClapTrap::attack(std::string const &target)
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
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_points--;
}

void ClapTrap::beRepaired(unsigned int amount)
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
	if (this->hit_points + amount < amount)
		this->hit_points = 4294967295;
	else
		this->hit_points += amount;
	std::cout << this->name << " was repaired by " << amount << " of HP. Current HP:" << this->hit_points << std::endl;
	this->energy_points--;
}

void ClapTrap::takeDemage(unsigned int amount)
{
	if (amount > this->hit_points)
		this->hit_points = 0;
	else
		this->hit_points -= amount;
	std::cout  << this->name << " recived " << amount << " of points of damage. Current HP:" << this->hit_points << std::endl;
}