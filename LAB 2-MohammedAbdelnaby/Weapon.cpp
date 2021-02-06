#include "Weapon.h"


string Weapon::getWeaponName()
{
	return WeaponName;
}

string Weapon::getDescription()
{
	return description;
}

int Weapon::getDamageValue()
{
	return damageValue;
}

string Weapon::getAbilities(int i)
{
	return abilities[i];
}
