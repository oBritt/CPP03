

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap{

public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string const & name);
	FragTrap& operator=(FragTrap const &other);
	FragTrap(FragTrap const &other);
	void highFivesGuys(void);
	void attack(std::string const &target);
};



#endif