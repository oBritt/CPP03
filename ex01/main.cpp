
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap boss("boss");
	ScavTrap bob("bob");

	bob.attack("bob");
	bob.guardGate();
	bob.beRepaired(123);
	bob.takeDemage(13);
}