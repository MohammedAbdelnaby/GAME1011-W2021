#pragma once
#include "Weapon.h"
#include <string>
#include <iostream>
using namespace std;

class Character
{
protected:
	string name;
	int health = 100;
	Weapon weapon;
public:
	Character(string pName, Weapon& pWeapon)
	{
		name = pName;
		weapon = pWeapon;
	}
	~Character() {}
	int getHealth()
	{
		return health;
	}
	virtual void diplayInfo() = 0;
	virtual void diplayName() = 0;


};
