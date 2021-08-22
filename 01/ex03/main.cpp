#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(){
	{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.Attack();
	club.SetType("some other type of club");
	bob.Attack();
	}
	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.SetWeapon(club);
	jim.Attack();
	club.SetType("some other type of club");
	jim.Attack();
	}
}