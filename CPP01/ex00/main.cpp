#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("Muhsin");
	zombie->announce();
	randomChump("Mehmet");
	delete zombie;
}