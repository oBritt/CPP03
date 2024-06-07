
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap boss("boss");

	boss.attack("bob");
	boss.guardGate();
	boss.beRepaired(123);
	boss.takeDemage(13);
	boss.highFivesGuys();
	boss.guardGate();
	boss.whoAmI();
	boss.attack("bob");
}