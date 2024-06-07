

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
private:
    std::string name;

public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(std::string const &name);
	DiamondTrap& operator=(DiamondTrap const &other);
	DiamondTrap(DiamondTrap const &other);
	void attack(std::string const &target);
	void whoAmI(void);
};


#endif