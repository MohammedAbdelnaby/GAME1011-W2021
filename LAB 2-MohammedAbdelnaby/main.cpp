#include <iostream>
using namespace std;
#include "Character.h"
#include "Weapon.h"
#include "Races.h"
#include <string>



int main()
{
	string name;
	int const MAX_AMOUNT_CHARACTERS = 5;
	Weapon wand("Wand", "a stick that can magic", 40, { "fireball","iceball","thunder blot" });
	Weapon shovel("Shovel", "good for digging not at combat", 10, { "dig","dig","dig" });
	Weapon sword("Sword", "this sword is made from blood iron", 60, { "swing", "slash", "block" });
	Character* characterList[MAX_AMOUNT_CHARACTERS] = {NULL,NULL, NULL, NULL, NULL};
	 unsigned short int userinput = 0;
	 unsigned short int slot = 0;
	cout << "Welcom player to Worlds Edges" << endl << endl;
	system("pause");
	system("CLS");
	while (true)
	{
		cout << "Choose a slot to create a character:" << endl << endl;
		for (int i = 0; i < MAX_AMOUNT_CHARACTERS; i++)
		{
			if (characterList[i] == NULL)
			{
				cout << i + 1 << ") " << "Empty slot" << endl;
			}
			else
			{
				cout << i + 1 << ") ";
				characterList[i]->diplayName();
			}
		}
		cout << "6) Exit" << endl;
		cin >> slot;
		system("CLS");
		if (slot == 6)
		{
			return 0;
		}
		if (characterList[slot-1] == NULL)
		{
			cout << "Choose one race for your character:" << endl << endl;
			cout << "1) Human \n2) Elf \n3) Dwarf" << endl;
			cin >> userinput;
			cout << "Enter the characters name (no SPACES): ";
			cin >> name;
			switch (userinput)
			{
			case 1:
				characterList[slot-1] = new Human(name, sword);
				break;
			case 2:
				characterList[slot-1] = new Elf(name, wand);
				break;
			case 3:
				characterList[slot-1] = new Dwarf(name, shovel);
				break;
			default:
				break;
			}
		}
		else
		{
			characterList[slot-1]->diplayInfo();
			cout << "1) DELETE \n2)exit" << endl;
			cin >> userinput;
			if (userinput == 1)
			{
				delete characterList[slot - 1];
				characterList[slot - 1] = NULL;
			}
		}
		system("CLS");
	}
}