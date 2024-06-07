
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap boss("boss");

	boss.attack("bob");
	//boss.guardGate();
	boss.beRepaired(123);
	boss.takeDemage(13);
	boss.highFivesGuys();
}