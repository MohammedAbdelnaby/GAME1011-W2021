#pragma once
#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class Elf : public Character
{
private:
	string elfName = "Blood elf ";
	string specialAttack = "25% stronger at blood magic";
	int modifiedHealth = health -20;
public:
	Elf(string name, Weapon& pweapon) :Character(name, pweapon)
	{
	}
	~Elf() {}
	void diplayInfo()
	{
		cout << elfName + name <<":" << endl;
		cout << "Health: " << modifiedHealth << endl;
		cout << specialAttack << endl;
		cout << "Starting weapon" << endl;
		cout << weapon;
	}
	void diplayName()
	{
		cout << elfName + name << endl;
	}
};

class Human : public Character
{
private:
	string HumanName = "King ";
	string specialAttack = "15% stronger at 2-handed weapons";
	int modifiedHealth = health + 50;
public:
	Human(string name, Weapon& pweapon) :Character(name, pweapon)
	{
	}
	~Human() {}
	void diplayInfo()
	{
		cout << HumanName + name << ":" << endl;
		cout << "Health: " << modifiedHealth << endl;
		cout << specialAttack << endl;
		cout << "Starting weapon" << endl;
		cout << weapon;
	}
	void diplayName()
	{
		cout << HumanName + name << endl;
	}
};

class Dwarf : public Character
{
private:
	string DwarfName = "\"tiny\" ";
	string specialAttack = "50% faster at gathering resources";
	int modifiedHealth = health - 50;
public:
	Dwarf(string name, Weapon& pweapon) :Character(name, pweapon)
	{
	}
	~Dwarf() {}
	void diplayInfo()
	{
		cout << DwarfName + name << ":" << endl;
		cout << "Health: " << modifiedHealth << endl;
		cout << specialAttack << endl;
		cout << "Starting weapon" << endl;
		cout << weapon;
	}
	void diplayName()
	{
		cout << DwarfName + name << endl;
	}
};