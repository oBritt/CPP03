#include "FragTrap.hpp"


FragTrap::FragTrap(): ClapTrap::ClapTrap()
{
	hit_points = 100;
	attack_damage = 30;
	energy_points = 100;
	std::cout << "FragTrap default constructor" << std::endl;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap default deconstructor" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string const &name): ClapTrap::ClapTrap(name)
{
	std::cout << "FragTrap " << " naming constructor called" << std::endl;
	hit_points = 100;
	this->attack_damage = 30;
	energy_points = 100;
	return ;
}

FragTrap& FragTrap::operator=(FragTrap const & other)
{
	std::cout << "FragTrap assigment operator" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->attack_damage = other.attack_damage;
		this->energy_points = other.energy_points;
		this->hit_points = other.hit_points;
	}
	return *this;
}

FragTrap::FragTrap(FragTrap const &other)
{
	std::cout << "FragTrap copy constructor" << std::endl;
	*this = other;
	return ;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->name << " Guys lets high five" << std::endl;
}

void FragTrap::attack(std::string const &target)
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
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_points--;
}