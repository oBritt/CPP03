
#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), name(ClapTrap::name + "_clap_name")
{
	std::cout << "DiamondTrap default constructor" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap default deconstructor" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name),  name(name) {
	std::cout << "DiamondTrap "  << " naming constructor called" << std::endl;
	this->attack_damage = FragTrap::attack_damage;
	this->energy_points = ScavTrap::energy_points;
	this->hit_points = FragTrap::hit_points;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &other) {
	if (this != &other) {
		this->attack_damage = other.attack_damage;
		this->energy_points = other.energy_points;
		this->hit_points = other.hit_points;
	}
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	return *this;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other)
{
	std::cout << "DiamondTrap copy constructor" << std::endl;
	*this = other;
	return ;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << name << " is DiamondTrap name.  " << ClapTrap::name << " is ClapTrap name" << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}