
#include "ClapTrap.hpp"

int main()
{
	ClapTrap boss("boss");
	ClapTrap bob("bob");

	bob.attack("boss");
	boss.takeDemage(7);
	boss.beRepaired(3);
	boss.beRepaired(3);
	boss.beRepaired(3);
	boss.beRepaired(3);
	boss.beRepaired(3);
	boss.beRepaired(3);
	boss.beRepaired(3);
	boss.beRepaired(3);
	boss.beRepaired(3);
	boss.beRepaired(3);
	boss.beRepaired(3);
	boss.attack("bob");
	bob.beRepaired(4294967295);
	bob.takeDemage(100000000);
	bob.takeDemage(4294967295);
}