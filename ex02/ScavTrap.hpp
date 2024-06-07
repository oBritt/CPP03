
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP


#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(std::string const & name);
	ScavTrap& operator=(ScavTrap const &other);
	ScavTrap(ScavTrap const &other);
	void guardGate();
	void attack(std::string const& target);
};



#endif