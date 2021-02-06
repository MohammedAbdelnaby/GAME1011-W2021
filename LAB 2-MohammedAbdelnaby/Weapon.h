#pragma once
#include <iostream>
#include <string>
#include <array>
using namespace std;
class Weapon 
{
private:
	string WeaponName;
	string description;
	int damageValue;
	string abilities[3];
public:
	Weapon(string name = "", string pDescription = "", int damage = 0, array<string, 3> spAbilities = {})
	{
		WeaponName = name;
		description = pDescription;
		damageValue = damage;
		for (int i = 0; i < 3; i++)
		{
			abilities[i] = spAbilities[i];
		}
	}
	string getWeaponName();
	string getDescription();
	int getDamageValue();
	string getAbilities(int i);
	friend ostream &operator<<(ostream& out,  Weapon info)  
	{
		out << info.getWeaponName() <<":"<< endl;
		out << info.getDescription() << endl;
		out << "Damage: " << info.getDamageValue() << endl;
		out << "abilities:" << endl;
		for (int i = 0; i < 3; i++)
		{
			out <<"- " <<info.getAbilities(i) << endl;
		}
		return out;
	}
};