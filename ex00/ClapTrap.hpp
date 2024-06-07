

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{

private:
	std::string name;
	unsigned int hit_points;
	unsigned int energy_points;
	unsigned int attack_damage;

public:
	ClapTrap();
	~ClapTrap();
	ClapTrap& operator=(ClapTrap const & other);
	ClapTrap(ClapTrap const & other);

	ClapTrap(std::string const &name);
	void attack(const std::string &target);
	void takeDemage(unsigned int amount);
	void beRepaired(unsigned int amount);

};


#endif